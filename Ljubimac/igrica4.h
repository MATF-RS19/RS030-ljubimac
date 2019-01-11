#ifndef IGRICA4_H
#define IGRICA4_H
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QVector>
#include <QString>
#include <cstdlib>
#include "ui_mainwindow.h"
#include "kartica.h"

class Igrica4 : public QGraphicsView
{
    Q_OBJECT

public:
    Igrica4(Ui::MainWindow *ui);

private:
    Ui::MainWindow *m_ui;
    QGraphicsScene *scena;
    int brojac_okrenutih;
    //Kartica *k0, *k1/*,*k2, *k3, *k4, *k5, *k6, *k7, *k8, *k9, *k10, *k11, *k12, *k13, *k14, *k15, *k16, *k17, *k18, *k19*/;
    QVector<Kartica *> kartice;
    QVector<QString> slike = {":/images/hamburger_memory.png",
                              ":/images/jelka_memory.png",
                              ":/images/kobasica_memory.png",
                              ":/images/kolac_memory.png",
                              ":/images/kuce3_memory.png",
                              ":/images/kuce_sa_koskom_memory.png",
                              ":/images/medenjak_memory.png",
                              ":/images/pizza_memory.png",
                              ":/images/sladoled_memory.png",
                              ":/images/sunka_memory.png",
                              ":/images/hamburger_memory.png",
                              ":/images/jelka_memory.png",
                              ":/images/kobasica_memory.png",
                              ":/images/kolac_memory.png",
                              ":/images/kuce3_memory.png",
                              ":/images/kuce_sa_koskom_memory.png",
                              ":/images/medenjak_memory.png",
                              ":/images/pizza_memory.png",
                              ":/images/sladoled_memory.png",
                              ":/images/sunka_memory.png"};


private slots:
    void izadji();
    void razresi_klik(int i);
    void uspesno_zavrsi();

signals:
    void pobeda();
};
#endif // IGRICA4_H
