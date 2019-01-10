#ifndef IGRICA3_H
#define IGRICA3_H
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include "ui_mainwindow.h"
#include "ljubimac_bomba.h"
#include "ljubimac.h"

class Igrica3:public QGraphicsView
{
    Q_OBJECT
public:
    Igrica3(Ui::MainWindow *ui);

    QGraphicsScene *scene;
    Ljubimac_bomba *igrac;
    ~Igrica3(){
        delete scene;
        delete muzika;
    }

private:
    QMediaPlayer *muzika;
    QMediaPlaylist *playlist;
    Ui::MainWindow *m_ui;
    Ljubimac *lj;
private slots:
    void end_game();
    void napravi_bombu();
    void napravi_loptu();
    void bar_smanji();
    void end_game_energ();
    void dodaj();
signals:
    void end();
    void nema_energije();
};

#endif // IGRICA3_H
