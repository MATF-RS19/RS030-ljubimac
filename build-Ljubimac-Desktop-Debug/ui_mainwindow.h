/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *page_kuhinja;
    QGraphicsView *graphicsView_kuhinja;
    QPushButton *pushButton_kuh_1;
    QLabel *label_kuh;
    QPushButton *pushButton_kuh_2;
    QWidget *page_kupatilo;
    QGraphicsView *graphicsView_kupatilo;
    QPushButton *pushButton_kup_1;
    QLabel *label_kup;
    QPushButton *pushButton_kup_2;
    QWidget *page_igraonica;
    QGraphicsView *graphicsView_igraonica;
    QPushButton *pushButton_igraon_1;
    QLabel *label_igraon;
    QPushButton *pushButton_igraon_2;
    QWidget *page_spavaca;
    QGraphicsView *graphicsView_spavaca;
    QPushButton *pushButton_spav_1;
    QLabel *label_spav;
    QPushButton *pushButton_spav_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(672, 457);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 50, 671, 391));
        stackedWidget->setStyleSheet(QStringLiteral("background-color: rgb(191, 64, 64);"));
        page_kuhinja = new QWidget();
        page_kuhinja->setObjectName(QStringLiteral("page_kuhinja"));
        page_kuhinja->setStyleSheet(QStringLiteral(""));
        graphicsView_kuhinja = new QGraphicsView(page_kuhinja);
        graphicsView_kuhinja->setObjectName(QStringLiteral("graphicsView_kuhinja"));
        graphicsView_kuhinja->setGeometry(QRect(0, 0, 681, 391));
        pushButton_kuh_1 = new QPushButton(page_kuhinja);
        pushButton_kuh_1->setObjectName(QStringLiteral("pushButton_kuh_1"));
        pushButton_kuh_1->setGeometry(QRect(141, 19, 80, 25));
        label_kuh = new QLabel(page_kuhinja);
        label_kuh->setObjectName(QStringLiteral("label_kuh"));
        label_kuh->setGeometry(QRect(290, 20, 89, 17));
        pushButton_kuh_2 = new QPushButton(page_kuhinja);
        pushButton_kuh_2->setObjectName(QStringLiteral("pushButton_kuh_2"));
        pushButton_kuh_2->setGeometry(QRect(418, 19, 80, 25));
        stackedWidget->addWidget(page_kuhinja);
        page_kupatilo = new QWidget();
        page_kupatilo->setObjectName(QStringLiteral("page_kupatilo"));
        graphicsView_kupatilo = new QGraphicsView(page_kupatilo);
        graphicsView_kupatilo->setObjectName(QStringLiteral("graphicsView_kupatilo"));
        graphicsView_kupatilo->setGeometry(QRect(0, 0, 681, 391));
        pushButton_kup_1 = new QPushButton(page_kupatilo);
        pushButton_kup_1->setObjectName(QStringLiteral("pushButton_kup_1"));
        pushButton_kup_1->setGeometry(QRect(141, 21, 80, 25));
        label_kup = new QLabel(page_kupatilo);
        label_kup->setObjectName(QStringLiteral("label_kup"));
        label_kup->setGeometry(QRect(279, 21, 85, 17));
        pushButton_kup_2 = new QPushButton(page_kupatilo);
        pushButton_kup_2->setObjectName(QStringLiteral("pushButton_kup_2"));
        pushButton_kup_2->setGeometry(QRect(418, 21, 80, 25));
        stackedWidget->addWidget(page_kupatilo);
        page_igraonica = new QWidget();
        page_igraonica->setObjectName(QStringLiteral("page_igraonica"));
        graphicsView_igraonica = new QGraphicsView(page_igraonica);
        graphicsView_igraonica->setObjectName(QStringLiteral("graphicsView_igraonica"));
        graphicsView_igraonica->setGeometry(QRect(0, 0, 681, 391));
        pushButton_igraon_1 = new QPushButton(page_igraonica);
        pushButton_igraon_1->setObjectName(QStringLiteral("pushButton_igraon_1"));
        pushButton_igraon_1->setGeometry(QRect(161, 21, 80, 25));
        label_igraon = new QLabel(page_igraonica);
        label_igraon->setObjectName(QStringLiteral("label_igraon"));
        label_igraon->setGeometry(QRect(289, 21, 96, 17));
        pushButton_igraon_2 = new QPushButton(page_igraonica);
        pushButton_igraon_2->setObjectName(QStringLiteral("pushButton_igraon_2"));
        pushButton_igraon_2->setGeometry(QRect(418, 21, 80, 25));
        stackedWidget->addWidget(page_igraonica);
        page_spavaca = new QWidget();
        page_spavaca->setObjectName(QStringLiteral("page_spavaca"));
        graphicsView_spavaca = new QGraphicsView(page_spavaca);
        graphicsView_spavaca->setObjectName(QStringLiteral("graphicsView_spavaca"));
        graphicsView_spavaca->setGeometry(QRect(0, 0, 681, 391));
        pushButton_spav_1 = new QPushButton(page_spavaca);
        pushButton_spav_1->setObjectName(QStringLiteral("pushButton_spav_1"));
        pushButton_spav_1->setGeometry(QRect(161, 21, 80, 25));
        label_spav = new QLabel(page_spavaca);
        label_spav->setObjectName(QStringLiteral("label_spav"));
        label_spav->setGeometry(QRect(276, 21, 98, 17));
        pushButton_spav_2 = new QPushButton(page_spavaca);
        pushButton_spav_2->setObjectName(QStringLiteral("pushButton_spav_2"));
        pushButton_spav_2->setGeometry(QRect(391, 21, 80, 25));
        stackedWidget->addWidget(page_spavaca);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        pushButton_kuh_1->setText(QApplication::translate("MainWindow", "<", Q_NULLPTR));
        label_kuh->setText(QApplication::translate("MainWindow", "Kuhinja", Q_NULLPTR));
        pushButton_kuh_2->setText(QApplication::translate("MainWindow", ">", Q_NULLPTR));
        pushButton_kup_1->setText(QApplication::translate("MainWindow", "<", Q_NULLPTR));
        label_kup->setText(QApplication::translate("MainWindow", "Kupatilo", Q_NULLPTR));
        pushButton_kup_2->setText(QApplication::translate("MainWindow", ">", Q_NULLPTR));
        pushButton_igraon_1->setText(QApplication::translate("MainWindow", "<", Q_NULLPTR));
        label_igraon->setText(QApplication::translate("MainWindow", "Igraonica", Q_NULLPTR));
        pushButton_igraon_2->setText(QApplication::translate("MainWindow", ">", Q_NULLPTR));
        pushButton_spav_1->setText(QApplication::translate("MainWindow", "<", Q_NULLPTR));
        label_spav->setText(QApplication::translate("MainWindow", "Spavaca soba", Q_NULLPTR));
        pushButton_spav_2->setText(QApplication::translate("MainWindow", ">", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
