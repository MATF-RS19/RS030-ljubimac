#ifndef LJUBIMAC_BOMBA_H
#define LJUBIMAC_BOMBA_H


#include <QGraphicsPixmapItem>
#include <QKeyEvent>
#include <QPointF>

class Ljubimac_bomba:public QGraphicsPixmapItem
{
public:
    Ljubimac_bomba();
    void keyPressEvent(QKeyEvent *event);
    QPointF poz;
};

#endif // LJUBIMAC_BOMBA_H
