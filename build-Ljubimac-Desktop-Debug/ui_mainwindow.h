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
    QPushButton *pushButton_fr;
    QPushButton *pushButton_pro;
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
    QPushButton *pushButton_igra_1;
    QPushButton *pushButton_igra_2;
    QPushButton *pushButton_igra_3;
    QPushButton *pushButton_igra_4;
    QWidget *page_spavaca;
    QGraphicsView *graphicsView_spavaca;
    QPushButton *pushButton_spav_1;
    QLabel *label_spav;
    QPushButton *pushButton_spav_2;
    QWidget *page_prodavn;
    QGraphicsView *graphicsView_prodavn;
    QPushButton *pushButton_prod_nazad;
    QLabel *label_prodavn;
    QWidget *page_friz;
    QGraphicsView *graphicsView_friz;
    QPushButton *pushButton_friz_nazad;
    QLabel *label_friz;
    QWidget *page_igra_1;
    QPushButton *pushButton_igra_1_nazad;
    QWidget *page_igra_2;
    QPushButton *pushButton_igra_2_nazad;
    QWidget *page_igra_3;
    QPushButton *pushButton_igra_3_nazad;
    QWidget *page_igra_4;
    QPushButton *pushButton_igra_4_nazad;

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
        stackedWidget->setStyleSheet(QStringLiteral(""));
        page_kuhinja = new QWidget();
        page_kuhinja->setObjectName(QStringLiteral("page_kuhinja"));
        page_kuhinja->setStyleSheet(QStringLiteral(""));
        graphicsView_kuhinja = new QGraphicsView(page_kuhinja);
        graphicsView_kuhinja->setObjectName(QStringLiteral("graphicsView_kuhinja"));
        graphicsView_kuhinja->setGeometry(QRect(10, -10, 681, 391));
        pushButton_kuh_1 = new QPushButton(page_kuhinja);
        pushButton_kuh_1->setObjectName(QStringLiteral("pushButton_kuh_1"));
        pushButton_kuh_1->setGeometry(QRect(141, 19, 80, 25));
        pushButton_kuh_1->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        label_kuh = new QLabel(page_kuhinja);
        label_kuh->setObjectName(QStringLiteral("label_kuh"));
        label_kuh->setGeometry(QRect(290, 20, 61, 17));
        label_kuh->setAutoFillBackground(false);
        label_kuh->setStyleSheet(QLatin1String("background-color: rgb(252, 175, 62);\n"
"font: 16pt \"Ubuntu\";"));
        label_kuh->setAlignment(Qt::AlignCenter);
        label_kuh->setWordWrap(true);
        label_kuh->setIndent(-1);
        pushButton_kuh_2 = new QPushButton(page_kuhinja);
        pushButton_kuh_2->setObjectName(QStringLiteral("pushButton_kuh_2"));
        pushButton_kuh_2->setGeometry(QRect(418, 19, 80, 25));
        pushButton_kuh_2->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        pushButton_fr = new QPushButton(page_kuhinja);
        pushButton_fr->setObjectName(QStringLiteral("pushButton_fr"));
        pushButton_fr->setGeometry(QRect(540, 40, 131, 271));
        pushButton_fr->setStyleSheet(QLatin1String("border-image: url(:/images/fridge_1.jpg);\n"
"\n"
"\n"
"\n"
""));
        pushButton_pro = new QPushButton(page_kuhinja);
        pushButton_pro->setObjectName(QStringLiteral("pushButton_pro"));
        pushButton_pro->setGeometry(QRect(30, 280, 81, 81));
        pushButton_pro->setStyleSheet(QStringLiteral("border-image: url(:/images/shop_1.jpg);"));
        stackedWidget->addWidget(page_kuhinja);
        page_kupatilo = new QWidget();
        page_kupatilo->setObjectName(QStringLiteral("page_kupatilo"));
        graphicsView_kupatilo = new QGraphicsView(page_kupatilo);
        graphicsView_kupatilo->setObjectName(QStringLiteral("graphicsView_kupatilo"));
        graphicsView_kupatilo->setGeometry(QRect(0, 0, 681, 391));
        pushButton_kup_1 = new QPushButton(page_kupatilo);
        pushButton_kup_1->setObjectName(QStringLiteral("pushButton_kup_1"));
        pushButton_kup_1->setGeometry(QRect(141, 21, 80, 25));
        pushButton_kup_1->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        label_kup = new QLabel(page_kupatilo);
        label_kup->setObjectName(QStringLiteral("label_kup"));
        label_kup->setGeometry(QRect(279, 21, 85, 17));
        label_kup->setStyleSheet(QLatin1String("background-color: rgb(233, 185, 110);\n"
"font: 16pt \"Ubuntu\";"));
        label_kup->setAlignment(Qt::AlignCenter);
        label_kup->setWordWrap(true);
        pushButton_kup_2 = new QPushButton(page_kupatilo);
        pushButton_kup_2->setObjectName(QStringLiteral("pushButton_kup_2"));
        pushButton_kup_2->setGeometry(QRect(418, 21, 80, 25));
        pushButton_kup_2->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        stackedWidget->addWidget(page_kupatilo);
        page_igraonica = new QWidget();
        page_igraonica->setObjectName(QStringLiteral("page_igraonica"));
        graphicsView_igraonica = new QGraphicsView(page_igraonica);
        graphicsView_igraonica->setObjectName(QStringLiteral("graphicsView_igraonica"));
        graphicsView_igraonica->setGeometry(QRect(0, 0, 681, 391));
        pushButton_igraon_1 = new QPushButton(page_igraonica);
        pushButton_igraon_1->setObjectName(QStringLiteral("pushButton_igraon_1"));
        pushButton_igraon_1->setGeometry(QRect(161, 21, 80, 25));
        pushButton_igraon_1->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        label_igraon = new QLabel(page_igraonica);
        label_igraon->setObjectName(QStringLiteral("label_igraon"));
        label_igraon->setGeometry(QRect(289, 21, 96, 17));
        QFont font;
        font.setFamily(QStringLiteral("Ubuntu"));
        font.setPointSize(16);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label_igraon->setFont(font);
        label_igraon->setStyleSheet(QLatin1String("background-color: rgb(237, 212, 0);\n"
"font: 16pt \"Ubuntu\";"));
        label_igraon->setAlignment(Qt::AlignCenter);
        label_igraon->setWordWrap(true);
        pushButton_igraon_2 = new QPushButton(page_igraonica);
        pushButton_igraon_2->setObjectName(QStringLiteral("pushButton_igraon_2"));
        pushButton_igraon_2->setGeometry(QRect(418, 21, 80, 25));
        pushButton_igraon_2->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        pushButton_igra_1 = new QPushButton(page_igraonica);
        pushButton_igra_1->setObjectName(QStringLiteral("pushButton_igra_1"));
        pushButton_igra_1->setGeometry(QRect(20, 244, 61, 31));
        pushButton_igra_1->setStyleSheet(QStringLiteral("background-color: rgb(191, 64, 64);"));
        pushButton_igra_2 = new QPushButton(page_igraonica);
        pushButton_igra_2->setObjectName(QStringLiteral("pushButton_igra_2"));
        pushButton_igra_2->setGeometry(QRect(120, 220, 61, 31));
        pushButton_igra_2->setStyleSheet(QStringLiteral("background-color: rgb(115, 210, 22);"));
        pushButton_igra_3 = new QPushButton(page_igraonica);
        pushButton_igra_3->setObjectName(QStringLiteral("pushButton_igra_3"));
        pushButton_igra_3->setGeometry(QRect(490, 164, 61, 31));
        pushButton_igra_3->setStyleSheet(QStringLiteral("background-color: rgb(245, 121, 0);"));
        pushButton_igra_4 = new QPushButton(page_igraonica);
        pushButton_igra_4->setObjectName(QStringLiteral("pushButton_igra_4"));
        pushButton_igra_4->setGeometry(QRect(580, 190, 61, 31));
        pushButton_igra_4->setStyleSheet(QStringLiteral("background-color: rgb(173, 127, 168);"));
        stackedWidget->addWidget(page_igraonica);
        page_spavaca = new QWidget();
        page_spavaca->setObjectName(QStringLiteral("page_spavaca"));
        graphicsView_spavaca = new QGraphicsView(page_spavaca);
        graphicsView_spavaca->setObjectName(QStringLiteral("graphicsView_spavaca"));
        graphicsView_spavaca->setGeometry(QRect(0, 0, 681, 391));
        pushButton_spav_1 = new QPushButton(page_spavaca);
        pushButton_spav_1->setObjectName(QStringLiteral("pushButton_spav_1"));
        pushButton_spav_1->setGeometry(QRect(161, 21, 80, 25));
        pushButton_spav_1->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        label_spav = new QLabel(page_spavaca);
        label_spav->setObjectName(QStringLiteral("label_spav"));
        label_spav->setGeometry(QRect(276, 21, 98, 17));
        label_spav->setStyleSheet(QLatin1String("background-color: rgb(114, 159, 207);\n"
"font: 16pt \"Ubuntu\";\n"
""));
        label_spav->setAlignment(Qt::AlignCenter);
        label_spav->setWordWrap(true);
        pushButton_spav_2 = new QPushButton(page_spavaca);
        pushButton_spav_2->setObjectName(QStringLiteral("pushButton_spav_2"));
        pushButton_spav_2->setGeometry(QRect(391, 21, 80, 25));
        pushButton_spav_2->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        stackedWidget->addWidget(page_spavaca);
        page_prodavn = new QWidget();
        page_prodavn->setObjectName(QStringLiteral("page_prodavn"));
        graphicsView_prodavn = new QGraphicsView(page_prodavn);
        graphicsView_prodavn->setObjectName(QStringLiteral("graphicsView_prodavn"));
        graphicsView_prodavn->setGeometry(QRect(0, 1, 681, 391));
        graphicsView_prodavn->setStyleSheet(QStringLiteral("background-color: rgb(233, 185, 110);"));
        pushButton_prod_nazad = new QPushButton(page_prodavn);
        pushButton_prod_nazad->setObjectName(QStringLiteral("pushButton_prod_nazad"));
        pushButton_prod_nazad->setGeometry(QRect(50, 30, 89, 25));
        pushButton_prod_nazad->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        label_prodavn = new QLabel(page_prodavn);
        label_prodavn->setObjectName(QStringLiteral("label_prodavn"));
        label_prodavn->setGeometry(QRect(300, 40, 81, 17));
        label_prodavn->setStyleSheet(QLatin1String("background-color: rgb(252, 233, 79);\n"
"font: 15pt \"Ubuntu\";"));
        label_prodavn->setAlignment(Qt::AlignCenter);
        label_prodavn->setWordWrap(true);
        stackedWidget->addWidget(page_prodavn);
        page_friz = new QWidget();
        page_friz->setObjectName(QStringLiteral("page_friz"));
        graphicsView_friz = new QGraphicsView(page_friz);
        graphicsView_friz->setObjectName(QStringLiteral("graphicsView_friz"));
        graphicsView_friz->setGeometry(QRect(0, 1, 681, 391));
        graphicsView_friz->setStyleSheet(QStringLiteral("background-color: rgb(233, 185, 110);"));
        pushButton_friz_nazad = new QPushButton(page_friz);
        pushButton_friz_nazad->setObjectName(QStringLiteral("pushButton_friz_nazad"));
        pushButton_friz_nazad->setGeometry(QRect(40, 20, 89, 25));
        pushButton_friz_nazad->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        label_friz = new QLabel(page_friz);
        label_friz->setObjectName(QStringLiteral("label_friz"));
        label_friz->setGeometry(QRect(300, 20, 51, 17));
        label_friz->setStyleSheet(QLatin1String("background-color: rgb(252, 233, 79);\n"
"font: 15pt \"Ubuntu\";"));
        label_friz->setAlignment(Qt::AlignCenter);
        label_friz->setWordWrap(true);
        stackedWidget->addWidget(page_friz);
        page_igra_1 = new QWidget();
        page_igra_1->setObjectName(QStringLiteral("page_igra_1"));
        pushButton_igra_1_nazad = new QPushButton(page_igra_1);
        pushButton_igra_1_nazad->setObjectName(QStringLiteral("pushButton_igra_1_nazad"));
        pushButton_igra_1_nazad->setGeometry(QRect(50, 20, 89, 25));
        pushButton_igra_1_nazad->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        stackedWidget->addWidget(page_igra_1);
        page_igra_2 = new QWidget();
        page_igra_2->setObjectName(QStringLiteral("page_igra_2"));
        pushButton_igra_2_nazad = new QPushButton(page_igra_2);
        pushButton_igra_2_nazad->setObjectName(QStringLiteral("pushButton_igra_2_nazad"));
        pushButton_igra_2_nazad->setGeometry(QRect(50, 30, 89, 25));
        pushButton_igra_2_nazad->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        stackedWidget->addWidget(page_igra_2);
        page_igra_3 = new QWidget();
        page_igra_3->setObjectName(QStringLiteral("page_igra_3"));
        pushButton_igra_3_nazad = new QPushButton(page_igra_3);
        pushButton_igra_3_nazad->setObjectName(QStringLiteral("pushButton_igra_3_nazad"));
        pushButton_igra_3_nazad->setGeometry(QRect(40, 30, 89, 25));
        pushButton_igra_3_nazad->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        stackedWidget->addWidget(page_igra_3);
        page_igra_4 = new QWidget();
        page_igra_4->setObjectName(QStringLiteral("page_igra_4"));
        pushButton_igra_4_nazad = new QPushButton(page_igra_4);
        pushButton_igra_4_nazad->setObjectName(QStringLiteral("pushButton_igra_4_nazad"));
        pushButton_igra_4_nazad->setGeometry(QRect(50, 40, 89, 25));
        pushButton_igra_4_nazad->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        stackedWidget->addWidget(page_igra_4);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(9);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        pushButton_kuh_1->setText(QApplication::translate("MainWindow", "<", Q_NULLPTR));
        label_kuh->setText(QApplication::translate("MainWindow", "Kuhinja", Q_NULLPTR));
        pushButton_kuh_2->setText(QApplication::translate("MainWindow", ">", Q_NULLPTR));
        pushButton_fr->setText(QString());
        pushButton_pro->setText(QString());
        pushButton_kup_1->setText(QApplication::translate("MainWindow", "<", Q_NULLPTR));
        label_kup->setText(QApplication::translate("MainWindow", "Kupatilo", Q_NULLPTR));
        pushButton_kup_2->setText(QApplication::translate("MainWindow", ">", Q_NULLPTR));
        pushButton_igraon_1->setText(QApplication::translate("MainWindow", "<", Q_NULLPTR));
        label_igraon->setText(QApplication::translate("MainWindow", "Igraonica", Q_NULLPTR));
        pushButton_igraon_2->setText(QApplication::translate("MainWindow", ">", Q_NULLPTR));
        pushButton_igra_1->setText(QApplication::translate("MainWindow", "Igra 1", Q_NULLPTR));
        pushButton_igra_2->setText(QApplication::translate("MainWindow", "Igra 2", Q_NULLPTR));
        pushButton_igra_3->setText(QApplication::translate("MainWindow", "Igra 3", Q_NULLPTR));
        pushButton_igra_4->setText(QApplication::translate("MainWindow", "Igra 4", Q_NULLPTR));
        pushButton_spav_1->setText(QApplication::translate("MainWindow", "<", Q_NULLPTR));
        label_spav->setText(QApplication::translate("MainWindow", "Spavaca soba", Q_NULLPTR));
        pushButton_spav_2->setText(QApplication::translate("MainWindow", ">", Q_NULLPTR));
        pushButton_prod_nazad->setText(QApplication::translate("MainWindow", "<", Q_NULLPTR));
        label_prodavn->setText(QApplication::translate("MainWindow", "Prodavnica", Q_NULLPTR));
        pushButton_friz_nazad->setText(QApplication::translate("MainWindow", "<", Q_NULLPTR));
        label_friz->setText(QApplication::translate("MainWindow", "Frizider", Q_NULLPTR));
        pushButton_igra_1_nazad->setText(QApplication::translate("MainWindow", "<", Q_NULLPTR));
        pushButton_igra_2_nazad->setText(QApplication::translate("MainWindow", "<", Q_NULLPTR));
        pushButton_igra_3_nazad->setText(QApplication::translate("MainWindow", "<", Q_NULLPTR));
        pushButton_igra_4_nazad->setText(QApplication::translate("MainWindow", "<", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
