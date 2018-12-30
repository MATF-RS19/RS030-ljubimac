#include "ljubimac_spava.h"

Ljubimac_spava::Ljubimac_spava(Ui::MainWindow * ui):m_ui(ui)
{

}

void Ljubimac_spava::spavaj()
{
    m_ui->bt_budjenje->setDisabled(false);
    m_ui->bt_spavaj->setDisabled(true);
    m_ui->pushButton_spav_1->setDisabled(true);
    m_ui->pushButton_spav_2->setDisabled(true);

}

void Ljubimac_spava::budjenje()
{

    m_ui->naspavanostBar->setValue(m_ui->naspavanostBar->value()+1);
    m_ui->bt_budjenje->setDisabled(true);
    m_ui->bt_spavaj->setDisabled(false);
    m_ui->pushButton_spav_1->setDisabled(false);
    m_ui->pushButton_spav_2->setDisabled(false);
}
