#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "gamesln.h"
#include <QMainWindow>
#include <QThread>
namespace Ui {
class MainWindow;
}
class Ljubimac;
class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);

    void povezi(Ljubimac* l);
    void pokreni_vreme(Ljubimac *l);


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

    void on_timer(int x);


private:
    Ui::MainWindow *ui;

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
