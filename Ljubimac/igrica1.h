#ifndef IGRICA1_H
#define IGRICA1_H
#include <QGraphicsView>
#include <QGraphicsScene>
#include "ui_mainwindow.h"

class Igrica1:public QGraphicsView
{
    Q_OBJECT
public:
    Igrica1(Ui::MainWindow *ui);

    QGraphicsScene *scene;

    ~Igrica1(){
        delete scene;
    }

private:
    Ui::MainWindow *m_ui;
private slots:
    void end_game();
signals:
    void end();
};

#endif // IGRICA1_H
