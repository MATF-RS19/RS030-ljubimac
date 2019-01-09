#ifndef BOMBA_H
#define BOMBA_H
#include <QObject>
#include <QGraphicsPixmapItem>

class Bomba:public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Bomba();
private slots:
    void pomeri();
signals:
    void sudar();
};

#endif // BOMBA_H
