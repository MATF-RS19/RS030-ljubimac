#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
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

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
