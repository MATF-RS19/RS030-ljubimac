#include "sapunica.h"

Sapunica::Sapunica(Ui::MainWindow *ui): m_ui(ui)
{
    setPixmap(QPixmap(":images/mehurici.png"));
    setScale(0.5);
    setPos(QPointF(150,180));
}
