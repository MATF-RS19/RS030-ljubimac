#ifndef LOPTA_H
#define LOPTA_H
#include <QObject>
#include <QGraphicsPixmapItem>
#include "ljubimac_bomba.h"

class Lopta:public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Lopta();
private slots:
    void pomeri();
signals:
    void sudar();
};

#endif // LOPTA_H
