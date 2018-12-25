#ifndef FRIZIDER_H
#define FRIZIDER_H
#include <QMap>
#include "tfj.h"
#include "hrana.h"
#include "ui_mainwindow.h"

class Frizider:public TFJ
{
public:
    Frizider(Ui::MainWindow * ui);

    //metod koji mozemo pozvati pri kupovini
    void dodaj_hranu(const Hrana& jelo);

    void uzmi_hranu(const Hrana& jelo);

    void ispisi_na_gui(const Frizider& friz);

    // TFJ interface
    QJsonObject toJson() const;
    void fromJson(const QJsonObject &json);


    ~Frizider();
private:

    QMap<Hrana*, unsigned> m_frizider;
    Ui::MainWindow* m_ui;
};

#endif // FRIZIDER_H
