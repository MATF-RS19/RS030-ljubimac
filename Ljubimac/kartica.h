#ifndef KARTICA_H
#define KARTICA_H
#include <QGraphicsPixmapItem>
#include <QGraphicsSceneMouseEvent>
#include <QObject>


class Kartica :public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Kartica(int i);
    bool get_stanje();
    void set_stanje(bool st);
    int get_indeks();
    void set_indeks(int i);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    //void mouseReleaseEvent(QMouseEvent *event);

private:
    bool na_gore;
    int indeks;


signals:
    void kliknuto(int i);
};

#endif // KARTICA_H
