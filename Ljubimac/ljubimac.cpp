#include <ctime>
#include <QDebug>
#include "ljubimac.h"
#include "vreme.h"
Ljubimac* Ljubimac::unique = nullptr;
Ljubimac::Ljubimac(int sit, QString ime) : m_sit(sit), m_ime(ime){
}

Ljubimac *Ljubimac::singleton()
{
    if(unique)return unique;
    unique = new Ljubimac();
    return unique;
}
QJsonObject Ljubimac::toJson()const
{
    QJsonObject json;
    json["m_sit"] = m_sit;
    json["m_ime"] = m_ime;
    json["m_vreme"] = (int)time(0) - m_sec;
    json["m_novac"] = m_novac;
    json["m_naspavan"] = m_naspavan;
    json["m_cist"] = m_cist;
    return json;
}
void Ljubimac::fromJson(const QJsonObject &json)
{
    m_sit = json["m_sit"].toInt();
    m_ime = json["m_ime"].toString();
    m_novac = json["m_novac"].toInt();
    m_cist = json["m_cist"].toInt();
    m_naspavan = json["m_naspavan"].toInt();
    int pom = json["m_vreme"].toInt();
    pom = time(0) - pom;
    m_sec = pom % SEC;
    pom /= SEC;
    m_sit -= pom;
    emit value_changed(m_sit);

    m_naspavan -= pom;
    emit value_changed_naspavanost(m_naspavan);
    m_cist -= pom;
    emit value_changed_cist(m_cist);
}

void Ljubimac::set_sit(int x)
{
    m_sit = x > 100 ? 100 : x < 0 ? 0:x;
    emit value_changed(m_sit);
}
