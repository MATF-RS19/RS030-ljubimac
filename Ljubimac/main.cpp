#include "mainwindow.h"
#include "ljubimac.h"
#include "gamesln.h"
#include "dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;


    GameSLN igra("", nullptr, 0);

    //dialog u svojim metodama
    //koristi GameSLN da pokrene new game ili
    //loaduje i onda pokrene main
    //window
    Dialog d;
    d.postavi_main(&w);
    d.postavi_game(&igra);
    d.show();

    int ret = a.exec();
    //sejvuju se podaci
    igra.save();
    return ret;
}
