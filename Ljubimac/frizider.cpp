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
  //fromJson()
  //ispisi_na_gui()
  kolac * kol=new kolac(150,438,"Kolac");
  hamburger * ham= new hamburger(320, 502, "Hamburger");
  kobasica * kob= new kobasica(265, 321, "Kobasica");
  pica * pic= new pica(120, 266, "Pica");
  sladoled * slad= new sladoled(90, 216, "Sladoled");
  sunka * sun= new sunka(432, 511, "Sunka");

  m_frizider.insert(kol,10);
  m_frizider.insert(ham, 4);
  m_frizider.insert(kob, 12);
  m_frizider.insert(pic, 6);
  m_frizider.insert(slad, 3);
  m_frizider.insert(sun,7);
}

void Frizider::dodaj_hranu(const Hrana &jelo)
{

}

void Frizider::uzmi_hranu(const Hrana &jelo)
{

}

void Frizider::ispisi_na_gui(const Frizider &friz)
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

QMap<Hrana *, unsigned> Frizider::mapa_frizider()
{
    return m_frizider;
}

QJsonObject Frizider::toJson() const
{

}

void Frizider::fromJson(const QJsonObject &json)
{

}

Frizider::~Frizider()
{

}
