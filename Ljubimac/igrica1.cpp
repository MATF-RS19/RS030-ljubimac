#include "igrica1.h"
#include <QDebug>
#define W 671
#define H 391
Igrica1::Igrica1(Ui::MainWindow *ui):m_ui(ui)
{
    qDebug()<<"Nova igra";
    scene=new QGraphicsScene();
    setSceneRect(0,0,W,H); // make the scene 800x600 instead of infinity by infinity (default)
    setBackgroundBrush(QBrush(QImage(":/images/mount.png").scaled(W,H)));

    // make the newly created scene the scene to visualize (since Game is a QGraphicsView Widget,
    // it can be used to visualize scenes)
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(W,H);

    show();
}

void Igrica1::end_game(){
    qDebug()<<"Izbrisao";
    emit end();
    delete this;
}
