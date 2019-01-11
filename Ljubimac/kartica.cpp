#include "kartica.h"



Kartica::Kartica(int i)
{


    setPixmap(QPixmap(":/images/purple.png"));

    //setVisible(true);

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
    //QString s = ":/images/hamburger_memory.png";

    if(event->button() == Qt::LeftButton)
    {
       emit kliknuto(indeks);

    }


}



/*

void Kartica::mouseReleaseEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton && isSelected())
    {
        if(na_gore)
        {
            setPixmap(QPixmap(":/images/purple.png"));
            set_stanje(false);
        }

        else
        {
            setPixmap(QPixmap(":/images/hamburger_memory.png"));
            set_stanje(true);
        }

    }
}
*/
