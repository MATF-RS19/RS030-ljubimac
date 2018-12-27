#include "mainwindow.h"
#include "ljubimac.h"
#include "gamesln.h"
#include "dialog.h"
#include <QApplication>
#include <iostream>
#include <QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    GameSLN igra("", nullptr, 0);
    //dialog u svojim metodama
    //koristi GameSLN da pokrene new game ili
    //loaduje i onda pokrene main
    //window
    Dialog d;
    MainWindow* w = d.postavi_main();
    d.postavi_game(&igra);
    d.show();
    int ret = a.exec();
    //sejvuju se podaci
    igra.save();
//    delete w;
    return ret;
}
