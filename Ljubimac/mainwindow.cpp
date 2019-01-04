#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QDebug>
#include <QImage>
#include <QBrush>
#include <QProgressBar>
#include <QTime>
#include <QLabel>
#include <QPushButton>
#include <iostream>
#include "igrica1.h"
#include "ljubimac.h"
#include "vreme.h"
#define SC_W 678
#define SC_H 388
#define BT_L_TOP 15
#define L_W 130
#define BT_L_H 25
#define BT_W 90
#define HR_XP 130
#define HR_YP 60
#define RAZ 50
#define KOEF 0.11
//novi komentar
MainWindow::MainWindow(/*Ljubimac *l,*/ QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),friz(ui), prod(ui),ljub_spava(ui),ljub_kupanje(ui)
{

    ljub = Ljubimac::singleton();
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

    QGraphicsScene *sc_friz =new QGraphicsScene();
    ui->graphicsView_friz->setScene(sc_friz);
    sc_friz->setSceneRect(sc_velicina);

    QGraphicsScene *sc_prod =new QGraphicsScene();
    ui->graphicsView_prodavn->setScene(sc_prod);
    sc_prod->setSceneRect(sc_velicina);
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
    ui->bt_nazad_igra1_ulaz->setGeometry(button_1_vel);

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


    iscrtaj_friz(sc_friz);
    iscrtaj_prodavnicu(sc_prod);

    ui->l_kol_novca->setText(QString::number(ljub->get_novac()));
    ui->ime->setText(ljub->get_ime());

    ui->bt_budjenje->setDisabled(true);
    connect(ui->bt_spavaj,SIGNAL(clicked(bool)),this,SLOT(on_pushButton_spavaj_clicked()));
    connect(ui->bt_kupanje,SIGNAL(clicked(bool)),this,SLOT(on_pushButton_kupanje_clicked()));
    connect(ui->bt_budjenje,SIGNAL(clicked(bool)),this,SLOT(on_pushButton_budjenje_clicked()));
    connect(ui->bt_nazad_igra1_ulaz,SIGNAL(clicked(bool)),this,SLOT(on_bt_igra1_ulaz_clicked()));
    connect(ui->bt_igraj_1,SIGNAL(clicked(bool)),this,SLOT(bt_igra_1_clicked()));



}

MainWindow::~MainWindow()
{
   // tajmer->quit();
    //delete tajmer;
    tajmer->terminate();
    while(!tajmer->isFinished())
        tajmer->sleep(1);
    delete tajmer;
    igra->save();
    delete ui;
    delete igra;
}

void MainWindow::pokreni_vreme()
{
    connect(ljub, SIGNAL(value_changed(int)), ui->SnagaBar, SLOT(setValue(int)));
    connect(ljub, SIGNAL(value_changed_cist(int)), ui->CistocaBar, SLOT(setValue(int)));
    connect(ljub, SIGNAL(value_changed_naspavanost(int)), ui->naspavanostBar, SLOT(setValue(int)));

    tajmer->ljubimac = ljub;
    connect(tajmer->ljubimac, SIGNAL(sec_value_changed(int)), this, SLOT(on_timer(int)));
    tajmer->start();
    ljub->set_sit(ljub->get_sit());
    ljub->set_cist(ljub->get_cist());
    ljub->set_naspavanost(ljub->get_naspavanost());
    ui->ime->setText(ljub->get_ime());
    ui->l_kol_novca->setText(QString::number(ljub->get_novac()));
}


Frizider *MainWindow::fizider()
{
    return &friz;
}




