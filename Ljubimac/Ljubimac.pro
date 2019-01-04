#-------------------------------------------------
#
# Project created by QtCreator 2018-11-26T16:23:40
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Ljubimac

TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
        ljubimac.cpp \
    gamesln.cpp \
    dialog.cpp \
    hrana.cpp \
    frizider.cpp \
    prodavnica.cpp \
    pica.cpp \
    kobasica.cpp \
    sunka.cpp \
    sladoled.cpp \
    kolac.cpp \
    hamburger.cpp \
    ljubimac_spava.cpp \
    ljubimac_kupanje.cpp \
    igrica1.cpp

HEADERS += \
        mainwindow.h \
        tfj.h \
        ljubimac.h \
        gamesln.h \
    vreme.h \
    dialog.h \
    hrana.h \
    frizider.h \
    prodavnica.h \
    pica.h \
    kobasica.h \
    sunka.h \
    sladoled.h \
    kolac.h \
    hamburger.h \
    ljubimac_spava.h \
    ljubimac_kupanje.h \
    igrica1.h

FORMS += \
        mainwindow.ui \
    dialog.ui

RESOURCES += \
    res.qrc
