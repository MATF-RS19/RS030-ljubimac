#ifndef SAPUNICA_H
#define SAPUNICA_H
#include <QGraphicsPixmapItem>
#include "ui_mainwindow.h"

class Sapunica : public QGraphicsPixmapItem
{
public:
    Sapunica(Ui::MainWindow *ui);

private:
    Ui::MainWindow *m_ui;
};

#endif // SAPUNICA_H
