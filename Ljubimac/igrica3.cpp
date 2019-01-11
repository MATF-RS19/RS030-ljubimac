#include "igrica3.h"
#include <QDebug>
#include <QTimer>
#include <QElapsedTimer>
#include "bomba.h"
#include "lopta.h"
#define W 671
#define H 391
#define T_BOMBA 4000
#define T_LOPTA 8000
#define T_ADD 6000
#define T_WAIT 1000
Igrica3::Igrica3(Ui::MainWindow *ui):m_ui(ui)
{

    scene=new QGraphicsScene();
    setSceneRect(0,0,W,H);
    setBackgroundBrush(QBrush(QImage(":/images/kucica.jpg").scaled(W,H)));


    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(W,H);

    lj=Ljubimac::singleton();
    igrac = new Ljubimac_bomba();
    igrac->setPos(400,280);

    //postavljanje za presskeyevent
    igrac->setFlag(QGraphicsItem::ItemIsFocusable);
    igrac->setFocus();

    scene->addItem(igrac);
    QTimer *timer1=new QTimer();
    connect(timer1,SIGNAL(timeout()),this,SLOT(napravi_bombu()));
    timer1->start(T_BOMBA);

    QTimer *timer2=new QTimer();
    connect(timer2,SIGNAL(timeout()),this,SLOT(napravi_loptu()));
    timer2->start(T_LOPTA);

    QTimer *timer_bar=new QTimer();
    connect(timer_bar,SIGNAL(timeout()),this,SLOT(bar_smanji()));
    timer_bar->start(T_ADD);

    connect(this,SIGNAL(nema_energije()),this,SLOT(end_game_energ()));

    QMediaPlaylist *playlist = new QMediaPlaylist();
    playlist->addMedia(QUrl("qrc:/sounds/muzika_za_igricu3.mp3"));
    playlist->setPlaybackMode(QMediaPlaylist::Loop);

    muzika = new QMediaPlayer();
    muzika->setPlaylist(playlist);
    muzika->setVolume(50);
    muzika->play();


    show();
}

void Igrica3::end_game(){

    QElapsedTimer t;
    t.start();

    while(t.elapsed() < T_WAIT)

    emit end();
    m_ui->stackedWidget->setCurrentIndex(2);
    delete this;
}


void Igrica3::napravi_bombu()
{


    Bomba *b=new Bomba();
    connect(b,SIGNAL(sudar()),this,SLOT(end_game()));


    scene->addItem(b);

}

void Igrica3::napravi_loptu()
{


    Lopta *l=new Lopta();
    connect(l,SIGNAL(sudar()),this,SLOT(dodaj()));
    scene->addItem(l);

}

void Igrica3:: dodaj(){
    m_ui->l_kol_novca->setText(QString::number(m_ui->l_kol_novca->text().toInt()+20));
}

void Igrica3::bar_smanji()
{
    lj->set_sit(lj->get_sit()-3);
    lj->set_cist(lj->get_cist()-3);
    lj->set_naspavanost(lj->get_naspavanost()-3);
}

void Igrica3::end_game_energ()
{

     QElapsedTimer t_1;
     t_1.start();

     while(t_1.elapsed() < T_WAIT)

     emit end();
     m_ui->stackedWidget->setCurrentIndex(2);
     delete this;
}
