#ifndef FRIZIDER_H
#define FRIZIDER_H
#include <QVector>
#include <QPair>
#include "tfj.h"
#include "hrana.h"
#include "ui_mainwindow.h"

class Frizider:public TFJ
{
public:
    Frizider(const QVector<QPair<Hrana*,unsigned>>& friz,Ui::MainWindow * ui);

    //metod koji mozemo pozvati pri kupovini
    void dodaj_hranu(const Hrana& jelo);

    // TFJ interface
    QJsonObject toJson() const;
    void fromJson(const QJsonObject &json);

    ~Frizider();
private:
    QVector<QPair<Hrana*,unsigned>> m_frizider;
    Ui::MainWindow* m_ui;
};

#endif // FRIZIDER_H
