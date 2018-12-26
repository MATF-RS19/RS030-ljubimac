#include <ctime>
#include "ljubimac.h"

Ljubimac::Ljubimac(int sit, QString ime) : m_sit(sit), m_ime(ime){}
QJsonObject Ljubimac::toJson()const
{
    QJsonObject json;
    json["m_sit"] = m_sit;
    json["m_ime"] = m_ime;
    json["m_vreme"] = (int)time(0) - m_sec;
    return json;
}
void Ljubimac::fromJson(const QJsonObject &json)
{
    m_sit = json["m_sit"].toInt();
    m_ime = json["m_ime"].toString();
    int pom = json["m_vreme"].toInt();
    pom = time(0) - pom;
    m_sec = pom % 1800;
    pom /= 1800;
    m_sit -= pom;
    emit value_changed(m_sit);
}

void Ljubimac::set_sit(int x)
{
    m_sit = x;
    emit value_changed(x);
}
