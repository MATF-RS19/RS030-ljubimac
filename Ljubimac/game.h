#ifndef GAME_H
#define GAME_H
#include <QGraphicsView>
#include <QTimer>
class QPushButton;
class QLabel;
class Ljubimac;
#include "player.h"
class Game : public QGraphicsView
{
    Q_OBJECT
private:
    QTimer timer;
    Ljubimac* l;
public slots:
    void changeTime();
    void load();
    void setScore(int x);
public:
    Game(QWidget* parent = 0);
    Player* player = nullptr;
    QGraphicsScene* scene;
    QGraphicsRectItem **itemi;
    QPushButton* dugme;
    QLabel* vreme;
    QLabel* skor;
    static bool exist;
    ~Game();
    void ugasi();

    // QWidget interface
protected:
    void closeEvent(QCloseEvent *);
};

#endif // GAME_H
