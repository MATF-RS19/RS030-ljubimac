#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "mainwindow.h"
#include "gamesln.h"
namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT
    MainWindow *main;
    GameSLN *igra;
public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    void postavi_main(MainWindow* w){main = w;}
    void postavi_game(GameSLN* l){igra = l;}
private slots:
    void on_load();
    void on_new_game();
private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
