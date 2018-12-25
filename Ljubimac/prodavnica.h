#ifndef PRODAVNICA_H
#define PRODAVNICA_H
#include <QVector>
#include "ui_mainwindow.h"
#include "hrana.h"
class Prodavnica
{
public:
    Prodavnica(Ui::MainWindow * ui);

    void dodaj_proizvod(const Hrana & jelo);
    void ispisi_na_gui(const Prodavnica& prod);
    ~Prodavnica();
private:
    QVector<Hrana *> m_prodavnica;
    Ui::MainWindow * m_ui;
};

#endif // PRODAVNICA_H
