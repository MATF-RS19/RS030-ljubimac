#ifndef MYRECT_H
#define MYRECT_H
#include <QGraphicsRectItem>
class MyRect : public QGraphicsRectItem
{
public:
    MyRect(int x, int y);
    static int duz;
    static int adv;
    static int random;
    static int* curr;
 //   static MyRect *cur;
    // QGraphicsItem interface
public:
    void advance(int phase);
    void setDefault();
};
//MyRect* MyRect::cur = nullptr;



#endif // MYRECT_H
