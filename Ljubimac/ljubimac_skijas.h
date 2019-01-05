#ifndef LJUBIMAC_SKIJAS_H
#define LJUBIMAC_SKIJAS_H
#include <QGraphicsPixmapItem>
#include <QKeyEvent>
#include <QtMultimedia/QMediaPlayer>

class Ljubimac_skijas:public QGraphicsPixmapItem
{
public:
    Ljubimac_skijas();
    void keyPressEvent(QKeyEvent *event);
    ~Ljubimac_skijas(){
        delete muz_pomeraj;
    }
private:
    QMediaPlayer * muz_pomeraj;
};

#endif // LJUBIMAC_SKIJAS_H
