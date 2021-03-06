#include "frizider.h"
#include "kolac.h"
#include "hamburger.h"
#include "pica.h"
#include "kobasica.h"
#include "sladoled.h"
#include "sunka.h"
#include <QDebug>

Frizider::Frizider(Ui::MainWindow * ui):m_ui(ui)
{

  kolac * kol=new kolac(150,438,"Kolač");
  hamburger * ham= new hamburger(320, 502, "Hamburger");
  kobasica * kob= new kobasica(265, 321, "Kobasica");
  pica * pic= new pica(120, 266, "Pica");
  sladoled * slad= new sladoled(90, 216, "Sladoled");
  sunka * sun= new sunka(432, 511, "Šunka");

  m_frizider.insert(kol,0);
  m_frizider.insert(ham, 0);
  m_frizider.insert(kob, 0);
  m_frizider.insert(pic, 0);
  m_frizider.insert(slad,0);
  m_frizider.insert(sun,0);
}

void Frizider::dodaj_hranu(const Hrana &jelo)
{

    for(auto i=m_frizider.begin(); i!=m_frizider.end();i++)
        if(i.key()->naziv()==jelo.naziv())
            i.value()+=1;

}

void Frizider::uzmi_hranu(const Hrana &jelo)
{
    for(auto i=m_frizider.begin(); i!=m_frizider.end();i++){
        if(i.key()->naziv()==jelo.naziv()){
            if(i.value()!=0)
                i.value()-=1;
            else
                i.value()=0;
           }
    }


}

void Frizider::ispisi_na_gui(const Frizider &friz) const
{
    auto i=friz.m_frizider.begin();
    m_ui->fj1_naziv->setText(i.key()->naziv());
    m_ui->vr_1->setText(QString:: number(i.key()->en_vred()));
    m_ui->vr_kol_1->setText(QString::number(i.value()));
    i++;
    m_ui->fj2_naziv->setText(i.key()->naziv());
    m_ui->vr_2->setText(QString:: number(i.key()->en_vred()));
    m_ui->vr_kol_2->setText(QString::number(i.value()));
    i++;
    m_ui->fj3_naziv->setText(i.key()->naziv());
    m_ui->vr_3->setText(QString:: number(i.key()->en_vred()));
    m_ui->vr_kol_3->setText(QString::number(i.value()));
    i++;
    m_ui->fj4_naziv->setText(i.key()->naziv());
    m_ui->vr_4->setText(QString:: number(i.key()->en_vred()));
    m_ui->vr_kol_4->setText(QString::number(i.value()));
    i++;
    m_ui->fj5_naziv->setText(i.key()->naziv());
    m_ui->vr_5->setText(QString:: number(i.key()->en_vred()));
    m_ui->vr_kol_5->setText(QString::number(i.value()));
    i++;
    m_ui->fj6_naziv->setText(i.key()->naziv());
    m_ui->vr_6->setText(QString:: number(i.key()->en_vred()));
    m_ui->vr_kol_6->setText(QString::number(i.value()));

}

QMap<Hrana *, unsigned> Frizider::mapa_frizider() const
{
    return m_frizider;
}

QJsonObject Frizider::toJson() const
{

    QJsonObject json;
    for(auto i = m_frizider.cbegin(); i != m_frizider.cend(); ++i)
    {
        if(i.key()->naziv() == "Hamburger")
            json["hamburger"] = (double)i.value();
        else if(i.key()->naziv() == "Kobasica")
            json["kobasica"] = (double)i.value();
        else if(i.key()->naziv() == "Kolač")
            json["kolac"] = (double)i.value();
        else if(i.key()->naziv() == "Pica")
            json["pica"] = (double)i.value();
        else if(i.key()->naziv() == "Sladoled")
            json["sladoled"] = (double)i.value();
        else if(i.key()->naziv() == "Šunka")
            json["sunka"] = (double)i.value();


    }

    return json;

}

void Frizider::fromJson(const QJsonObject &json)
{
    for(auto i = m_frizider.begin(); i != m_frizider.end(); ++i)
    {
        if(i.key()->naziv() == "Hamburger")
            i.value() = qRound(json["hamburger"].toDouble());
        else if(i.key()->naziv() == "Kobasica")
            i.value() = qRound(json["kobasica"].toDouble());
        else if(i.key()->naziv() == "Kolač")
            i.value() = qRound(json["kolac"].toDouble());
        else if(i.key()->naziv() == "Pica")
            i.value() = qRound(json["pica"].toDouble());
        else if(i.key()->naziv() == "Sladoled")
            i.value() = qRound(json["sladoled"].toDouble());
        else if(i.key()->naziv() == "Šunka")
            i.value() = qRound(json["sunka"].toDouble());
    }

       ispisi_na_gui(*this);

}

Frizider::~Frizider()
{

    auto i =m_frizider.begin();
    delete i.key();
    i++;
    delete i.key();
    i++;
    delete i.key();
    i++;
    delete i.key();
    i++;
    delete i.key();
    i++;
    delete i.key();
}
