#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "gamesln.h"
#include "frizider.h"
#include "prodavnica.h"
#include "ljubimac.h"
#include "ljubimac_spava.h"
#include "ljubimac_kupanje.h"
#include <QMainWindow>
#include <QThread>
namespace Ui {
class MainWindow;
}
class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(/*Ljubimac *ljub,*/ QWidget *parent = 0);

  //  void povezi(Ljubimac* l);
  //  void pokreni_vreme(Ljubimac *l);
    void iscrtaj_friz(QGraphicsScene * scena);
    void iscrtaj_prodavnicu(QGraphicsScene* scena);
    void postavi_igru(GameSLN *i){igra = i;}
    void pokreni_vreme();
    void save(){igra->save();}
    Frizider* fizider();
    ~MainWindow();
private slots:
    void on_pushButton_kup_2_clicked();

    void on_pushButton_kup_1_clicked();

    void on_pushButton_kuh_2_clicked();

    void on_pushButton_kuh_1_clicked();

    void on_pushButton_spav_2_clicked();

    void on_pushButton_spav_1_clicked();

    void on_pushButton_igraon_2_clicked();

    void on_pushButton_igraon_1_clicked();

    void on_pushButton_pro_clicked();

    void on_pushButton_fr_clicked();

    void on_pushButton_friz_nazad_clicked();

    void on_pushButton_prod_nazad_clicked();

    void on_pushButton_igra_1_clicked();

    void on_pushButton_igra_2_clicked();

    void on_pushButton_igra_3_clicked();

    void on_pushButton_igra_4_clicked();

    void on_pushButton_igra_1_nazad_clicked();

    void on_pushButton_igra_2_nazad_clicked();

    void on_pushButton_igra_3_nazad_clicked();

    void on_pushButton_igra_4_nazad_clicked();

    void on_pushButton_spavaj_clicked();

    void on_pushButton_kupanje_clicked();

    void on_pushButton_budjenje_clicked();

    void on_timer(int x);

    void on_jedi_1_clicked();

    void on_jedi_2_clicked();

    void on_jedi_3_clicked();

    void on_jedi_4_clicked();

    void on_jedi_5_clicked();

    void on_jedi_6_clicked();

    void on_kupi_1_clicked();

    void on_kupi_2_clicked();

    void on_kupi_3_clicked();

    void on_kupi_4_clicked();

    void on_kupi_5_clicked();

    void on_kupi_6_clicked();

    void on_bt_igra1_ulaz_clicked();

    void bt_igra_1_clicked();

    void uzmi_vrednosti_sa_bar();

private:
    Ui::MainWindow *ui;
    Frizider friz;
    Prodavnica prod;
    Ljubimac* ljub;
    Ljubimac_spava ljub_spava;
    Ljubimac_kupanje ljub_kupanje;
    GameSLN *igra;
    class Tajmer : public QThread
    {
    public:
        Ljubimac* ljubimac;
        Tajmer(Ljubimac* l = nullptr) : ljubimac(l){}
        void run();
    };
    Tajmer* tajmer = new Tajmer;
};

#endif // MAINWINDOW_H
