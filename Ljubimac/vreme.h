#ifndef VREME_H
#define VREME_H

#include <ctime>

#include "tfj.h"

/*
    ova klasa ne treba.......
*/
class Vreme : public TFJ
{
    int m_sec;
public:
    Vreme(int sec = 0) :m_sec(sec){}
    int get_sec()const{return m_sec;}
    QJsonObject toJson()const
    {
        QJsonObject json;
        json["m_sec"] = m_sec;
        return json;
    }
    void fromJson(const QJsonObject& json)
    {
        m_sec = json["m_sec"].toInt();
    }
};

#endif // VREME_H
