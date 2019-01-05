#ifndef LJUBIMAC_IGRAONICA_H
#define LJUBIMAC_IGRAONICA_H
#include <QGraphicsPixmapItem>
#include "ui_mainwindow.h"

class Ljubimac_igraonica : public QGraphicsPixmapItem
{
public:
    Ljubimac_igraonica(Ui::MainWindow *ui);

private:
    Ui::MainWindow *m_ui;

};


#endif // LJUBIMAC_IGRAONICA_H
