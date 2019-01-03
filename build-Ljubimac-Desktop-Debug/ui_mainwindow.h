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
#include <QtWidgets/QProgressBar>
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
    QPushButton *bt_kupanje;
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
    QPushButton *bt_spavaj;
    QPushButton *bt_budjenje;
    QWidget *page_prodavn;
    QGraphicsView *graphicsView_prodavn;
    QPushButton *pushButton_prod_nazad;
    QLabel *label_prodavn;
    QLabel *fj1_naziv_2;
    QPushButton *kupi_1;
    QLabel *vr_e_4;
    QPushButton *kupi_3;
    QPushButton *kupi_4;
    QLabel *fj4_naziv_2;
    QLabel *fj3_naziv_2;
    QLabel *pe1_vredn_1;
    QPushButton *kupi_2;
    QLabel *vr_e_1;
    QLabel *pe4_vredn_4;
    QLabel *vr_e_5;
    QPushButton *kupi_5;
    QLabel *pe2_vredn_2;
    QLabel *vr_e_2;
    QLabel *pe3_vredn_3;
    QLabel *vr_e_3;
    QLabel *pe5_vredn_5;
    QLabel *fj5_naziv_2;
    QLabel *fj2_naziv_2;
    QLabel *p5_cena_5;
    QLabel *p1_cena_1;
    QLabel *p2_cena_2;
    QLabel *p3_cena_3;
    QLabel *cena_2;
    QLabel *cena_3;
    QLabel *cena_4;
    QLabel *cena_5;
    QLabel *p4_cena_4;
    QLabel *cena_1;
    QLabel *fj6_naziv_2;
    QLabel *pe6_vredn_6;
    QLabel *vr_e_6;
    QLabel *p6_cena_6;
    QLabel *cena_6;
    QPushButton *kupi_6;
    QLabel *lab_kcal;
    QLabel *lab_cena;
    QWidget *page_friz;
    QGraphicsView *graphicsView_friz;
    QPushButton *pushButton_friz_nazad;
    QLabel *label_friz;
    QLabel *fj1_naziv;
    QLabel *fj2_naziv;
    QLabel *fj3_naziv;
    QLabel *fj4_naziv;
    QLabel *fj5_naziv;
    QLabel *fe1_vredn;
    QLabel *fe2_vredn;
    QLabel *fe3_vredn;
    QLabel *fe4_vredn;
    QLabel *fe5_vredn;
    QLabel *vr_1;
    QLabel *vr_2;
    QLabel *vr_3;
    QLabel *vr_4;
    QLabel *vr_5;
    QPushButton *jedi_1;
    QPushButton *jedi_2;
    QPushButton *jedi_3;
    QPushButton *jedi_4;
    QPushButton *jedi_5;
    QLabel *vr_kol_3;
    QLabel *vr_kol_1;
    QLabel *vr_kol_4;
    QLabel *kol_3;
    QLabel *vr_kol_5;
    QLabel *kol_2;
    QLabel *kol_4;
    QLabel *kol_1;
    QLabel *kol_5;
    QLabel *vr_kol_2;
    QLabel *fj6_naziv;
    QLabel *fe6_vredn;
    QLabel *vr_6;
    QLabel *kol_6;
    QLabel *vr_kol_6;
    QPushButton *jedi_6;
    QLabel *lab_kcal2;
    QWidget *page_igra_1;
    QPushButton *pushButton_igra_1_nazad;
    QWidget *page_igra_2;
    QPushButton *pushButton_igra_2_nazad;
    QWidget *page_igra_3;
    QPushButton *pushButton_igra_3_nazad;
    QWidget *page_igra_4;
    QPushButton *pushButton_igra_4_nazad;
    QProgressBar *SnagaBar;
    QLabel *label;
    QLabel *tajmer;
    QLabel *label_3;
    QLabel *ime;
    QLabel *l_kol_novca;
    QLabel *fj1_naziv_3;
    QProgressBar *CistocaBar;
    QLabel *label_2;
    QProgressBar *naspavanostBar;
    QLabel *label_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(672, 471);
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
        graphicsView_kuhinja->setGeometry(QRect(0, -10, 691, 391));
        pushButton_kuh_1 = new QPushButton(page_kuhinja);
        pushButton_kuh_1->setObjectName(QStringLiteral("pushButton_kuh_1"));
        pushButton_kuh_1->setGeometry(QRect(141, 19, 80, 25));
        pushButton_kuh_1->setStyleSheet(QLatin1String("background-color: rgb(213, 147, 125);\n"
"font: 75 italic 17pt \"Ubuntu Mono\";"));
        label_kuh = new QLabel(page_kuhinja);
        label_kuh->setObjectName(QStringLiteral("label_kuh"));
        label_kuh->setGeometry(QRect(290, 20, 61, 17));
        label_kuh->setAutoFillBackground(false);
        label_kuh->setStyleSheet(QLatin1String("background-color: rgb(213, 147, 125);\n"
"font: 75 italic 17pt \"Ubuntu Mono\";"));
        label_kuh->setAlignment(Qt::AlignCenter);
        label_kuh->setWordWrap(true);
        label_kuh->setIndent(-1);
        pushButton_kuh_2 = new QPushButton(page_kuhinja);
        pushButton_kuh_2->setObjectName(QStringLiteral("pushButton_kuh_2"));
        pushButton_kuh_2->setGeometry(QRect(418, 19, 80, 25));
        pushButton_kuh_2->setStyleSheet(QLatin1String("background-color: rgb(213, 147, 125);\n"
"font: 75 italic 17pt \"Ubuntu Mono\";"));
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
        pushButton_kup_1->setStyleSheet(QLatin1String("background-color: rgb(37, 164, 134);\n"
"font: 75 italic 17pt \"Ubuntu Mono\";"));
        label_kup = new QLabel(page_kupatilo);
        label_kup->setObjectName(QStringLiteral("label_kup"));
        label_kup->setGeometry(QRect(279, 21, 85, 17));
        label_kup->setStyleSheet(QLatin1String("background-color: rgb(37, 164, 134);\n"
"font: 75 italic 17pt \"Ubuntu Mono\";"));
        label_kup->setAlignment(Qt::AlignCenter);
        label_kup->setWordWrap(true);
        pushButton_kup_2 = new QPushButton(page_kupatilo);
        pushButton_kup_2->setObjectName(QStringLiteral("pushButton_kup_2"));
        pushButton_kup_2->setGeometry(QRect(418, 21, 80, 25));
        pushButton_kup_2->setStyleSheet(QLatin1String("background-color: rgb(37, 164, 134);\n"
"font: 75 italic 17pt \"Ubuntu Mono\";"));
        bt_kupanje = new QPushButton(page_kupatilo);
        bt_kupanje->setObjectName(QStringLiteral("bt_kupanje"));
        bt_kupanje->setGeometry(QRect(280, 330, 101, 41));
        bt_kupanje->setStyleSheet(QLatin1String("background-color: rgb(37, 164, 134);\n"
"font: 75 italic 17pt \"Ubuntu Mono\";"));
        stackedWidget->addWidget(page_kupatilo);
        page_igraonica = new QWidget();
        page_igraonica->setObjectName(QStringLiteral("page_igraonica"));
        graphicsView_igraonica = new QGraphicsView(page_igraonica);
        graphicsView_igraonica->setObjectName(QStringLiteral("graphicsView_igraonica"));
        graphicsView_igraonica->setGeometry(QRect(0, 0, 681, 391));
        pushButton_igraon_1 = new QPushButton(page_igraonica);
        pushButton_igraon_1->setObjectName(QStringLiteral("pushButton_igraon_1"));
        pushButton_igraon_1->setGeometry(QRect(161, 21, 80, 25));
        pushButton_igraon_1->setStyleSheet(QLatin1String("background-color: rgb(237, 212, 0);\n"
"font: 75 italic 17pt \"Ubuntu Mono\";"));
        label_igraon = new QLabel(page_igraonica);
        label_igraon->setObjectName(QStringLiteral("label_igraon"));
        label_igraon->setGeometry(QRect(289, 21, 96, 17));
        QFont font;
        font.setFamily(QStringLiteral("Ubuntu Mono"));
        font.setPointSize(17);
        font.setBold(false);
        font.setItalic(true);
        font.setWeight(9);
        label_igraon->setFont(font);
        label_igraon->setStyleSheet(QLatin1String("background-color: rgb(237, 212, 0);\n"
"font: 75 italic 17pt \"Ubuntu Mono\";"));
        label_igraon->setAlignment(Qt::AlignCenter);
        label_igraon->setWordWrap(true);
        pushButton_igraon_2 = new QPushButton(page_igraonica);
        pushButton_igraon_2->setObjectName(QStringLiteral("pushButton_igraon_2"));
        pushButton_igraon_2->setGeometry(QRect(418, 21, 80, 25));
        pushButton_igraon_2->setStyleSheet(QLatin1String("background-color: rgb(237, 212, 0);\n"
"font: 75 italic 17pt \"Ubuntu Mono\";"));
        pushButton_igra_1 = new QPushButton(page_igraonica);
        pushButton_igra_1->setObjectName(QStringLiteral("pushButton_igra_1"));
        pushButton_igra_1->setGeometry(QRect(20, 244, 61, 31));
        pushButton_igra_1->setStyleSheet(QLatin1String("background-color: rgb(186, 43, 43);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        pushButton_igra_2 = new QPushButton(page_igraonica);
        pushButton_igra_2->setObjectName(QStringLiteral("pushButton_igra_2"));
        pushButton_igra_2->setGeometry(QRect(120, 220, 61, 31));
        pushButton_igra_2->setStyleSheet(QLatin1String("background-color: rgb(213, 147, 125);\n"
"font: 75 italic 13pt \"Ubuntu Mono\";"));
        pushButton_igra_3 = new QPushButton(page_igraonica);
        pushButton_igra_3->setObjectName(QStringLiteral("pushButton_igra_3"));
        pushButton_igra_3->setGeometry(QRect(490, 164, 61, 31));
        pushButton_igra_3->setStyleSheet(QLatin1String("background-color: rgb(78, 154, 6);\n"
"font: 75 italic 13pt \"Ubuntu Mono\";"));
        pushButton_igra_4 = new QPushButton(page_igraonica);
        pushButton_igra_4->setObjectName(QStringLiteral("pushButton_igra_4"));
        pushButton_igra_4->setGeometry(QRect(580, 190, 61, 31));
        pushButton_igra_4->setStyleSheet(QLatin1String("background-color: rgb(139, 17, 76);\n"
"font: 75 italic 13pt \"Ubuntu Mono\";"));
        stackedWidget->addWidget(page_igraonica);
        page_spavaca = new QWidget();
        page_spavaca->setObjectName(QStringLiteral("page_spavaca"));
        graphicsView_spavaca = new QGraphicsView(page_spavaca);
        graphicsView_spavaca->setObjectName(QStringLiteral("graphicsView_spavaca"));
        graphicsView_spavaca->setGeometry(QRect(0, 0, 681, 391));
        pushButton_spav_1 = new QPushButton(page_spavaca);
        pushButton_spav_1->setObjectName(QStringLiteral("pushButton_spav_1"));
        pushButton_spav_1->setGeometry(QRect(160, 20, 80, 25));
        pushButton_spav_1->setStyleSheet(QLatin1String("background-color: rgb(127, 181, 230);\n"
"font: 75 italic 17pt \"Ubuntu Mono\";\n"
""));
        label_spav = new QLabel(page_spavaca);
        label_spav->setObjectName(QStringLiteral("label_spav"));
        label_spav->setGeometry(QRect(253, 31, 121, 31));
        label_spav->setStyleSheet(QLatin1String("background-color: rgb(127, 181, 230);\n"
"font: 75 italic 15pt \"Ubuntu Mono\";\n"
""));
        label_spav->setAlignment(Qt::AlignCenter);
        label_spav->setWordWrap(true);
        pushButton_spav_2 = new QPushButton(page_spavaca);
        pushButton_spav_2->setObjectName(QStringLiteral("pushButton_spav_2"));
        pushButton_spav_2->setGeometry(QRect(391, 21, 80, 25));
        pushButton_spav_2->setStyleSheet(QLatin1String("background-color: rgb(127, 181, 230);\n"
"font: 75 italic 17pt \"Ubuntu Mono\";\n"
""));
        bt_spavaj = new QPushButton(page_spavaca);
        bt_spavaj->setObjectName(QStringLiteral("bt_spavaj"));
        bt_spavaj->setGeometry(QRect(260, 320, 111, 41));
        bt_spavaj->setStyleSheet(QStringLiteral("background-color: rgb(114, 159, 207);"));
        bt_budjenje = new QPushButton(page_spavaca);
        bt_budjenje->setObjectName(QStringLiteral("bt_budjenje"));
        bt_budjenje->setGeometry(QRect(400, 330, 89, 25));
        bt_budjenje->setStyleSheet(QStringLiteral("background-color: rgb(114, 159, 207);"));
        stackedWidget->addWidget(page_spavaca);
        page_prodavn = new QWidget();
        page_prodavn->setObjectName(QStringLiteral("page_prodavn"));
        graphicsView_prodavn = new QGraphicsView(page_prodavn);
        graphicsView_prodavn->setObjectName(QStringLiteral("graphicsView_prodavn"));
        graphicsView_prodavn->setGeometry(QRect(10, 0, 691, 391));
        graphicsView_prodavn->setStyleSheet(QStringLiteral("background-color: rgb(148, 78, 93);"));
        pushButton_prod_nazad = new QPushButton(page_prodavn);
        pushButton_prod_nazad->setObjectName(QStringLiteral("pushButton_prod_nazad"));
        pushButton_prod_nazad->setGeometry(QRect(50, 30, 89, 25));
        pushButton_prod_nazad->setStyleSheet(QLatin1String("background-color: rgb(213, 147, 125);\n"
"font: 75 italic 17pt \"Ubuntu Mono\";"));
        label_prodavn = new QLabel(page_prodavn);
        label_prodavn->setObjectName(QStringLiteral("label_prodavn"));
        label_prodavn->setGeometry(QRect(290, 40, 121, 21));
        label_prodavn->setStyleSheet(QLatin1String("background-color: rgb(226, 177, 177);\n"
"font: 75 italic 17pt \"Ubuntu Mono\";"));
        label_prodavn->setAlignment(Qt::AlignCenter);
        label_prodavn->setWordWrap(true);
        fj1_naziv_2 = new QLabel(page_prodavn);
        fj1_naziv_2->setObjectName(QStringLiteral("fj1_naziv_2"));
        fj1_naziv_2->setGeometry(QRect(20, 90, 91, 21));
        fj1_naziv_2->setStyleSheet(QLatin1String("background-color: rgb(213, 147, 125);\n"
"font: 75 italic 14pt \"Ubuntu Mono\";"));
        fj1_naziv_2->setAlignment(Qt::AlignCenter);
        fj1_naziv_2->setWordWrap(true);
        kupi_1 = new QPushButton(page_prodavn);
        kupi_1->setObjectName(QStringLiteral("kupi_1"));
        kupi_1->setGeometry(QRect(570, 90, 89, 21));
        kupi_1->setStyleSheet(QLatin1String("background-color: rgb(186, 189, 182);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        vr_e_4 = new QLabel(page_prodavn);
        vr_e_4->setObjectName(QStringLiteral("vr_e_4"));
        vr_e_4->setGeometry(QRect(280, 230, 61, 21));
        vr_e_4->setStyleSheet(QLatin1String("background-color: rgb(226, 177, 177);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        vr_e_4->setAlignment(Qt::AlignCenter);
        kupi_3 = new QPushButton(page_prodavn);
        kupi_3->setObjectName(QStringLiteral("kupi_3"));
        kupi_3->setGeometry(QRect(570, 180, 89, 21));
        kupi_3->setStyleSheet(QLatin1String("background-color: rgb(186, 189, 182);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        kupi_4 = new QPushButton(page_prodavn);
        kupi_4->setObjectName(QStringLiteral("kupi_4"));
        kupi_4->setGeometry(QRect(570, 230, 89, 21));
        kupi_4->setStyleSheet(QLatin1String("background-color: rgb(186, 189, 182);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        fj4_naziv_2 = new QLabel(page_prodavn);
        fj4_naziv_2->setObjectName(QStringLiteral("fj4_naziv_2"));
        fj4_naziv_2->setGeometry(QRect(20, 230, 91, 21));
        fj4_naziv_2->setStyleSheet(QLatin1String("background-color: rgb(213, 147, 125);\n"
"font: 75 italic 14pt \"Ubuntu Mono\";"));
        fj4_naziv_2->setAlignment(Qt::AlignCenter);
        fj4_naziv_2->setWordWrap(true);
        fj3_naziv_2 = new QLabel(page_prodavn);
        fj3_naziv_2->setObjectName(QStringLiteral("fj3_naziv_2"));
        fj3_naziv_2->setGeometry(QRect(20, 180, 91, 21));
        fj3_naziv_2->setStyleSheet(QLatin1String("background-color: rgb(213, 147, 125);\n"
"font: 75 italic 14pt \"Ubuntu Mono\";"));
        fj3_naziv_2->setAlignment(Qt::AlignCenter);
        fj3_naziv_2->setWordWrap(true);
        pe1_vredn_1 = new QLabel(page_prodavn);
        pe1_vredn_1->setObjectName(QStringLiteral("pe1_vredn_1"));
        pe1_vredn_1->setGeometry(QRect(190, 90, 81, 21));
        pe1_vredn_1->setStyleSheet(QLatin1String("background-color: rgb(213, 147, 125);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        pe1_vredn_1->setAlignment(Qt::AlignCenter);
        pe1_vredn_1->setWordWrap(true);
        kupi_2 = new QPushButton(page_prodavn);
        kupi_2->setObjectName(QStringLiteral("kupi_2"));
        kupi_2->setGeometry(QRect(570, 130, 89, 21));
        kupi_2->setStyleSheet(QLatin1String("background-color: rgb(186, 189, 182);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        vr_e_1 = new QLabel(page_prodavn);
        vr_e_1->setObjectName(QStringLiteral("vr_e_1"));
        vr_e_1->setGeometry(QRect(280, 90, 61, 21));
        vr_e_1->setStyleSheet(QLatin1String("background-color: rgb(226, 177, 177);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        vr_e_1->setAlignment(Qt::AlignCenter);
        pe4_vredn_4 = new QLabel(page_prodavn);
        pe4_vredn_4->setObjectName(QStringLiteral("pe4_vredn_4"));
        pe4_vredn_4->setGeometry(QRect(190, 230, 81, 21));
        pe4_vredn_4->setStyleSheet(QLatin1String("background-color: rgb(213, 147, 125);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        pe4_vredn_4->setAlignment(Qt::AlignCenter);
        pe4_vredn_4->setWordWrap(true);
        vr_e_5 = new QLabel(page_prodavn);
        vr_e_5->setObjectName(QStringLiteral("vr_e_5"));
        vr_e_5->setGeometry(QRect(280, 280, 61, 21));
        vr_e_5->setStyleSheet(QLatin1String("background-color: rgb(226, 177, 177);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        vr_e_5->setAlignment(Qt::AlignCenter);
        kupi_5 = new QPushButton(page_prodavn);
        kupi_5->setObjectName(QStringLiteral("kupi_5"));
        kupi_5->setGeometry(QRect(570, 280, 89, 21));
        kupi_5->setStyleSheet(QLatin1String("background-color: rgb(186, 189, 182);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        pe2_vredn_2 = new QLabel(page_prodavn);
        pe2_vredn_2->setObjectName(QStringLiteral("pe2_vredn_2"));
        pe2_vredn_2->setGeometry(QRect(190, 130, 81, 21));
        pe2_vredn_2->setStyleSheet(QLatin1String("background-color: rgb(213, 147, 125);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        pe2_vredn_2->setAlignment(Qt::AlignCenter);
        pe2_vredn_2->setWordWrap(true);
        vr_e_2 = new QLabel(page_prodavn);
        vr_e_2->setObjectName(QStringLiteral("vr_e_2"));
        vr_e_2->setGeometry(QRect(280, 130, 61, 21));
        vr_e_2->setStyleSheet(QLatin1String("background-color: rgb(226, 177, 177);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        vr_e_2->setAlignment(Qt::AlignCenter);
        pe3_vredn_3 = new QLabel(page_prodavn);
        pe3_vredn_3->setObjectName(QStringLiteral("pe3_vredn_3"));
        pe3_vredn_3->setGeometry(QRect(190, 180, 81, 21));
        pe3_vredn_3->setStyleSheet(QLatin1String("background-color: rgb(213, 147, 125);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        pe3_vredn_3->setAlignment(Qt::AlignCenter);
        pe3_vredn_3->setWordWrap(true);
        vr_e_3 = new QLabel(page_prodavn);
        vr_e_3->setObjectName(QStringLiteral("vr_e_3"));
        vr_e_3->setGeometry(QRect(280, 180, 61, 21));
        vr_e_3->setStyleSheet(QLatin1String("background-color: rgb(226, 177, 177);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        vr_e_3->setAlignment(Qt::AlignCenter);
        pe5_vredn_5 = new QLabel(page_prodavn);
        pe5_vredn_5->setObjectName(QStringLiteral("pe5_vredn_5"));
        pe5_vredn_5->setGeometry(QRect(190, 280, 81, 21));
        pe5_vredn_5->setStyleSheet(QLatin1String("background-color: rgb(213, 147, 125);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        pe5_vredn_5->setAlignment(Qt::AlignCenter);
        pe5_vredn_5->setWordWrap(true);
        fj5_naziv_2 = new QLabel(page_prodavn);
        fj5_naziv_2->setObjectName(QStringLiteral("fj5_naziv_2"));
        fj5_naziv_2->setGeometry(QRect(20, 280, 91, 21));
        fj5_naziv_2->setStyleSheet(QLatin1String("background-color: rgb(213, 147, 125);\n"
"font: 75 italic 14pt \"Ubuntu Mono\";"));
        fj5_naziv_2->setAlignment(Qt::AlignCenter);
        fj5_naziv_2->setWordWrap(true);
        fj2_naziv_2 = new QLabel(page_prodavn);
        fj2_naziv_2->setObjectName(QStringLiteral("fj2_naziv_2"));
        fj2_naziv_2->setGeometry(QRect(20, 130, 91, 21));
        fj2_naziv_2->setStyleSheet(QLatin1String("background-color: rgb(213, 147, 125);\n"
"font: 75 italic 14pt \"Ubuntu Mono\";\n"
""));
        fj2_naziv_2->setAlignment(Qt::AlignCenter);
        fj2_naziv_2->setWordWrap(true);
        p5_cena_5 = new QLabel(page_prodavn);
        p5_cena_5->setObjectName(QStringLiteral("p5_cena_5"));
        p5_cena_5->setGeometry(QRect(370, 280, 71, 21));
        p5_cena_5->setStyleSheet(QLatin1String("background-color: rgb(213, 147, 125);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        p5_cena_5->setAlignment(Qt::AlignCenter);
        p5_cena_5->setWordWrap(true);
        p1_cena_1 = new QLabel(page_prodavn);
        p1_cena_1->setObjectName(QStringLiteral("p1_cena_1"));
        p1_cena_1->setGeometry(QRect(370, 90, 71, 21));
        p1_cena_1->setStyleSheet(QLatin1String("background-color: rgb(213, 147, 125);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        p1_cena_1->setAlignment(Qt::AlignCenter);
        p1_cena_1->setWordWrap(true);
        p2_cena_2 = new QLabel(page_prodavn);
        p2_cena_2->setObjectName(QStringLiteral("p2_cena_2"));
        p2_cena_2->setGeometry(QRect(370, 130, 71, 21));
        p2_cena_2->setStyleSheet(QLatin1String("background-color: rgb(213, 147, 125);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        p2_cena_2->setAlignment(Qt::AlignCenter);
        p2_cena_2->setWordWrap(true);
        p3_cena_3 = new QLabel(page_prodavn);
        p3_cena_3->setObjectName(QStringLiteral("p3_cena_3"));
        p3_cena_3->setGeometry(QRect(370, 180, 71, 21));
        p3_cena_3->setStyleSheet(QLatin1String("background-color: rgb(213, 147, 125);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        p3_cena_3->setAlignment(Qt::AlignCenter);
        p3_cena_3->setWordWrap(true);
        cena_2 = new QLabel(page_prodavn);
        cena_2->setObjectName(QStringLiteral("cena_2"));
        cena_2->setGeometry(QRect(460, 130, 61, 21));
        cena_2->setStyleSheet(QLatin1String("background-color: rgb(226, 177, 177);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        cena_2->setAlignment(Qt::AlignCenter);
        cena_3 = new QLabel(page_prodavn);
        cena_3->setObjectName(QStringLiteral("cena_3"));
        cena_3->setGeometry(QRect(460, 180, 61, 21));
        cena_3->setStyleSheet(QLatin1String("background-color: rgb(226, 177, 177);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        cena_3->setAlignment(Qt::AlignCenter);
        cena_4 = new QLabel(page_prodavn);
        cena_4->setObjectName(QStringLiteral("cena_4"));
        cena_4->setGeometry(QRect(460, 230, 61, 21));
        cena_4->setStyleSheet(QLatin1String("background-color: rgb(226, 177, 177);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        cena_4->setAlignment(Qt::AlignCenter);
        cena_5 = new QLabel(page_prodavn);
        cena_5->setObjectName(QStringLiteral("cena_5"));
        cena_5->setGeometry(QRect(460, 280, 61, 21));
        cena_5->setStyleSheet(QLatin1String("background-color: rgb(226, 177, 177);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        cena_5->setAlignment(Qt::AlignCenter);
        p4_cena_4 = new QLabel(page_prodavn);
        p4_cena_4->setObjectName(QStringLiteral("p4_cena_4"));
        p4_cena_4->setGeometry(QRect(370, 230, 71, 21));
        p4_cena_4->setStyleSheet(QLatin1String("background-color: rgb(213, 147, 125);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        p4_cena_4->setAlignment(Qt::AlignCenter);
        p4_cena_4->setWordWrap(true);
        cena_1 = new QLabel(page_prodavn);
        cena_1->setObjectName(QStringLiteral("cena_1"));
        cena_1->setGeometry(QRect(460, 90, 61, 21));
        cena_1->setStyleSheet(QLatin1String("background-color: rgb(226, 177, 177);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        cena_1->setAlignment(Qt::AlignCenter);
        fj6_naziv_2 = new QLabel(page_prodavn);
        fj6_naziv_2->setObjectName(QStringLiteral("fj6_naziv_2"));
        fj6_naziv_2->setGeometry(QRect(20, 330, 91, 21));
        fj6_naziv_2->setStyleSheet(QLatin1String("background-color: rgb(213, 147, 125);\n"
"font: 75 italic 14pt \"Ubuntu Mono\";"));
        fj6_naziv_2->setAlignment(Qt::AlignCenter);
        fj6_naziv_2->setWordWrap(true);
        pe6_vredn_6 = new QLabel(page_prodavn);
        pe6_vredn_6->setObjectName(QStringLiteral("pe6_vredn_6"));
        pe6_vredn_6->setGeometry(QRect(190, 330, 81, 21));
        pe6_vredn_6->setStyleSheet(QLatin1String("background-color: rgb(213, 147, 125);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        pe6_vredn_6->setAlignment(Qt::AlignCenter);
        pe6_vredn_6->setWordWrap(true);
        vr_e_6 = new QLabel(page_prodavn);
        vr_e_6->setObjectName(QStringLiteral("vr_e_6"));
        vr_e_6->setGeometry(QRect(280, 330, 61, 21));
        vr_e_6->setStyleSheet(QLatin1String("background-color: rgb(226, 177, 177);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        vr_e_6->setAlignment(Qt::AlignCenter);
        p6_cena_6 = new QLabel(page_prodavn);
        p6_cena_6->setObjectName(QStringLiteral("p6_cena_6"));
        p6_cena_6->setGeometry(QRect(370, 330, 71, 21));
        p6_cena_6->setStyleSheet(QLatin1String("background-color: rgb(213, 147, 125);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        p6_cena_6->setAlignment(Qt::AlignCenter);
        p6_cena_6->setWordWrap(true);
        cena_6 = new QLabel(page_prodavn);
        cena_6->setObjectName(QStringLiteral("cena_6"));
        cena_6->setGeometry(QRect(460, 330, 61, 21));
        cena_6->setStyleSheet(QLatin1String("background-color: rgb(226, 177, 177);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        cena_6->setAlignment(Qt::AlignCenter);
        kupi_6 = new QPushButton(page_prodavn);
        kupi_6->setObjectName(QStringLiteral("kupi_6"));
        kupi_6->setGeometry(QRect(570, 330, 89, 21));
        kupi_6->setStyleSheet(QLatin1String("background-color: rgb(186, 189, 182);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        lab_kcal = new QLabel(page_prodavn);
        lab_kcal->setObjectName(QStringLiteral("lab_kcal"));
        lab_kcal->setGeometry(QRect(280, 70, 61, 20));
        lab_kcal->setStyleSheet(QLatin1String("background-color: rgb(148, 78, 93);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        lab_kcal->setAlignment(Qt::AlignCenter);
        lab_cena = new QLabel(page_prodavn);
        lab_cena->setObjectName(QStringLiteral("lab_cena"));
        lab_cena->setGeometry(QRect(460, 70, 61, 21));
        lab_cena->setStyleSheet(QLatin1String("background-color: rgb(148, 78, 93);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        lab_cena->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(page_prodavn);
        graphicsView_prodavn->raise();
        cena_1->raise();
        fj1_naziv_2->raise();
        fj2_naziv_2->raise();
        fj4_naziv_2->raise();
        cena_2->raise();
        cena_3->raise();
        cena_4->raise();
        cena_5->raise();
        fj3_naziv_2->raise();
        fj5_naziv_2->raise();
        pe1_vredn_1->raise();
        p5_cena_5->raise();
        pe3_vredn_3->raise();
        kupi_2->raise();
        vr_e_3->raise();
        kupi_1->raise();
        p4_cena_4->raise();
        kupi_4->raise();
        pe2_vredn_2->raise();
        label_prodavn->raise();
        vr_e_1->raise();
        vr_e_4->raise();
        p3_cena_3->raise();
        pe5_vredn_5->raise();
        kupi_3->raise();
        p2_cena_2->raise();
        pushButton_prod_nazad->raise();
        vr_e_2->raise();
        vr_e_5->raise();
        p1_cena_1->raise();
        kupi_5->raise();
        pe4_vredn_4->raise();
        fj6_naziv_2->raise();
        pe6_vredn_6->raise();
        vr_e_6->raise();
        p6_cena_6->raise();
        cena_6->raise();
        kupi_6->raise();
        lab_kcal->raise();
        lab_cena->raise();
        page_friz = new QWidget();
        page_friz->setObjectName(QStringLiteral("page_friz"));
        graphicsView_friz = new QGraphicsView(page_friz);
        graphicsView_friz->setObjectName(QStringLiteral("graphicsView_friz"));
        graphicsView_friz->setGeometry(QRect(0, 0, 681, 391));
        graphicsView_friz->setStyleSheet(QStringLiteral("background-color: rgb(182, 220, 235);"));
        pushButton_friz_nazad = new QPushButton(page_friz);
        pushButton_friz_nazad->setObjectName(QStringLiteral("pushButton_friz_nazad"));
        pushButton_friz_nazad->setGeometry(QRect(40, 20, 89, 25));
        pushButton_friz_nazad->setStyleSheet(QLatin1String("background-color: rgb(186, 189, 182);\n"
"font: 75 italic 17pt \"Ubuntu Mono\";"));
        label_friz = new QLabel(page_friz);
        label_friz->setObjectName(QStringLiteral("label_friz"));
        label_friz->setGeometry(QRect(300, 20, 111, 21));
        label_friz->setStyleSheet(QLatin1String("background-color: rgb(64, 175, 191);\n"
"font: 75 italic 17pt \"Ubuntu Mono\";"));
        label_friz->setAlignment(Qt::AlignCenter);
        label_friz->setWordWrap(true);
        fj1_naziv = new QLabel(page_friz);
        fj1_naziv->setObjectName(QStringLiteral("fj1_naziv"));
        fj1_naziv->setGeometry(QRect(20, 80, 91, 21));
        fj1_naziv->setStyleSheet(QLatin1String("background-color: rgb(64, 175, 191);\n"
"font: 75 italic 14pt \"Ubuntu Mono\";"));
        fj1_naziv->setAlignment(Qt::AlignCenter);
        fj1_naziv->setWordWrap(true);
        fj2_naziv = new QLabel(page_friz);
        fj2_naziv->setObjectName(QStringLiteral("fj2_naziv"));
        fj2_naziv->setGeometry(QRect(20, 130, 91, 21));
        fj2_naziv->setStyleSheet(QLatin1String("background-color: rgb(64, 175, 191);\n"
"font: 75 italic 14pt \"Ubuntu Mono\";"));
        fj2_naziv->setAlignment(Qt::AlignCenter);
        fj2_naziv->setWordWrap(true);
        fj3_naziv = new QLabel(page_friz);
        fj3_naziv->setObjectName(QStringLiteral("fj3_naziv"));
        fj3_naziv->setGeometry(QRect(20, 180, 91, 21));
        fj3_naziv->setStyleSheet(QLatin1String("background-color: rgb(64, 175, 191);\n"
"font: 75 italic 14pt \"Ubuntu Mono\";"));
        fj3_naziv->setAlignment(Qt::AlignCenter);
        fj3_naziv->setWordWrap(true);
        fj4_naziv = new QLabel(page_friz);
        fj4_naziv->setObjectName(QStringLiteral("fj4_naziv"));
        fj4_naziv->setGeometry(QRect(20, 230, 91, 21));
        fj4_naziv->setStyleSheet(QLatin1String("background-color: rgb(64, 175, 191);\n"
"font: 75 italic 14pt \"Ubuntu Mono\";"));
        fj4_naziv->setAlignment(Qt::AlignCenter);
        fj4_naziv->setWordWrap(true);
        fj5_naziv = new QLabel(page_friz);
        fj5_naziv->setObjectName(QStringLiteral("fj5_naziv"));
        fj5_naziv->setGeometry(QRect(20, 280, 91, 21));
        fj5_naziv->setStyleSheet(QLatin1String("background-color: rgb(64, 175, 191);\n"
"font: 75 italic 14pt \"Ubuntu Mono\";"));
        fj5_naziv->setAlignment(Qt::AlignCenter);
        fj5_naziv->setWordWrap(true);
        fe1_vredn = new QLabel(page_friz);
        fe1_vredn->setObjectName(QStringLiteral("fe1_vredn"));
        fe1_vredn->setGeometry(QRect(230, 80, 81, 21));
        fe1_vredn->setStyleSheet(QLatin1String("background-color: rgb(64, 175, 191);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        fe1_vredn->setAlignment(Qt::AlignCenter);
        fe1_vredn->setWordWrap(true);
        fe2_vredn = new QLabel(page_friz);
        fe2_vredn->setObjectName(QStringLiteral("fe2_vredn"));
        fe2_vredn->setGeometry(QRect(230, 130, 81, 21));
        fe2_vredn->setStyleSheet(QLatin1String("background-color: rgb(64, 175, 191);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        fe2_vredn->setAlignment(Qt::AlignCenter);
        fe2_vredn->setWordWrap(true);
        fe3_vredn = new QLabel(page_friz);
        fe3_vredn->setObjectName(QStringLiteral("fe3_vredn"));
        fe3_vredn->setGeometry(QRect(230, 180, 81, 21));
        fe3_vredn->setStyleSheet(QLatin1String("background-color: rgb(64, 175, 191);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        fe3_vredn->setAlignment(Qt::AlignCenter);
        fe3_vredn->setWordWrap(true);
        fe4_vredn = new QLabel(page_friz);
        fe4_vredn->setObjectName(QStringLiteral("fe4_vredn"));
        fe4_vredn->setGeometry(QRect(230, 230, 81, 21));
        fe4_vredn->setStyleSheet(QLatin1String("background-color: rgb(64, 175, 191);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        fe4_vredn->setAlignment(Qt::AlignCenter);
        fe4_vredn->setWordWrap(true);
        fe5_vredn = new QLabel(page_friz);
        fe5_vredn->setObjectName(QStringLiteral("fe5_vredn"));
        fe5_vredn->setGeometry(QRect(230, 280, 81, 21));
        fe5_vredn->setStyleSheet(QLatin1String("background-color: rgb(64, 175, 191);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        fe5_vredn->setAlignment(Qt::AlignCenter);
        fe5_vredn->setWordWrap(true);
        vr_1 = new QLabel(page_friz);
        vr_1->setObjectName(QStringLiteral("vr_1"));
        vr_1->setGeometry(QRect(320, 80, 61, 21));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(186, 189, 182, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        vr_1->setPalette(palette);
        vr_1->setStyleSheet(QLatin1String("background-color: rgb(186, 189, 182);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        vr_1->setAlignment(Qt::AlignCenter);
        vr_2 = new QLabel(page_friz);
        vr_2->setObjectName(QStringLiteral("vr_2"));
        vr_2->setGeometry(QRect(320, 130, 61, 21));
        vr_2->setStyleSheet(QLatin1String("background-color: rgb(186, 189, 182);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        vr_2->setAlignment(Qt::AlignCenter);
        vr_3 = new QLabel(page_friz);
        vr_3->setObjectName(QStringLiteral("vr_3"));
        vr_3->setGeometry(QRect(320, 180, 61, 21));
        vr_3->setStyleSheet(QLatin1String("background-color: rgb(186, 189, 182);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        vr_3->setAlignment(Qt::AlignCenter);
        vr_4 = new QLabel(page_friz);
        vr_4->setObjectName(QStringLiteral("vr_4"));
        vr_4->setGeometry(QRect(320, 230, 61, 21));
        vr_4->setStyleSheet(QLatin1String("background-color: rgb(186, 189, 182);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        vr_4->setAlignment(Qt::AlignCenter);
        vr_5 = new QLabel(page_friz);
        vr_5->setObjectName(QStringLiteral("vr_5"));
        vr_5->setGeometry(QRect(320, 280, 61, 21));
        vr_5->setStyleSheet(QLatin1String("background-color: rgb(186, 189, 182);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        vr_5->setAlignment(Qt::AlignCenter);
        jedi_1 = new QPushButton(page_friz);
        jedi_1->setObjectName(QStringLiteral("jedi_1"));
        jedi_1->setGeometry(QRect(570, 80, 89, 21));
        jedi_1->setStyleSheet(QLatin1String("background-color: rgb(186, 189, 182);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        jedi_2 = new QPushButton(page_friz);
        jedi_2->setObjectName(QStringLiteral("jedi_2"));
        jedi_2->setGeometry(QRect(570, 130, 89, 21));
        jedi_2->setStyleSheet(QLatin1String("background-color: rgb(186, 189, 182);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        jedi_3 = new QPushButton(page_friz);
        jedi_3->setObjectName(QStringLiteral("jedi_3"));
        jedi_3->setGeometry(QRect(570, 180, 89, 21));
        jedi_3->setStyleSheet(QLatin1String("background-color: rgb(186, 189, 182);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        jedi_4 = new QPushButton(page_friz);
        jedi_4->setObjectName(QStringLiteral("jedi_4"));
        jedi_4->setGeometry(QRect(570, 230, 89, 21));
        jedi_4->setStyleSheet(QLatin1String("background-color: rgb(186, 189, 182);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        jedi_5 = new QPushButton(page_friz);
        jedi_5->setObjectName(QStringLiteral("jedi_5"));
        jedi_5->setGeometry(QRect(570, 280, 89, 21));
        jedi_5->setStyleSheet(QLatin1String("background-color: rgb(186, 189, 182);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        vr_kol_3 = new QLabel(page_friz);
        vr_kol_3->setObjectName(QStringLiteral("vr_kol_3"));
        vr_kol_3->setGeometry(QRect(490, 180, 51, 21));
        vr_kol_3->setStyleSheet(QLatin1String("background-color: rgb(186, 189, 182);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        vr_kol_3->setAlignment(Qt::AlignCenter);
        vr_kol_1 = new QLabel(page_friz);
        vr_kol_1->setObjectName(QStringLiteral("vr_kol_1"));
        vr_kol_1->setGeometry(QRect(490, 80, 51, 21));
        vr_kol_1->setStyleSheet(QLatin1String("background-color: rgb(186, 189, 182);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        vr_kol_1->setAlignment(Qt::AlignCenter);
        vr_kol_4 = new QLabel(page_friz);
        vr_kol_4->setObjectName(QStringLiteral("vr_kol_4"));
        vr_kol_4->setGeometry(QRect(490, 230, 51, 21));
        vr_kol_4->setStyleSheet(QLatin1String("background-color: rgb(186, 189, 182);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        vr_kol_4->setAlignment(Qt::AlignCenter);
        kol_3 = new QLabel(page_friz);
        kol_3->setObjectName(QStringLiteral("kol_3"));
        kol_3->setGeometry(QRect(400, 180, 71, 21));
        kol_3->setStyleSheet(QLatin1String("background-color: rgb(64, 175, 191);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        kol_3->setAlignment(Qt::AlignCenter);
        kol_3->setWordWrap(true);
        vr_kol_5 = new QLabel(page_friz);
        vr_kol_5->setObjectName(QStringLiteral("vr_kol_5"));
        vr_kol_5->setGeometry(QRect(490, 280, 51, 21));
        vr_kol_5->setStyleSheet(QLatin1String("background-color: rgb(186, 189, 182);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        vr_kol_5->setAlignment(Qt::AlignCenter);
        kol_2 = new QLabel(page_friz);
        kol_2->setObjectName(QStringLiteral("kol_2"));
        kol_2->setGeometry(QRect(400, 130, 71, 21));
        kol_2->setStyleSheet(QLatin1String("background-color: rgb(64, 175, 191);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        kol_2->setAlignment(Qt::AlignCenter);
        kol_2->setWordWrap(true);
        kol_4 = new QLabel(page_friz);
        kol_4->setObjectName(QStringLiteral("kol_4"));
        kol_4->setGeometry(QRect(400, 230, 71, 21));
        kol_4->setStyleSheet(QLatin1String("background-color: rgb(64, 175, 191);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        kol_4->setAlignment(Qt::AlignCenter);
        kol_4->setWordWrap(true);
        kol_1 = new QLabel(page_friz);
        kol_1->setObjectName(QStringLiteral("kol_1"));
        kol_1->setGeometry(QRect(400, 80, 71, 21));
        kol_1->setStyleSheet(QLatin1String("background-color: rgb(64, 175, 191);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        kol_1->setAlignment(Qt::AlignCenter);
        kol_1->setWordWrap(true);
        kol_5 = new QLabel(page_friz);
        kol_5->setObjectName(QStringLiteral("kol_5"));
        kol_5->setGeometry(QRect(400, 280, 71, 21));
        kol_5->setStyleSheet(QLatin1String("background-color: rgb(64, 175, 191);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        kol_5->setAlignment(Qt::AlignCenter);
        kol_5->setWordWrap(true);
        vr_kol_2 = new QLabel(page_friz);
        vr_kol_2->setObjectName(QStringLiteral("vr_kol_2"));
        vr_kol_2->setGeometry(QRect(490, 130, 51, 21));
        vr_kol_2->setStyleSheet(QLatin1String("background-color: rgb(186, 189, 182);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        vr_kol_2->setAlignment(Qt::AlignCenter);
        fj6_naziv = new QLabel(page_friz);
        fj6_naziv->setObjectName(QStringLiteral("fj6_naziv"));
        fj6_naziv->setGeometry(QRect(20, 330, 91, 21));
        fj6_naziv->setStyleSheet(QLatin1String("background-color: rgb(64, 175, 191);\n"
"font: 75 italic 14pt \"Ubuntu Mono\";"));
        fj6_naziv->setAlignment(Qt::AlignCenter);
        fj6_naziv->setWordWrap(true);
        fe6_vredn = new QLabel(page_friz);
        fe6_vredn->setObjectName(QStringLiteral("fe6_vredn"));
        fe6_vredn->setGeometry(QRect(230, 330, 81, 21));
        fe6_vredn->setStyleSheet(QLatin1String("background-color: rgb(64, 175, 191);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        fe6_vredn->setAlignment(Qt::AlignCenter);
        fe6_vredn->setWordWrap(true);
        vr_6 = new QLabel(page_friz);
        vr_6->setObjectName(QStringLiteral("vr_6"));
        vr_6->setGeometry(QRect(320, 330, 61, 21));
        vr_6->setStyleSheet(QLatin1String("background-color: rgb(186, 189, 182);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        vr_6->setAlignment(Qt::AlignCenter);
        kol_6 = new QLabel(page_friz);
        kol_6->setObjectName(QStringLiteral("kol_6"));
        kol_6->setGeometry(QRect(400, 330, 71, 21));
        kol_6->setStyleSheet(QLatin1String("background-color: rgb(64, 175, 191);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        kol_6->setAlignment(Qt::AlignCenter);
        kol_6->setWordWrap(true);
        vr_kol_6 = new QLabel(page_friz);
        vr_kol_6->setObjectName(QStringLiteral("vr_kol_6"));
        vr_kol_6->setGeometry(QRect(490, 330, 51, 21));
        vr_kol_6->setStyleSheet(QLatin1String("background-color: rgb(186, 189, 182);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        vr_kol_6->setAlignment(Qt::AlignCenter);
        jedi_6 = new QPushButton(page_friz);
        jedi_6->setObjectName(QStringLiteral("jedi_6"));
        jedi_6->setGeometry(QRect(570, 330, 89, 21));
        jedi_6->setStyleSheet(QLatin1String("background-color: rgb(186, 189, 182);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        lab_kcal2 = new QLabel(page_friz);
        lab_kcal2->setObjectName(QStringLiteral("lab_kcal2"));
        lab_kcal2->setGeometry(QRect(320, 60, 61, 21));
        lab_kcal2->setStyleSheet(QLatin1String("background-color: rgb(182, 220, 235);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        lab_kcal2->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(page_friz);
        page_igra_1 = new QWidget();
        page_igra_1->setObjectName(QStringLiteral("page_igra_1"));
        pushButton_igra_1_nazad = new QPushButton(page_igra_1);
        pushButton_igra_1_nazad->setObjectName(QStringLiteral("pushButton_igra_1_nazad"));
        pushButton_igra_1_nazad->setGeometry(QRect(50, 20, 89, 25));
        pushButton_igra_1_nazad->setStyleSheet(QLatin1String("background-color: rgb(186, 189, 182);\n"
"font: 75 italic 17pt \"Ubuntu Mono\";\n"
""));
        stackedWidget->addWidget(page_igra_1);
        page_igra_2 = new QWidget();
        page_igra_2->setObjectName(QStringLiteral("page_igra_2"));
        pushButton_igra_2_nazad = new QPushButton(page_igra_2);
        pushButton_igra_2_nazad->setObjectName(QStringLiteral("pushButton_igra_2_nazad"));
        pushButton_igra_2_nazad->setGeometry(QRect(50, 30, 89, 25));
        pushButton_igra_2_nazad->setStyleSheet(QLatin1String("background-color: rgb(186, 189, 182);\n"
"font: 75 italic 17pt \"Ubuntu Mono\";"));
        stackedWidget->addWidget(page_igra_2);
        page_igra_3 = new QWidget();
        page_igra_3->setObjectName(QStringLiteral("page_igra_3"));
        pushButton_igra_3_nazad = new QPushButton(page_igra_3);
        pushButton_igra_3_nazad->setObjectName(QStringLiteral("pushButton_igra_3_nazad"));
        pushButton_igra_3_nazad->setGeometry(QRect(40, 30, 89, 25));
        pushButton_igra_3_nazad->setStyleSheet(QLatin1String("background-color: rgb(186, 189, 182);\n"
"font: 75 italic 17pt \"Ubuntu Mono\";"));
        stackedWidget->addWidget(page_igra_3);
        page_igra_4 = new QWidget();
        page_igra_4->setObjectName(QStringLiteral("page_igra_4"));
        pushButton_igra_4_nazad = new QPushButton(page_igra_4);
        pushButton_igra_4_nazad->setObjectName(QStringLiteral("pushButton_igra_4_nazad"));
        pushButton_igra_4_nazad->setGeometry(QRect(50, 40, 89, 25));
        pushButton_igra_4_nazad->setStyleSheet(QLatin1String("background-color: rgb(186, 189, 182);\n"
"font: 75 italic 17pt \"Ubuntu Mono\";"));
        stackedWidget->addWidget(page_igra_4);
        SnagaBar = new QProgressBar(centralWidget);
        SnagaBar->setObjectName(QStringLiteral("SnagaBar"));
        SnagaBar->setGeometry(QRect(420, 20, 111, 20));
        SnagaBar->setAutoFillBackground(false);
        SnagaBar->setStyleSheet(QLatin1String("background-color: rgb(211, 215, 207);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        SnagaBar->setValue(24);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(420, 0, 67, 16));
        label->setStyleSheet(QLatin1String("background-color: rgb(74, 172, 136);\n"
"font: 75 italic 13pt \"Ubuntu Mono\";"));
        label->setAlignment(Qt::AlignCenter);
        tajmer = new QLabel(centralWidget);
        tajmer->setObjectName(QStringLiteral("tajmer"));
        tajmer->setGeometry(QRect(80, 20, 61, 21));
        tajmer->setStyleSheet(QLatin1String("background-color: rgb(211, 215, 207);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        tajmer->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 20, 67, 21));
        label_3->setStyleSheet(QLatin1String("background-color: rgb(74, 172, 136);\n"
"font: 75 italic 13pt \"Ubuntu Mono\";"));
        label_3->setAlignment(Qt::AlignCenter);
        ime = new QLabel(centralWidget);
        ime->setObjectName(QStringLiteral("ime"));
        ime->setGeometry(QRect(20, 0, 121, 21));
        ime->setStyleSheet(QLatin1String("background-color: rgb(74, 172, 136);\n"
"font: 75 italic 13pt \"Ubuntu Mono\";"));
        ime->setAlignment(Qt::AlignCenter);
        l_kol_novca = new QLabel(centralWidget);
        l_kol_novca->setObjectName(QStringLiteral("l_kol_novca"));
        l_kol_novca->setGeometry(QRect(610, 20, 51, 21));
        l_kol_novca->setStyleSheet(QLatin1String("background-color: rgb(211, 215, 207);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        l_kol_novca->setAlignment(Qt::AlignCenter);
        fj1_naziv_3 = new QLabel(centralWidget);
        fj1_naziv_3->setObjectName(QStringLiteral("fj1_naziv_3"));
        fj1_naziv_3->setGeometry(QRect(540, 20, 61, 21));
        fj1_naziv_3->setStyleSheet(QLatin1String("background-color: rgb(74, 172, 136);\n"
"font: 75 italic 13pt \"Ubuntu Mono\";"));
        fj1_naziv_3->setAlignment(Qt::AlignCenter);
        fj1_naziv_3->setWordWrap(true);
        CistocaBar = new QProgressBar(centralWidget);
        CistocaBar->setObjectName(QStringLiteral("CistocaBar"));
        CistocaBar->setGeometry(QRect(280, 20, 118, 20));
        CistocaBar->setStyleSheet(QLatin1String("background-color: rgb(211, 215, 207);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        CistocaBar->setValue(0);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(280, 0, 67, 16));
        label_2->setStyleSheet(QLatin1String("background-color: rgb(74, 172, 136);\n"
"font: 75 italic 13pt \"Ubuntu Mono\";"));
        label_2->setAlignment(Qt::AlignCenter);
        naspavanostBar = new QProgressBar(centralWidget);
        naspavanostBar->setObjectName(QStringLiteral("naspavanostBar"));
        naspavanostBar->setGeometry(QRect(150, 20, 118, 23));
        naspavanostBar->setStyleSheet(QLatin1String("background-color: rgb(211, 215, 207);\n"
"font: 75 italic 12pt \"Ubuntu Mono\";"));
        naspavanostBar->setValue(24);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(150, 0, 101, 17));
        label_4->setStyleSheet(QLatin1String("background-color: rgb(74, 172, 136);\n"
"font: 75 italic 13pt \"Ubuntu Mono\";"));
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
        pushButton_fr->setText(QString());
        pushButton_pro->setText(QString());
        pushButton_kup_1->setText(QApplication::translate("MainWindow", "<", Q_NULLPTR));
        label_kup->setText(QApplication::translate("MainWindow", "Kupatilo", Q_NULLPTR));
        pushButton_kup_2->setText(QApplication::translate("MainWindow", ">", Q_NULLPTR));
        bt_kupanje->setText(QApplication::translate("MainWindow", "Kupanje", Q_NULLPTR));
        pushButton_igraon_1->setText(QApplication::translate("MainWindow", "<", Q_NULLPTR));
        label_igraon->setText(QApplication::translate("MainWindow", "Igraonica", Q_NULLPTR));
        pushButton_igraon_2->setText(QApplication::translate("MainWindow", ">", Q_NULLPTR));
        pushButton_igra_1->setText(QApplication::translate("MainWindow", "Igra 1", Q_NULLPTR));
        pushButton_igra_2->setText(QApplication::translate("MainWindow", "Igra 2", Q_NULLPTR));
        pushButton_igra_3->setText(QApplication::translate("MainWindow", "Igra 3", Q_NULLPTR));
        pushButton_igra_4->setText(QApplication::translate("MainWindow", "Igra 4", Q_NULLPTR));
        pushButton_spav_1->setText(QApplication::translate("MainWindow", "<", Q_NULLPTR));
        label_spav->setText(QApplication::translate("MainWindow", "Spava\304\207a soba", Q_NULLPTR));
        pushButton_spav_2->setText(QApplication::translate("MainWindow", ">", Q_NULLPTR));
        bt_spavaj->setText(QApplication::translate("MainWindow", "Spavaj", Q_NULLPTR));
        bt_budjenje->setText(QApplication::translate("MainWindow", "Budjenje", Q_NULLPTR));
        pushButton_prod_nazad->setText(QApplication::translate("MainWindow", "<", Q_NULLPTR));
        label_prodavn->setText(QApplication::translate("MainWindow", "Prodavnica", Q_NULLPTR));
        fj1_naziv_2->setText(QApplication::translate("MainWindow", "Naziv", Q_NULLPTR));
        kupi_1->setText(QApplication::translate("MainWindow", "Kupi", Q_NULLPTR));
        vr_e_4->setText(QString());
        kupi_3->setText(QApplication::translate("MainWindow", "Kupi", Q_NULLPTR));
        kupi_4->setText(QApplication::translate("MainWindow", "Kupi", Q_NULLPTR));
        fj4_naziv_2->setText(QApplication::translate("MainWindow", "Naziv", Q_NULLPTR));
        fj3_naziv_2->setText(QApplication::translate("MainWindow", "Naziv", Q_NULLPTR));
        pe1_vredn_1->setText(QApplication::translate("MainWindow", "Energ. vr.", Q_NULLPTR));
        kupi_2->setText(QApplication::translate("MainWindow", "Kupi", Q_NULLPTR));
        vr_e_1->setText(QString());
        pe4_vredn_4->setText(QApplication::translate("MainWindow", "Energ. vr.", Q_NULLPTR));
        vr_e_5->setText(QString());
        kupi_5->setText(QApplication::translate("MainWindow", "Kupi", Q_NULLPTR));
        pe2_vredn_2->setText(QApplication::translate("MainWindow", "Energ. vr.", Q_NULLPTR));
        vr_e_2->setText(QString());
        pe3_vredn_3->setText(QApplication::translate("MainWindow", "Energ. vr.", Q_NULLPTR));
        vr_e_3->setText(QString());
        pe5_vredn_5->setText(QApplication::translate("MainWindow", "Energ. vr.", Q_NULLPTR));
        fj5_naziv_2->setText(QApplication::translate("MainWindow", "Naziv", Q_NULLPTR));
        fj2_naziv_2->setText(QApplication::translate("MainWindow", "Naziv", Q_NULLPTR));
        p5_cena_5->setText(QApplication::translate("MainWindow", "Cena", Q_NULLPTR));
        p1_cena_1->setText(QApplication::translate("MainWindow", "Cena", Q_NULLPTR));
        p2_cena_2->setText(QApplication::translate("MainWindow", "Cena", Q_NULLPTR));
        p3_cena_3->setText(QApplication::translate("MainWindow", "Cena", Q_NULLPTR));
        cena_2->setText(QString());
        cena_3->setText(QString());
        cena_4->setText(QString());
        cena_5->setText(QString());
        p4_cena_4->setText(QApplication::translate("MainWindow", "Cena", Q_NULLPTR));
        cena_1->setText(QString());
        fj6_naziv_2->setText(QApplication::translate("MainWindow", "Naziv", Q_NULLPTR));
        pe6_vredn_6->setText(QApplication::translate("MainWindow", "Energ. vr.", Q_NULLPTR));
        vr_e_6->setText(QString());
        p6_cena_6->setText(QApplication::translate("MainWindow", "Cena", Q_NULLPTR));
        cena_6->setText(QString());
        kupi_6->setText(QApplication::translate("MainWindow", "Kupi", Q_NULLPTR));
        lab_kcal->setText(QApplication::translate("MainWindow", "kcal", Q_NULLPTR));
        lab_cena->setText(QApplication::translate("MainWindow", "RDS", Q_NULLPTR));
        pushButton_friz_nazad->setText(QApplication::translate("MainWindow", "<", Q_NULLPTR));
        label_friz->setText(QApplication::translate("MainWindow", "Fri\305\276ider", Q_NULLPTR));
        fj1_naziv->setText(QApplication::translate("MainWindow", "Naziv", Q_NULLPTR));
        fj2_naziv->setText(QApplication::translate("MainWindow", "Naziv", Q_NULLPTR));
        fj3_naziv->setText(QApplication::translate("MainWindow", "Naziv", Q_NULLPTR));
        fj4_naziv->setText(QApplication::translate("MainWindow", "Naziv", Q_NULLPTR));
        fj5_naziv->setText(QApplication::translate("MainWindow", "Naziv", Q_NULLPTR));
        fe1_vredn->setText(QApplication::translate("MainWindow", "Energ. vr.", Q_NULLPTR));
        fe2_vredn->setText(QApplication::translate("MainWindow", "Energ. vr.", Q_NULLPTR));
        fe3_vredn->setText(QApplication::translate("MainWindow", "Energ. vr.", Q_NULLPTR));
        fe4_vredn->setText(QApplication::translate("MainWindow", "Energ. vr.", Q_NULLPTR));
        fe5_vredn->setText(QApplication::translate("MainWindow", "Energ. vr.", Q_NULLPTR));
        vr_1->setText(QString());
        vr_2->setText(QString());
        vr_3->setText(QString());
        vr_4->setText(QString());
        vr_5->setText(QString());
        jedi_1->setText(QApplication::translate("MainWindow", "Jedi", Q_NULLPTR));
        jedi_2->setText(QApplication::translate("MainWindow", "Jedi", Q_NULLPTR));
        jedi_3->setText(QApplication::translate("MainWindow", "Jedi", Q_NULLPTR));
        jedi_4->setText(QApplication::translate("MainWindow", "Jedi", Q_NULLPTR));
        jedi_5->setText(QApplication::translate("MainWindow", "Jedi", Q_NULLPTR));
        vr_kol_3->setText(QString());
        vr_kol_1->setText(QString());
        vr_kol_4->setText(QString());
        kol_3->setText(QApplication::translate("MainWindow", "Koli\304\215ina", Q_NULLPTR));
        vr_kol_5->setText(QString());
        kol_2->setText(QApplication::translate("MainWindow", "Koli\304\215ina", Q_NULLPTR));
        kol_4->setText(QApplication::translate("MainWindow", "Koli\304\215ina", Q_NULLPTR));
        kol_1->setText(QApplication::translate("MainWindow", "Koli\304\215ina", Q_NULLPTR));
        kol_5->setText(QApplication::translate("MainWindow", "Koli\304\215ina", Q_NULLPTR));
        vr_kol_2->setText(QString());
        fj6_naziv->setText(QApplication::translate("MainWindow", "Naziv", Q_NULLPTR));
        fe6_vredn->setText(QApplication::translate("MainWindow", "Energ. vr.", Q_NULLPTR));
        vr_6->setText(QString());
        kol_6->setText(QApplication::translate("MainWindow", "Koli\304\215ina", Q_NULLPTR));
        vr_kol_6->setText(QString());
        jedi_6->setText(QApplication::translate("MainWindow", "Jedi", Q_NULLPTR));
        lab_kcal2->setText(QApplication::translate("MainWindow", "kcal", Q_NULLPTR));
        pushButton_igra_1_nazad->setText(QApplication::translate("MainWindow", "<", Q_NULLPTR));
        pushButton_igra_2_nazad->setText(QApplication::translate("MainWindow", "<", Q_NULLPTR));
        pushButton_igra_3_nazad->setText(QApplication::translate("MainWindow", "<", Q_NULLPTR));
        pushButton_igra_4_nazad->setText(QApplication::translate("MainWindow", "<", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Snaga:", Q_NULLPTR));
        tajmer->setText(QApplication::translate("MainWindow", "00:00", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Tajmer:", Q_NULLPTR));
        ime->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        l_kol_novca->setText(QString());
        fj1_naziv_3->setText(QApplication::translate("MainWindow", "Novac:", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\304\214isto\304\207a:", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Naspavanost", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
