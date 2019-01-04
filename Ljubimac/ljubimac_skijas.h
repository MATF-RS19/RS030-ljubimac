#ifndef LJUBIMAC_SKIJAS_H
#define LJUBIMAC_SKIJAS_H
#include <QGraphicsPixmapItem>
#include <QKeyEvent>

class Ljubimac_skijas:public QGraphicsPixmapItem
{
public:
    Ljubimac_skijas();
    void keyPressEvent(QKeyEvent *event);
};

#endif // LJUBIMAC_SKIJAS_H
