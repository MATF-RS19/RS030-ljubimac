#ifndef LJUBIMAC_SPAVA_H
#define LJUBIMAC_SPAVA_H
#include <QGraphicsPixmapItem>
#include "ui_mainwindow.h"

class Ljubimac_spava:public QGraphicsPixmapItem
{
public:
    Ljubimac_spava(Ui::MainWindow *m_ui);

    void spavaj();

    void budjenje();
private:
    Ui::MainWindow * m_ui;
};

#endif // LJUBIMAC_SPAVA_H
