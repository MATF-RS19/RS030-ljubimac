#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QDebug>

#define SC_W 678
#define SC_H 388

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setFixedSize(672,457);

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

    QRect lab_velicina=QRect(SC_W/2-50,20,90,20);
    ui->label_kuh->setGeometry(lab_velicina);
    ui->label_igraon->setGeometry(lab_velicina);
    ui->label_kup->setGeometry(lab_velicina);
    ui->label_spav->setGeometry(lab_velicina);

    QRect button_1_vel=QRect(SC_W/4-50,20,90,25);
    ui->pushButton_spav_1->setGeometry(button_1_vel);
    ui->pushButton_kup_1->setGeometry(button_1_vel);
    ui->pushButton_kuh_1->setGeometry(button_1_vel);
    ui->pushButton_igraon_1->setGeometry(button_1_vel);

    QRect button_2_vel=QRect(3*SC_W/4-50,20,90,25);
    ui->pushButton_spav_2->setGeometry(button_2_vel);
    ui->pushButton_kup_2->setGeometry(button_2_vel);
    ui->pushButton_kuh_2->setGeometry(button_2_vel);
    ui->pushButton_igraon_2->setGeometry(button_2_vel);
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
