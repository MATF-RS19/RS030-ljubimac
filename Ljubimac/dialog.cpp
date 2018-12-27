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
    Ljubimac *l = new Ljubimac(0, "");

    TFJ ** niz = new TFJ*[1];
    niz[0] = l;
    igra->postavi_podatke(niz, 1);
    igra->postavi_ime(ui->lineLoad->text());

    igra->load();
    main = new MainWindow(l);
    main->povezi(l);
    main->pokreni_vreme(l);

    main->show();
    this->close();
}
void Dialog::on_new()
{
    QString ime = ui->lineIme->text();
    Ljubimac *l = new Ljubimac(100, ime);

    TFJ ** niz = new TFJ*[1];
    niz[0] = l;
    igra->postavi_podatke(niz, 1);
    igra->postavi_ime(ui->lineSave->text());
    main = new MainWindow(l);
    main->povezi(l);
    main->pokreni_vreme(l);

    main->show();
    this->close();
}
