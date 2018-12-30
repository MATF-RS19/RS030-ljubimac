#include <QFile>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonDocument>
#include <iostream>
#include <algorithm>
#include <QDebug>
#include <string>
#include "gamesln.h"

GameSLN::GameSLN(QString ime, TFJ** p, int n) : ime_fajla(ime), podaci(p), m_n(n)
{
}

bool GameSLN::save()const
{
    QFile saveFile(ime_fajla);

    if(!saveFile.open(QIODevice::WriteOnly))
    {
        qWarning("Couldn't open save file");
        qDebug() << ime_fajla;
        return false;
    }

    QJsonObject json;
    for(int i = 0; i < m_n; i++)
    {
        std::string pom =typeid(*podaci[i]).name();
        pom = std::string(find_if(pom.begin(), pom.end(),isalpha), pom.end());
        json[QString::fromStdString(pom)] = podaci[i]->toJson();
    }


    QJsonDocument saveData(json);
    saveFile.write(saveData.toJson());
    saveFile.close();

    return true;
}

void GameSLN::postavi_ime(QString ime)
{
    ime_fajla = ime;
}

void GameSLN::postavi_podatke(TFJ **podaci, int n)
{
    this->podaci = podaci;
    m_n = n;
}

GameSLN::~GameSLN()
{
    for(int i = 0; i < m_n; i++){delete podaci[i];}
    delete [] podaci;
}

bool GameSLN::load()
{

    QFile saveFile(ime_fajla);
    if(!saveFile.open(QIODevice::ReadOnly))
    {
        qWarning("Couldn't open save file");
        return false;
    }

    QJsonObject json;

    QByteArray saveData = saveFile.readAll();
    json = QJsonDocument::fromJson(saveData).object();

    for(int i = 0; i < m_n; i++)
    {
         std::string pom =typeid(*podaci[i]).name();
         pom = std::string(find_if(pom.begin(), pom.end(),isalpha), pom.end());
         podaci[i]->fromJson(json[QString::fromStdString(pom)].toObject());
    }
    saveFile.close();
    return true;
}




