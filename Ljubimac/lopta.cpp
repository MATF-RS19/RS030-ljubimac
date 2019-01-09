#include "lopta.h"
#include <cstdlib>
#include <QTimer>
#include "ljubimac_bomba.h"

Lopta::Lopta()
{
    setPixmap(QPixmap(":images/lopta.png"));
    setTransformOriginPoint(50,50);
    setScale(0.1);

    srand(time(NULL));

    int random_num=rand() % 500;
    setPos(random_num,0);

    QTimer * timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(pomeri()));
    timer->start(30);
}

void Lopta::pomeri(){
   QList<QGraphicsItem *> colliding_items = collidingItems();


   for (int i = 0, n = colliding_items.size(); i < n; ++i){
        if (typeid(*(colliding_items[i])) == typeid(Ljubimac_bomba)){
            emit sudar();
            delete this;
            return;
        }
    }


   setPos(x(),y()+2.5);
   if(pos().y()>280){
      delete this;
    }
}

