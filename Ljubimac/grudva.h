#ifndef GRUDVA_H
#define GRUDVA_H
#include <QObject>
#include <QGraphicsPixmapItem>

class Grudva:public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Grudva();
private:
    int velicina=0;
private slots:
    void pomeri();
signals:
    void sudar();
};

#endif // GRUDVA_H
