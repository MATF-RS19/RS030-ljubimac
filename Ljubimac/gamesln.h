#ifndef GAMESLN_H
#define GAMESLN_H
#include "tfj.h"

/*
    Klasa za sejvovanje, loudovanje
    GameSLN - GameSaveLoadNew
*/
#include <string>
class GameSLN
{
    QString ime_fajla;
    TFJ** podaci = nullptr;
    int m_n = 0;
    void encrypt(QByteArray& array,  std::string key)const;
    void decrypt(QByteArray& array, std::string key)const;
public:
    GameSLN(QString ime, TFJ** p, int n);
    bool load();
    bool save()const;

    void postavi_ime(QString ime);
    void postavi_podatke(TFJ** podaci, int n);



    ~GameSLN();
};

#endif // GAMESLN_H
