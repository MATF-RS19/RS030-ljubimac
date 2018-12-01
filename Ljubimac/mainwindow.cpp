#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QDebug>
#include <QImage>
#include <QBrush>

#define SC_W 678
#define SC_H 388
#define BT_L_TOP 15
#define L_W 130
#define BT_L_H 25
#define BT_W 90
//novi komentar
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowTitle("Ljubimac");
    setFixedSize(672,457);

    //Pocetna scena kuhinja
    ui->stackedWidget->setCurrentIndex(0);

    //Postavljanje scena na graphicsView

    QRectF sc_velicina=QRectF(0,0,SC_W,SC_H);

    QGraphicsScene *sc_kuh =new QGraphicsScene();
    ui->graphicsView_kuhinja->setScene(sc_kuh);
    sc_kuh->setSceneRect(sc_velicina);

    QGraphicsScene *sc_kup =new QGraphicsScene();
    ui->graphicsView_kupatilo->setScene(sc_kup);
    sc_kup->setSceneRect(sc_velicina);

    QGraphicsScene *sc_spav =new QGraphicsScene();
    ui->graphicsView_spavaca->setScene(sc_spav);
    sc_spav->setSceneRect(sc_velicina);

    QGraphicsScene *sc_igr =new QGraphicsScene();
    ui->graphicsView_igraonica->setScene(sc_igr);
    sc_igr->setSceneRect(sc_velicina);

    //Podesavanje velicine i polozaja imena sobe i strelica

    QRect lab_velicina=QRect(SC_W/2-50,BT_L_TOP,L_W,BT_L_H);
    ui->label_kuh->setGeometry(lab_velicina);
    ui->label_igraon->setGeometry(lab_velicina);
    ui->label_kup->setGeometry(lab_velicina);
    ui->label_spav->setGeometry(lab_velicina);
    ui->label_friz->setGeometry(lab_velicina);
    ui->label_prodavn->setGeometry(lab_velicina);

    QRect button_1_vel=QRect(SC_W/4-35,BT_L_TOP,BT_W,BT_L_H);
    ui->pushButton_spav_1->setGeometry(button_1_vel);
    ui->pushButton_kup_1->setGeometry(button_1_vel);
    ui->pushButton_kuh_1->setGeometry(button_1_vel);
    ui->pushButton_igraon_1->setGeometry(button_1_vel);
    ui->pushButton_friz_nazad->setGeometry(button_1_vel);
    ui->pushButton_prod_nazad->setGeometry(button_1_vel);
    ui->pushButton_igra_1_nazad->setGeometry(button_1_vel);
    ui->pushButton_igra_2_nazad->setGeometry(button_1_vel);
    ui->pushButton_igra_3_nazad->setGeometry(button_1_vel);
    ui->pushButton_igra_4_nazad->setGeometry(button_1_vel);

    QRect button_2_vel=QRect(3*SC_W/4-30,BT_L_TOP,BT_W,BT_L_H);
    ui->pushButton_spav_2->setGeometry(button_2_vel);
    ui->pushButton_kup_2->setGeometry(button_2_vel);
    ui->pushButton_kuh_2->setGeometry(button_2_vel);
    ui->pushButton_igraon_2->setGeometry(button_2_vel);

    //Postavljanje pozadina na sobe

    sc_kuh->setBackgroundBrush(QBrush((QImage(":/images/kitchen_1.jpg")).scaled(SC_W,SC_H)));
    sc_igr->setBackgroundBrush(QBrush((QImage(":/images/playroom.jpg")).scaled(SC_W,SC_H)));
    sc_spav->setBackgroundBrush(QBrush((QImage(":/images/bedroom.jpg")).scaled(SC_W,SC_H)));
    sc_kup->setBackgroundBrush(QBrush((QImage(":/images/bathroom.jpg")).scaled(SC_W,SC_H)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_kup_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_kup_1_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_kuh_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_kuh_1_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_pushButton_spav_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_spav_1_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_igraon_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_pushButton_igraon_1_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_pro_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_pushButton_fr_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_pushButton_friz_nazad_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_prod_nazad_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_igra_1_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}

void MainWindow::on_pushButton_igra_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}

void MainWindow::on_pushButton_igra_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}

void MainWindow::on_pushButton_igra_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);
}

void MainWindow::on_pushButton_igra_1_nazad_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_igra_2_nazad_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_pushButton_igra_3_nazad_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_igra_4_nazad_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}
