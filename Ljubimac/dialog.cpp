#include <QString>


#include "dialog.h"
#include "ui_dialog.h"
#include "ljubimac.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(ui->loadPB, SIGNAL(clicked(bool)), this, SLOT(on_load()));
    connect(ui->newPB, SIGNAL(clicked(bool)), this, SLOT(on_new()));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_load()
{
    Ljubimac *l = Ljubimac::singleton();
    TFJ ** niz = new TFJ*[2];
    niz[0] = l;
    niz[1] = main->fizider();
    igra->postavi_podatke(niz, 2);
    igra->postavi_ime(ui->lineLoad->text());

    igra->load();
   // main = new MainWindow();
    //main->povezi(l);
    main->postavi_igru(igra);
    main->pokreni_vreme();
    main->show();
    this->close();
}
void Dialog::on_new()
{
    QString ime = ui->lineIme->text();

    Ljubimac *l = Ljubimac::singleton();
    l->set_sit(100);
    l->set_ime(ime);
    TFJ ** niz = new TFJ*[2];
    niz[0] = l;
    niz[1] = main->fizider();
    igra->postavi_podatke(niz, 2);
    igra->postavi_ime(ui->lineSave->text());
    //main = new MainWindow();
    //main->povezi(l);
    //main->pokreni_vreme(l);
    main->postavi_igru(igra);
    main->pokreni_vreme();
    main->show();
    this->close();
}
