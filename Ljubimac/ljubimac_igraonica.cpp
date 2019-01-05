#include "ljubimac_igraonica.h"

Ljubimac_igraonica::Ljubimac_igraonica(Ui::MainWindow *ui):m_ui(ui)
{
    setPixmap(QPixmap(":images/kuce3.png"));
    setPos(QPointF(350,250));

}
