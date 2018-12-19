#ifndef PRODAVNICA_H
#define PRODAVNICA_H
#include <QVector>
#include "ui_mainwindow.h"
#include "hrana.h"
class Prodavnica
{
public:
    Prodavnica(const QVector<Hrana *>& prodavnica,Ui::MainWindow * ui);

    void dodaj_proizvod(const Hrana & jelo);

    ~Prodavnica();
private:
    QVector<Hrana *> m_prodavnica;
    Ui::MainWindow * m_ui;
};

#endif // PRODAVNICA_H
