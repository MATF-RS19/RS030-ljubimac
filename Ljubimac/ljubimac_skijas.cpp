#include "ljubimac_skijas.h"

Ljubimac_skijas::Ljubimac_skijas()
{
  setPixmap(QPixmap(":images/ljubimac_skijas.png"));
}

void Ljubimac_skijas::keyPressEvent(QKeyEvent *event)
{
    QPointF pos_1=QPointF(270,170);//gore  180,130
    QPointF pos_2=QPointF(150,210);//sredina
    QPointF pos_3=QPointF(70,245);//90,270 dole
    // move the player left and right
    if (event->key() == Qt::Key_Up){
        if(pos()==pos_2)
           setPos(pos_1);
        else if(pos()==pos_3)
            setPos(pos_2);
    }
    else if (event->key() == Qt::Key_Down){
        if(pos()==pos_1)
           setPos(pos_2);
        else if(pos()==pos_2)
            setPos(pos_3);
    }
}
