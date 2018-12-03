#include <QFile>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonDocument>
#include <iostream>
#include <algorithm>
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
        return false;
    }

    QJsonObject json;
    for(int i = 0; i < m_n; i++)
    {
        std::string pom =typeid(*podaci[i]).name();
        pom = std::string(find_if(pom.begin(), pom.end(),isalpha), pom.end());
        json[QString::fromStdString(pom)] = podaci[i]->toJson();
        std::cout << typeid(*podaci[i]).name() << std::endl;
    }
       QJsonDocument saveData(json);

    saveFile.write(saveData.toJson());
    saveFile.close();

    return true;
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




