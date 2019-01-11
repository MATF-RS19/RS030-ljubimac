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


    for(int i = 0; i < 20; i++)
    {
        Kartica *k = new Kartica(i);
        k->setPos(L + (i % 5)*80, U + (i / 5)*80);
        scena->addItem(k);
        kartice.append(k);
        connect(kartice[i],SIGNAL(kliknuto(int)),this,SLOT(razresi_klik(int)));
    }

    brojac_okrenutih = 0;

    connect(this, SIGNAL(pobeda()), this, SLOT(uspesno_zavrsi()));

    show();




}

void Igrica4::razresi_klik(int i)
{


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

                    // timer

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
