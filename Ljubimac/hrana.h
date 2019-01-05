#ifndef HRANA_H
#define HRANA_H
#include <QString>
#include <QGraphicsPixmapItem>
#include "ui_mainwindow.h"

class Hrana:public QGraphicsPixmapItem
{
public:
    Hrana(unsigned cena,unsigned en_vred,QString naziv);

    unsigned cena() const;
    unsigned en_vred()const;
    QString naziv()const;

    void setCena(unsigned cena);
    void setEnVred(unsigned en_vred);
    void setNaziv(QString naziv);
private:
    unsigned m_cena;
    unsigned m_en_vred;
    QString m_naziv;

};

#endif // HRANA_H
