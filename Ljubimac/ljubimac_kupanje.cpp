#include "ljubimac_kupanje.h"

Ljubimac_kupanje::Ljubimac_kupanje(Ui::MainWindow *ui):m_ui(ui)
{
    setPixmap(QPixmap(":images/kuce2_fliped.png"));
    setPos(QPointF(245,200));

}

void Ljubimac_kupanje::kupanje()
{
  m_ui->CistocaBar->setValue(100);
}
