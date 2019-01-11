#include "igrica4.h"
#include "ljubimac.h"
#include <QDebug>
#include <algorithm>
#include <ctime>
#include <QTimer>
#define W 681
#define H 411
#define L 130
#define U 55


Igrica4::Igrica4(Ui::MainWindow *ui) : m_ui(ui)
{

    std::random_shuffle(slike.begin(),slike.end());
    scena = new QGraphicsScene();
    setSceneRect(0, 0, W, H);
    setBackgroundBrush(QBrush(QImage(":/images/igra_memorije.png").scaled(W,H)));
    setScene(scena);
    setFixedSize(W,H);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);


   /* k0 = new Kartica(0);
    kartice.append(k0);
    k0->setPos(L,U);
   // k0->setScale(0.03);
    scena->addItem(k0);

    k1 = new Kartica(0);
    kartice.append(k1);
    k1->setPos(L + 80, U);
    //k1->setPixmap(QPixmap(":/images/paw.jpg"));

   // k1->setScale(0.01);
    scena->addItem(k1);

    Kartica *k = new Kartica(2);
    kartice.append(k);
    k->setPos(L + 160, U);
    scena->addItem(k);*/

    for(int i = 0; i < 20; i++)
    {
        Kartica *k = new Kartica(i);
        k->setPos(L + (i % 5)*80, U + (i / 5)*80);
        scena->addItem(k);
        kartice.append(k);
        connect(kartice[i],SIGNAL(kliknuto(int)),this,SLOT(razresi_klik(int)));
    }

    brojac_okrenutih = 0;

//    for(int i = 0; i < kartice.size();i++)
//        connect(kartice[i],SIGNAL(kliknuto(int)),this, SLOT(razresi_klik(int)));

    connect(this, SIGNAL(pobeda()), this, SLOT(uspesno_zavrsi()));

    show();

   /* k1 = new Kartica(m_ui,1);
    //kartice.append(k1);
    k1->setPos(W + 80, H);
    scena->addItem(k1);*/

   /* k2 = new Kartica(m_ui,2);
    kartice.append(k2);

    k3 = new Kartica(m_ui,3);
    kartice.append(k3);

    k4 = new Kartica(m_ui,4);
    kartice.append(k4);

    k5 = new Kartica(m_ui,5);
    kartice.append(k5);

    k6 = new Kartica(m_ui,6);
    kartice.append(k6);

    k7 = new Kartica(m_ui,7);
    kartice.append(k7);

    k8 = new Kartica(m_ui,8);
    kartice.append(k8);

    k9 = new Kartica(m_ui,9);
    kartice.append(k9);


    k10 = new Kartica(m_ui,10);
    kartice.append(k10);

    k11 = new Kartica(m_ui,11);
    kartice.append(k11);

    k12 = new Kartica(m_ui,12);
    kartice.append(k12);

    k13 = new Kartica(m_ui,13);
    kartice.append(k13);

    k14 = new Kartica(m_ui,14);
    kartice.append(k14);

    k15 = new Kartica(m_ui,15);
    kartice.append(k15);

    k16 = new Kartica(m_ui,16);
    kartice.append(k16);

    k17 = new Kartica(m_ui,17);
    kartice.append(k17);

    k18 = new Kartica(m_ui,18);
    kartice.append(k18);

    k19 = new Kartica(m_ui,19);
    kartice.append(k19);


    for(int i = 0; i < kartice.size(); i++)
    {
        kartice[i]->setPos(W + (i % 5)*80, H + (i / 5)*80);
        scena->addItem(kartice[i]);
        qDebug()<< i;
    }*/


}

void Igrica4::razresi_klik(int i)
{
    //qDebug() << i;

    if(brojac_okrenutih == 0 && kartice[i]->get_stanje() == false)
    {
        kartice[i]->setPixmap(QPixmap(slike[i]));
        kartice[i]->set_stanje(true);
        brojac_okrenutih ++;
    }

    else if(brojac_okrenutih == 1)
    {
        for(int j = 0; j < kartice.size();j++)
        {
            if(kartice[j]->get_stanje() && i == j)
            {
                kartice[j]->setPixmap(QPixmap(":/images/purple.png"));
                kartice[j]->set_stanje(false);
                brojac_okrenutih--;
                break;
            }

            else if(kartice[j]->get_stanje() && i != j)
            {
                if(slike[i] == slike[j])
                {
                    kartice[i]->setPixmap(QPixmap(slike[i]));
                    kartice[i]->set_stanje(true);
                    brojac_okrenutih++;

                    //QTimer *t = new QTimer(this);
                    //t->setSingleShot(true);
                    //t->start(1000);
                    //while(t->isActive());

                    kartice[i]->set_stanje(false);
                    kartice[j]->set_stanje(false);
                    scena->removeItem(kartice[i]);
                    scena->removeItem(kartice[j]);
                    brojac_okrenutih -=2;
                    break;

                }

                else
                {

                    kartice[i]->setPixmap(QPixmap(slike[i]));
                    kartice[i]->set_stanje(true);
                    brojac_okrenutih ++;
                    break;
                }
            }
        }
    }

    else if(brojac_okrenutih == 2)
    {
        if(kartice[i]->get_stanje())
        {
            kartice[i]->setPixmap(QPixmap(":/images/purple.png"));
            kartice[i]->set_stanje(false);
            brojac_okrenutih--;
        }

        else
        {
            for(int j = 0; j < kartice.size(); j++)
            {
                if(kartice[j]->get_stanje())
                {
                    kartice[j]->setPixmap(QPixmap(":/images/purple.png"));
                    kartice[j]->set_stanje(false);
                    brojac_okrenutih--;
                }

            }

            kartice[i]->setPixmap(QPixmap(slike[i]));
            kartice[i]->set_stanje(true);
            brojac_okrenutih++;
        }
    }

    if(scena->items().isEmpty())
    {
        emit pobeda();
    }

}

void Igrica4::izadji()
{

    m_ui->stackedWidget->setCurrentIndex(2);
    delete this;
}


void Igrica4::uspesno_zavrsi()
{
    Ljubimac *l = Ljubimac::singleton();
    l->add_novac(100);
    m_ui->stackedWidget->setCurrentIndex(2);
    delete this;
}
