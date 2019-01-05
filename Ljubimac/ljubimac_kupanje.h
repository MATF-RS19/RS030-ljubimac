#ifndef LJUBIMAC_KUPANJE_H
#define LJUBIMAC_KUPANJE_H

#include <QGraphicsPixmapItem>
#include "ui_mainwindow.h"

class Ljubimac_kupanje: public QGraphicsPixmapItem
{
public:
    Ljubimac_kupanje(Ui::MainWindow *ui);

    void kupanje();

private:
    Ui::MainWindow * m_ui;
};

#endif // LJUBIMAC_KUPANJE_H
