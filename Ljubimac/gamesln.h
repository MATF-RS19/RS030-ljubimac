#ifndef GAMESLN_H
#define GAMESLN_H
#include "tfj.h"

/*
    Klasa za sejvovanje, loudovanje
    GameSLN - GameSaveLoadNew
*/
class GameSLN
{
    QString ime_fajla;
    TFJ** podaci = nullptr;
    int m_n = 0;
public:
    GameSLN(QString ime, TFJ** p, int n);
    bool load();
    bool save()const;

    void postavi_ime(QString ime);
    void postavi_podatke(TFJ** podaci, int n);



    ~GameSLN();
};

#endif // GAMESLN_H