void MainWindow::iscrtaj_friz(QGraphicsScene * scena){
    friz.ispisi_na_gui(friz);
    auto mapa=friz.mapa_frizider();

    auto i=mapa.begin();
    double prethodni=HR_YP;


    i.key()->setScale(KOEF);
    i.key()->setPos(HR_XP,HR_YP);
    scena->addItem(i.key());
    i++;prethodni=HR_YP;

    i.key()->setScale(KOEF);
    i.key()->setPos(HR_XP,prethodni+RAZ);
    scena->addItem(i.key());
    ++i;prethodni+=RAZ;

    i.key()->setScale(KOEF);
    i.key()->setPos(HR_XP,prethodni+RAZ);
    scena->addItem(i.key());
    ++i;prethodni+=RAZ;

    i.key()->setScale(KOEF);
    i.key()->setPos(HR_XP,prethodni+RAZ);
    scena->addItem(i.key());
    ++i;prethodni+=RAZ;

    i.key()->setScale(KOEF);
    i.key()->setPos(HR_XP,prethodni+RAZ);
    scena->addItem(i.key());
    ++i;prethodni+=RAZ;

    i.key()->setScale(KOEF);
    i.key()->setPos(HR_XP,prethodni+RAZ);
    scena->addItem(i.key());

}

void MainWindow::on_jedi_1_clicked()
{
    Hrana prva(ui->cena_1->text().toUInt(),ui->vr_1->text().toUInt(),ui->fj1_naziv->text());
    if(ui->vr_kol_1->text().toInt()>0){
    friz.uzmi_hranu(prva);
    ljub->add_sit(ui->vr_1->text().toInt()/100);
    friz.ispisi_na_gui(friz);
    }
}

void MainWindow::on_jedi_2_clicked()
{
    if(ui->vr_kol_2->text().toInt()>0){
    Hrana prva(ui->cena_2->text().toUInt(),ui->vr_2->text().toUInt(),ui->fj2_naziv->text());
    friz.uzmi_hranu(prva);
    ljub->add_sit(ui->vr_2->text().toInt()/100);
    friz.ispisi_na_gui(friz);
    }
}

void MainWindow::on_jedi_3_clicked()
{
    if(ui->vr_kol_3->text().toInt()>0){
    Hrana prva(ui->cena_3->text().toUInt(),ui->vr_3->text().toUInt(),ui->fj3_naziv->text());
    friz.uzmi_hranu(prva);
    ljub->add_sit(ui->vr_3->text().toInt()/100);
    friz.ispisi_na_gui(friz);
    }
}

void MainWindow::on_jedi_4_clicked()
{
    if(ui->vr_kol_4->text().toInt()>0){
    Hrana prva(ui->cena_4->text().toUInt(),ui->vr_4->text().toUInt(),ui->fj4_naziv->text());
    friz.uzmi_hranu(prva);
    ljub->add_sit(ui->vr_4->text().toInt()/100);
    friz.ispisi_na_gui(friz);
    }
}

void MainWindow::on_jedi_5_clicked()
{
    if(ui->vr_kol_5->text().toInt()>0){
    Hrana prva(ui->cena_5->text().toUInt(),ui->vr_5->text().toUInt(),ui->fj5_naziv->text());
    friz.uzmi_hranu(prva);
    ljub->add_sit(ui->vr_5->text().toInt()/100);
    friz.ispisi_na_gui(friz);
    }
}

void MainWindow::on_jedi_6_clicked()
{
    if(ui->vr_kol_6->text().toInt()>0){
    Hrana prva(ui->cena_6->text().toUInt(),ui->vr_6->text().toUInt(),ui->fj6_naziv->text());
    friz.uzmi_hranu(prva);
    ljub->add_sit(ui->vr_6->text().toInt()/100);
    friz.ispisi_na_gui(friz);
    }
}

void MainWindow::on_kupi_1_clicked()
{
    int cena=ui->cena_1->text().toInt();
    auto en_vr=ui->vr_e_1->text().toUInt();
    auto naziv=ui->fj1_naziv_2->text();
    Hrana prva(cena,en_vr,naziv);



    int trenutno=ljub->get_novac();

    if((trenutno-cena)>=0){
        friz.dodaj_hranu(prva);
        friz.ispisi_na_gui(friz);
        ljub->set_novac(trenutno-cena);
        ui->l_kol_novca->setText(QString:: number(ljub->get_novac()));
    }
    else{
        ljub->set_novac(trenutno);
        ui->l_kol_novca->setText(QString:: number(ljub->get_novac()));

    }

}

