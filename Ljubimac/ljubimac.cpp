#include <ctime>
#include <QDebug>
#include "ljubimac.h"
#include "vreme.h"
Ljubimac::Ljubimac(int sit, QString ime) : m_sit(sit), m_ime(ime){
}
QJsonObject Ljubimac::toJson()const
{
    QJsonObject json;
    json["m_sit"] = m_sit;
    json["m_ime"] = m_ime;
    json["m_vreme"] = (int)time(0) - m_sec;
    json["m_novac"] = m_novac;
    return json;
}
void Ljubimac::fromJson(const QJsonObject &json)
{
    m_sit = json["m_sit"].toInt();
    m_ime = json["m_ime"].toString();
    m_novac = json["m_novac"].toInt();
    int pom = json["m_vreme"].toInt();
    pom = time(0) - pom;
    m_sec = pom % SEC;
    pom /= SEC;
    m_sit -= pom;
    emit value_changed(m_sit);
}

void Ljubimac::set_sit(int x)
{
    m_sit = x > 100 ? 100 : x;
    emit value_changed(m_sit);
}
