#include "grudva.h"
#include <cstdlib>
#include <QTimer>
#include "ljubimac_skijas.h"
#define X -40
#define VECE 0.0006

Grudva::Grudva()
{
    setPixmap(QPixmap(":images/grudvica.png"));
    setTransformOriginPoint(50,50);
    setScale(0.1);

    srand(time(NULL));

    int random_num=rand() % 3;

    if(random_num==0)
        setPos(X,10);
    else if(random_num==1)
        setPos(X,95);
    else
        setPos(X,210);

    QTimer * timer=new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(pomeri()));
    timer->start(25);
}

void Grudva::pomeri(){
   QList<QGraphicsItem *> colliding_items = collidingItems();


   for (int i = 0, n = colliding_items.size(); i < n; ++i){
        if (typeid(*(colliding_items[i])) == typeid(Ljubimac_skijas)){
            //qDebug()<<"Pre sudara";
            emit sudar();
            //delete this;
            //qDebug()<<"Sudar se desio :D !!!";
            return;
        }
    }


   setPos(x()+5,y()+2.5);
   setScale(0.1+velicina*VECE);
   velicina++;
   if(pos().y()>600){
      delete this;
    }
}
