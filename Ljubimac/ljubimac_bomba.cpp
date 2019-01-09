#include "ljubimac_bomba.h"

Ljubimac_bomba::Ljubimac_bomba()
{
  setPixmap(QPixmap(":images/kuce2.png").scaled(80,80));
}

void Ljubimac_bomba::keyPressEvent(QKeyEvent *event)
{

       // pomeraj desno
       if (event->key() == Qt::Key_Right){
           poz = pos();
           if(pos().x()+100<660){
           int xPos = x() + 40;
           int yPos = y();
           setPos(xPos,yPos);
           }
       }

       // pomeraj levo
       if (event->key() == Qt::Key_Left){
           poz = pos();
           if(pos().x()>0){
           int xPos = x() - 40;
           int yPos = y();
           setPos(xPos,yPos);
           }
       }




   }

