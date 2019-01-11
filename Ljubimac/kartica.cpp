#include "kartica.h"



Kartica::Kartica(int i)
{


    setPixmap(QPixmap(":/images/purple.png"));

    na_gore = false;
    indeks = i;

}

bool Kartica::get_stanje()
{
    return na_gore;
}


void Kartica::set_stanje(bool st)
{
    na_gore = st;
}


int Kartica::get_indeks()
{

    return indeks;
}


void Kartica::set_indeks(int i)
{
    indeks = i;
}

void Kartica::mousePressEvent(QGraphicsSceneMouseEvent *event)
{


    if(event->button() == Qt::LeftButton)
    {
       emit kliknuto(indeks);

    }


}


