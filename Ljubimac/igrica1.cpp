#include "igrica1.h"
#include <QDebug>
#include <QTimer>
#include <QElapsedTimer>
#include "grudva.h"
#define W 671
#define H 391
#define T_GRUDVA 1500
#define T_ADD 10000
#define T_WAIT 1300
#define VR_IGRE 10

Igrica1::Igrica1(Ui::MainWindow *ui):m_ui(ui)
{
    scene=new QGraphicsScene();
    setSceneRect(0,0,W,H);
    setBackgroundBrush(QBrush(QImage(":/images/mount.png").scaled(W,H)));

    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(W,H);

    igrac = new Ljubimac_skijas();
    igrac->setScale(0.25);
    igrac->setRotation(-10);
    /*
      270,170  gore
      150,210  sredina
      70,245   dole
     */
    igrac->setPos(150,210);

    //postavljanje za presskeyevent
    igrac->setFlag(QGraphicsItem::ItemIsFocusable);
    igrac->setFocus();

    scene->addItem(igrac);

    QTimer *timer=new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(napravi_grudvu()));
    timer->start(T_GRUDVA);

    QTimer *timer_bar=new QTimer();
    connect(timer_bar,SIGNAL(timeout()),this,SLOT(bar_smanji()));
    timer_bar->start(T_ADD);

    connect(this,SIGNAL(nema_energije()),this,SLOT(end_game_energ()));

    //muzika
    QMediaPlaylist *playlist = new QMediaPlaylist();
    playlist->addMedia(QUrl("qrc:/sounds/muz_pozadina_1.mp3"));
    playlist->setPlaybackMode(QMediaPlaylist::Loop);

    muzika_poz = new QMediaPlayer();
    muzika_poz->setPlaylist(playlist);
    muzika_poz->setVolume(50);
    muzika_poz->play();

    show();
}

void Igrica1::end_game(){

    muzika_poz->stop();

    QElapsedTimer t;
    t.start();

    while(t.elapsed() < T_WAIT)

    emit end();
    m_ui->stackedWidget->setCurrentIndex(2);
    delete this;
}

void Igrica1::napravi_grudvu()
{
    if(m_ui->naspavanostBar->value()<VR_IGRE || m_ui->SnagaBar->value() <VR_IGRE){
        emit nema_energije();
        return;
    }
    Grudva *grudva=new Grudva();
    m_ui->l_kol_novca->setText(QString::number(m_ui->l_kol_novca->text().toInt()+10));
    connect(grudva,SIGNAL(sudar()),this,SLOT(end_game()));
    scene->addItem(grudva);
}

void Igrica1::bar_smanji()
{
    m_ui->SnagaBar->setValue(m_ui->SnagaBar->value()-1);
    m_ui->naspavanostBar->setValue(m_ui->naspavanostBar->value()-1);
    m_ui->CistocaBar->setValue(m_ui->CistocaBar->value()-1);
}

void Igrica1::end_game_energ()
{

     muzika_poz->stop();

     QElapsedTimer t_1;
     t_1.start();

     while(t_1.elapsed() < T_WAIT)

     emit end();
     m_ui->stackedWidget->setCurrentIndex(2);
     delete this;
}


void Igrica1::iskljuci_zvuk(){
    muzika_poz->pause();
    m_ui->bt_on_1->setDisabled(false);
    m_ui->bt_off_1->setDisabled(true);

}

void Igrica1::ukljuci_zvuk(){
    muzika_poz->play();
    m_ui->bt_on_1->setDisabled(true);
    m_ui->bt_off_1->setDisabled(false);
}
