#ifndef KADA_H
#define KADA_H
#include "ui_mainwindow.h"
#include <QGraphicsPixmapItem>

class Kada : public QGraphicsPixmapItem
{
public:
    Kada(Ui::MainWindow *ui);

private:
    Ui::MainWindow *m_ui;
};

#endif // KADA_H
