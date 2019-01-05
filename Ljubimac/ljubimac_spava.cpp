#include "ljubimac_spava.h"
#include <QTimer>


Ljubimac_spava::Ljubimac_spava(Ui::MainWindow * ui):m_ui(ui)
{
    setPixmap(QPixmap(":images/kuce2_fliped.png"));
    setPos(QPointF(250,150));
}

void Ljubimac_spava::spavaj()
{
    m_ui->bt_budjenje->setDisabled(false);
    m_ui->bt_spavaj->setDisabled(true);
    setPixmap(QPixmap(":images/kuce_spava2_flip.png"));
    setScale(0.75);
    setPos(QPointF(250,130));
    m_ui->pushButton_spav_1->setDisabled(true);
    m_ui->pushButton_spav_2->setDisabled(true);

    //pocetno = new QTime();
    //*pocetno = pocetno->currentTime();

    //m_ui->naspavanostBar->setValue(m_ui->naspavanostBar->value()+1);


}


void Ljubimac_spava::budjenje()
{


    m_ui->bt_budjenje->setDisabled(true);
    m_ui->bt_spavaj->setDisabled(false);
    setPixmap(QPixmap(":images/kuce2_fliped.png"));
    setPos(QPointF(250,150));
    setScale(1);
    m_ui->pushButton_spav_1->setDisabled(false);
    m_ui->pushButton_spav_2->setDisabled(false);
    //zavrsno = new QTime();
    //*zavrsno = zavrsno->currentTime();
    //m_ui->naspavanostBar->setValue(m_ui->naspavanostBar->value()+pocetno->secsTo(*zavrsno)/20);

}


