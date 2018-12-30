#include "prodavnica.h"
#include "kolac.h"
#include "hamburger.h"
#include "pica.h"
#include "kobasica.h"
#include "sladoled.h"
#include "sunka.h"
#include <QDebug>

Prodavnica::Prodavnica(Ui::MainWindow *ui):m_ui(ui)
{
    kolac * kol=new kolac(150,438,"Kolač");
    hamburger * ham= new hamburger(320, 502, "Hamburger");
    kobasica * kob= new kobasica(265, 321, "Kobasica");
    pica * pic= new pica(120, 266, "Pica");
    sladoled * slad= new sladoled(90, 216, "Sladoled");
    sunka * sun= new sunka(432, 511, "Šunka");

    m_prodavnica.push_back(kol);
    m_prodavnica.push_back(ham);
    m_prodavnica.push_back(kob);
    m_prodavnica.push_back(pic);
    m_prodavnica.push_back(slad);
    m_prodavnica.push_back(sun);


    }

void Prodavnica::ispisi_na_gui(const Prodavnica& prod){


    int i=0;
    m_ui->fj1_naziv_2->setText(prod.m_prodavnica.at(i)->naziv());
    m_ui->vr_e_1->setText(QString::number(prod.m_prodavnica.at(i)->en_vred()));
    m_ui->cena_1->setText(QString::number(prod.m_prodavnica.at(i)->cena()));
    i++;
    m_ui->fj2_naziv_2->setText(prod.m_prodavnica.at(i)->naziv());
    m_ui->vr_e_2->setText(QString::number(prod.m_prodavnica.at(i)->en_vred()));
    m_ui->cena_2->setText(QString::number(prod.m_prodavnica.at(i)->cena()));
    i++;
    m_ui->fj3_naziv_2->setText(prod.m_prodavnica.at(i)->naziv());
    m_ui->vr_e_3->setText(QString::number(prod.m_prodavnica.at(i)->en_vred()));
    m_ui->cena_3->setText(QString::number(prod.m_prodavnica.at(i)->cena()));
    i++;
    m_ui->fj4_naziv_2->setText(prod.m_prodavnica.at(i)->naziv());
    m_ui->vr_e_4->setText(QString::number(prod.m_prodavnica.at(i)->en_vred()));
    m_ui->cena_4->setText(QString::number(prod.m_prodavnica.at(i)->cena()));
    i++;
    m_ui->fj5_naziv_2->setText(prod.m_prodavnica.at(i)->naziv());
    m_ui->vr_e_5->setText(QString::number(prod.m_prodavnica.at(i)->en_vred()));
    m_ui->cena_5->setText(QString::number(prod.m_prodavnica.at(i)->cena()));
    i++;
    m_ui->fj6_naziv_2->setText(prod.m_prodavnica.at(i)->naziv());
    m_ui->vr_e_6->setText(QString::number(prod.m_prodavnica.at(i)->en_vred()));
    m_ui->cena_6->setText(QString::number(prod.m_prodavnica.at(i)->cena()));

}



QVector<Hrana *> Prodavnica::vector_prod()
{
    return m_prodavnica;
}


Prodavnica::~Prodavnica()
{
  //  delete m_ui;//greska
   //m_prodavnica.QVector::~QVector();//ne znam zasto je greska
}
