#include "kada.h"

Kada::Kada(Ui::MainWindow *ui): m_ui(ui)
{
    setPixmap(QPixmap(":images/kada2.png"));
    setScale(0.75);
    setPos(QPointF(150,120));
}