void MainWindow::on_kupi_2_clicked()
{
    int cena=ui->cena_2->text().toInt();
    auto en_vr=ui->vr_e_2->text().toUInt();
    auto naziv=ui->fj2_naziv_2->text();
    Hrana prva(cena,en_vr,naziv);



    int trenutno=ljub->get_novac();

    if((trenutno-cena)>=0){
        friz.dodaj_hranu(prva);
        friz.ispisi_na_gui(friz);
        ljub->set_novac(trenutno-cena);
        ui->l_kol_novca->setText(QString:: number(ljub->get_novac()));
    }
    else{
        ljub->set_novac(trenutno);
        ui->l_kol_novca->setText(QString:: number(ljub->get_novac()));

    }

}

void MainWindow::on_kupi_3_clicked()
{
    int cena=ui->cena_3->text().toInt();
    auto en_vr=ui->vr_e_3->text().toUInt();
    auto naziv=ui->fj3_naziv_2->text();
    Hrana prva(cena,en_vr,naziv);



    int trenutno=ljub->get_novac();

    if((trenutno-cena)>=0){
        friz.dodaj_hranu(prva);
        friz.ispisi_na_gui(friz);
        ljub->set_novac(trenutno-cena);
        ui->l_kol_novca->setText(QString:: number(ljub->get_novac()));
    }
    else{
        ljub->set_novac(trenutno);
        ui->l_kol_novca->setText(QString:: number(ljub->get_novac()));

    }
}

void MainWindow::on_kupi_4_clicked()
{
    int cena=ui->cena_4->text().toInt();
    auto en_vr=ui->vr_e_4->text().toUInt();
    auto naziv=ui->fj4_naziv_2->text();
    Hrana prva(cena,en_vr,naziv);



    int trenutno=ljub->get_novac();

    if((trenutno-cena)>=0){
        friz.dodaj_hranu(prva);
        friz.ispisi_na_gui(friz);
        ljub->set_novac(trenutno-cena);
        ui->l_kol_novca->setText(QString:: number(ljub->get_novac()));
    }
    else{
        ljub->set_novac(trenutno);
        ui->l_kol_novca->setText(QString:: number(ljub->get_novac()));

    }
}

void MainWindow::on_kupi_5_clicked()
{
    int cena=ui->cena_5->text().toInt();
    auto en_vr=ui->vr_e_5->text().toUInt();
    auto naziv=ui->fj5_naziv_2->text();
    Hrana prva(cena,en_vr,naziv);



    int trenutno=ljub->get_novac();

    if((trenutno-cena)>=0){
        friz.dodaj_hranu(prva);
        friz.ispisi_na_gui(friz);
        ljub->set_novac(trenutno-cena);
        ui->l_kol_novca->setText(QString:: number(ljub->get_novac()));
    }
    else{
        ljub->set_novac(trenutno);
        ui->l_kol_novca->setText(QString:: number(ljub->get_novac()));

    }
}

void MainWindow::on_kupi_6_clicked()
{
    int cena=ui->cena_6->text().toInt();
    auto en_vr=ui->vr_e_6->text().toUInt();
    auto naziv=ui->fj6_naziv_2->text();
    Hrana prva(cena,en_vr,naziv);



    int trenutno=ljub->get_novac();
    if((trenutno-cena)>=0){
        friz.dodaj_hranu(prva);
        friz.ispisi_na_gui(friz);
        ljub->set_novac(trenutno-cena);
        ui->l_kol_novca->setText(QString:: number(ljub->get_novac()));
    }
    else{
        ljub->set_novac(trenutno);
        ui->l_kol_novca->setText(QString:: number(ljub->get_novac()));

    }

}

void MainWindow::on_bt_igra1_ulaz_clicked() //pre igre deo <
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::bt_igra_1_clicked()
{
    Igrica1 *igra=new Igrica1(ui);
    igra->setParent(ui->widget);
    //u igri1 nazad kad se klikne
    connect(ui->pushButton_igra_1_nazad,SIGNAL(clicked(bool)),igra,SLOT(end_game()));
   // connect(igra,SIGNAL(nema_energije()),this,SLOT(on_pushButton_igra_1_clicked()));
    connect(igra,SIGNAL(end()),this,SLOT(uzmi_vrednosti_sa_bar()));
    ui->stackedWidget->setCurrentIndex(6);
}

