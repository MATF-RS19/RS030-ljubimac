#include "ljubimac.h"

Ljubimac::Ljubimac(int sit, QString ime) : m_sit(sit), m_ime(ime){}
QJsonObject Ljubimac::toJson()const
{
    QJsonObject json;
    json["m_sit"] = m_sit;
    json["m_ime"] = m_ime;
    return json;
}
void Ljubimac::fromJson(const QJsonObject &json)
{
    m_sit = json["m_sit"].toInt();
    m_ime = json["m_ime"].toString();
}
