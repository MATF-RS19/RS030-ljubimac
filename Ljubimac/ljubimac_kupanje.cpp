#include "ljubimac_kupanje.h"

Ljubimac_kupanje::Ljubimac_kupanje(Ui::MainWindow *ui):m_ui(ui)
{

}

void Ljubimac_kupanje::kupanje()
{
  m_ui->CistocaBar->setValue(100);
}
