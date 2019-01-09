
#include "player.h"
#include "myrect.h"
#include <QDebug>
#include <QPushButton>
#include "ljubimac.h"
#include "game.h"
Player::Player()
{
//    setRect(50, 300, 100, 200);
    slike[0] = QPixmap(":/images/j1.png");
    slike[1] = QPixmap(":/images/j2.png");
    slike[2] = QPixmap(":/images/j3.png");
    slike[3] = QPixmap(":/images/j4.png");
    slike[4] = QPixmap(":/images/j5.png");

    slike[0] = slike[0].scaled(100, 200);
    slike[1] = slike[1].scaled(100, 200);
    slike[2] = slike[2].scaled(100, 200);
    slike[3] = slike[3].scaled(100, 200);
    slike[4] = slike[4].scaled(100, 200);
    setDefault();
}

void Player::padni()
{
   if(y()>700)
   {
       deadTimer.stop();
       auto pom = scene()->views();
       auto pom1 = (Game*)(pom.front());
       pom1->dugme->setVisible(true);

   }
   setPos(x(),y()+5);
}

void Player::set_score(int x)
{
    skor = x;
    emit score_changed(x);
}

void Player::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Space)
    {
        if(!uPokretu && !mrtav)
        {
            uPokretu = true;
            MyRect::adv = 15;
            timer.start(50);
            set_score(skor+1);
        }
    }
    else if(event->key() == Qt::Key_Up)
    {
        if(!uPokretu && !mrtav)
        {
            uPokretu = true;
            MyRect::adv = 30;
            timer.start(50);
            set_score(skor+2);
        }
    }
}

void Player::advance(int phase)
{
    if(old_hight-y() == 40)
    {
        setPixmap(slike[2]);
        raste =-1;
    }
    else if(old_hight-y() == 20)
        setPixmap(slike[1]);
    else if(raste == -1 && old_hight-y() == 30)
        setPixmap(slike[3]);
    else if(raste == -1 && old_hight-y() == 15)
        setPixmap(slike[1]);

    setPos(x(), y() - raste*5);
    if(y() == old_hight)
    {
        setPixmap(slike[0]);
        raste = 1;
        timer.stop();

        if(!((MyRect*)MyRect::curr)->isVisible())
        {
            deadTimer.start(50);
            setPixmap(slike[4]);
            mrtav = true;
            Ljubimac::singleton()->add_novac(skor);
       }
       else if(mrtav == true)
        {
           uPokretu = false;
           umro();
        }
       else   uPokretu = false;
    }
}

void Player::setDefault()
{
    setPixmap(slike[0]);
    setPos(50, 300);
    old_hight = y();
    uPokretu = false;
    mrtav = false;
    set_score(0);
}

void Player::umro()
{
   setPixmap(slike[4]);
   mrtav = true;
   if(!uPokretu)
   {
   auto pom = scene()->views();
   auto pom1 = (Game*)(pom.front());
   pom1->dugme->setVisible(true);
   }
}
