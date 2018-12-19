#ifndef HRANA_H
#define HRANA_H
#include <QString>
#include <QGraphicsPixmapItem>

class Hrana:public QGraphicsPixmapItem
{
public:
    Hrana(unsigned cena,unsigned en_vred,QString naziv);
private:
    unsigned m_cena;
    unsigned m_en_vred;
    QString m_naziv;
};

#endif // HRANA_H
