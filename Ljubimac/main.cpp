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
    MainWindow w;
    Dialog d;


    d.postavi_main(&w);
    d.show();

    return a.exec();
}