void MainWindow::uzmi_vrednosti_sa_bar()
{
    ljub->set_novac(ui->l_kol_novca->text().toInt());
    ljub->set_sit(ui->SnagaBar->value());
    ljub->set_naspavanost(ui->naspavanostBar->value());
}

void MainWindow::iscrtaj_prodavnicu(QGraphicsScene * scena){
    prod.ispisi_na_gui(prod);
    auto vector=prod.vector_prod();
    double trenutni=HR_YP;
    double x=HR_XP-20;
    for(auto i: vector){
        i->setScale(KOEF);
        i->setPos(x,trenutni);
        scena->addItem(i);
        trenutni+=RAZ;
    }
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
    QGraphicsScene *sc_igra_1_ulaz=new QGraphicsScene();
    sc_igra_1_ulaz->setBackgroundBrush(QBrush(QColor(Qt::yellow)));
    ui->grView_tekst->setScene(sc_igra_1_ulaz);
    //provera pre pokretanja igre
    if(ui->naspavanostBar->value() < 20){
        QGraphicsTextItem * text=new QGraphicsTextItem("Nema dovoljno energije\nza pocetak igre!!\nLjubimac mora da spava!!");
        text->setDefaultTextColor(Qt::red);
        text->setFont(QFont("times",16));
        sc_igra_1_ulaz->addItem(text);
        ui->bt_igraj_1->setDisabled(true);        
    }else if(ui->SnagaBar->value() <20){
        QGraphicsTextItem * text_2=new QGraphicsTextItem("Nema dovoljno energije\nza pocetak igre!!\nLjubimac mora da jede!!");
        text_2->setDefaultTextColor(Qt::red);
        text_2->setFont(QFont("times",16));
        sc_igra_1_ulaz->addItem(text_2);
        ui->bt_igraj_1->setDisabled(true);
    }
    else{
        QGraphicsTextItem * text_1=new QGraphicsTextItem("Lavina krece!!!\nPomeraj se gore dole\nkako bi izbegao\ngrudve koje nadolaze!!!");
        text_1->setDefaultTextColor(Qt::red);
        text_1->setFont(QFont("times",16));
        sc_igra_1_ulaz->addItem(text_1);
        ui->bt_igraj_1->setDisabled(false);
    }
    ui->stackedWidget->setCurrentIndex(10);
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

void MainWindow::on_pushButton_igra_1_nazad_clicked() //u igri 1 <
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

void MainWindow::on_pushButton_spavaj_clicked()
{
   ljub_spava.spavaj();
}

void MainWindow::on_pushButton_kupanje_clicked()
{
    ljub_kupanje.kupanje();
    ljub->set_cist(ui->CistocaBar->value());
}

void MainWindow::on_pushButton_budjenje_clicked()
{
    ljub_spava.budjenje();
    ljub->set_naspavanost(ui->naspavanostBar->value());
}

void MainWindow::on_timer(int x)
{
   x = SEC- x;
   int min = x / 60;
   int sec = x % 60;

   ui->tajmer->setText(QString::number(min) + QString::fromStdString(":") + QString::number(sec));
}
/*
void MainWindow::povezi(Ljubimac *l)
{
}

void MainWindow::pokreni_vreme(Ljubimac *l)
{
}
*/
void MainWindow::Tajmer::run()
{
    while(1)
    {
        int pom = ljubimac->get_sec();
        QTime dieTime= QTime::currentTime().addSecs(1);
        while (QTime::currentTime() < dieTime);

        if(pom + 1 > SEC)
        {
            ljubimac->dec_sit();
            ljubimac->dec_naspavanost();
            ljubimac->dec_cist();
            ljubimac->set_sec(0);
        }
        else
            ljubimac->set_sec(pom+1);
    }
}
