#ifndef IGRICA1_H
#define IGRICA1_H
#include <QGraphicsView>
#include <QGraphicsScene>
#include "ui_mainwindow.h"
#include "ljubimac_skijas.h"

class Igrica1:public QGraphicsView
{
    Q_OBJECT
public:
    Igrica1(Ui::MainWindow *ui);

    QGraphicsScene *scene;
    Ljubimac_skijas *igrac;
    ~Igrica1(){
        delete scene;
    }

private:
    Ui::MainWindow *m_ui;
private slots:
    void end_game();
    void napravi_grudvu();
    void bar_smanji();
    void end_game_energ();
signals:
    void end();
    void nema_energije();
};

#endif // IGRICA1_H
