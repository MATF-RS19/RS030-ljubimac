#include "game.h"
#include "myrect.h"
#include <QPushButton>
#include <QLabel>
#include <QMessageBox>
#include "ljubimac.h"

#define VR 60

bool Game::exist = false;


void Game::changeTime()
{
    int vr = vreme->text().toInt();
    vr--;
    if(vr>=0)vreme->setText(QString::number(vr));
    if(!player->ziv())timer.stop();
    if(vr == 0)
    {
        timer.stop();
        player->umro();
        l->add_novac(player->get_skor());
    }
}

void Game::load()
{
    QMessageBox::information(this,"Introduction Window", "Nagore strelica i spejs\nKoliko skora osvojite toliko para dobijete :)\nDa bi igrali mora da imate snagu > 20\nI gubite 1 Snagu sa svakim igranjem :(");
    if(l->get_sit() <= 20)
    {
        QMessageBox::information(this,"Warning", "Nemate dovoljno snage");
        return;
    }
    l->dec_sit();
    dugme->setVisible(false);
    if(player != nullptr)
    {
       player->setDefault();
       for(int i = 0; i < 5; i++)
           itemi[i]->setVisible(true);
       ((MyRect*)itemi[0])->setDefault();
       player->setVisible(true);
       player->setFlag(QGraphicsItem::ItemIsFocusable);
       player->setFocus();
       vreme->setText(QString::number(VR));
       timer.start(1000);
       return;
    }
    player = new Player;
    scene->addItem(player);
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();
    itemi = new QGraphicsRectItem*[5];
    for(int i = 0, x = 10, y = 500; i < 5; i++, x+=180, y-=60)
    {
        itemi[i] = new MyRect(x, y);
        scene->addItem(itemi[i]);
    }
    timer.start(1000);
    QObject::connect(player->tajmer(), SIGNAL(timeout()), scene, SLOT(advance()));
    QObject::connect(player->deadTajmer(),SIGNAL(timeout()), player, SLOT(padni()));
    connect(player,SIGNAL(score_changed(int)), this, SLOT(setScore(int)));

}

void Game::setScore(int x)
{
   skor->setText(QString::number(x));
}

Game::Game(QWidget* parent) : QGraphicsView(parent)
{
    exist = true;
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0, 790, 590);
    setBackgroundBrush(QPixmap(":/images/jungle.jpg"));
    l = Ljubimac::singleton();
    /*
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();
    itemi = new QGraphicsRectItem*[5];
    for(int i = 0, x = 10, y = 500; i < 5; i++, x+=180, y-=60)
    {
        itemi[i] = new MyRect(x, y);
        scene->addItem(itemi[i]);
    }
    */
    setFixedSize(800, 600);
    setScene(scene);
    dugme = new QPushButton(this);
    dugme->setText("Igraj");
    dugme->setGeometry(390, 250, 100,100);
    vreme = new QLabel(this);
    vreme->setText(QString::number(VR));
    vreme->setFont(QFont("Times", 30, QFont::Bold));
    vreme->setStyleSheet("QLabel { color : blue; }");
    vreme->setGeometry(420,10, 100, 100);

    skor = new QLabel(this);
    skor->setText("0");
    skor->setFont(QFont("Times", 30, QFont::Bold));
    skor->setStyleSheet("QLabel { color : red; }");
    skor->setGeometry(10,10, 100, 100);
    show();
    /*
    QObject::connect(player->tajmer(), SIGNAL(timeout()), scene, SLOT(advance()));
    QObject::connect(player->deadTajmer(),SIGNAL(timeout()), player, SLOT(umri()));
    */
    connect(dugme, SIGNAL(clicked(bool)), this, SLOT(load()));
    connect(&timer,SIGNAL(timeout()), this, SLOT(changeTime()));
}

Game::~Game()
{
    delete scene;
}

void Game::ugasi()
{
   this->close();
}

void Game::closeEvent(QCloseEvent *)
{
    exist = false;
    delete this;
}
