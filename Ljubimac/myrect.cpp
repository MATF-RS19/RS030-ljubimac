
#include "myrect.h"
#include <QDebug>
#include <cstdlib>
#include <ctime>
#include <QBrush>
int MyRect::duz = 2;
int MyRect::adv = 15;
int MyRect::random = 0;
int* MyRect::curr = nullptr;

MyRect::MyRect(int x, int y)
{
    setPos(x, y);
    setRect(0, 0, 180, 700);
    QBrush brush(Qt::red);
    setBrush(brush);

}

void MyRect::advance(int phase)
{
   if(adv== 0 || phase == 0)return;
   setPos(x()-60, y()+20);
   adv--;
   if(x() == -170)
   {
       setPos(730, 260);
       if(random == 0)
       {
           srand(time(NULL));
           random = rand()%4+1;
           setVisible(false);
       }
       else
       {
           random--;
           setVisible(true);
       }
   }
   else if(x() == 10)
   {
        curr = (int*)this;
   }

}
void MyRect::setDefault()
{
    duz = 2;
    adv = 15;
    random = 0;
    curr = nullptr;
}
