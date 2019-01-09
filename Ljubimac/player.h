#ifndef PLAYER_H
#define PLAYER_H
#include <QGraphicsRectItem>
#include <QGraphicsPixmapItem>
#include <QTimer>
#include <QKeyEvent>
#include <QGraphicsScene>
#include <QDebug>
#include "myrect.h"
class Player :public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Player();
    // QGraphicsItem interface
    QTimer* tajmer(){return &timer;}
    QTimer* deadTajmer(){return &deadTimer;}
    bool ziv()const{return !mrtav;}
    bool u_pokretu()const{return uPokretu;}
    int get_skor()const{return skor;}
public slots:
    void padni();
signals:
    void score_changed(int x);
private:
    void set_score(int x);
    bool uPokretu = false;
    bool mrtav = false;
    int raste = 1;
    int skor = 0;
    int old_hight;
    QTimer timer, deadTimer;
    QPixmap slike[5];
    // QGraphicsItem interface
protected:
    void keyPressEvent(QKeyEvent *event);

    // QGraphicsItem interface
public:
    void advance(int phase);
    void setDefault();
    void umro();
};

#endif // PLAYER_H
