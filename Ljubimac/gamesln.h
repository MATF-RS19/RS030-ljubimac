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
    int m_n;
public:
    GameSLN(QString ime, TFJ** p, int n);
    bool load();
    bool save()const;
};

#endif // GAMESLN_H
