#ifndef LJUBIMAC_H
#define LJUBIMAC_H
#include "tfj.h"
#include <QString>
#include <iostream>
class Ljubimac : public TFJ
{
    int m_sit;
    QString m_ime;
public:
    Ljubimac(int sit = 0, QString ime = QString::fromStdString(""));
    QJsonObject toJson() const override;
    void fromJson(const QJsonObject& json)override;
    friend std::ostream& operator<<(std::ostream& out, const Ljubimac& l)
    {
        out << l.m_ime.toStdString() << " " << l.m_sit;

        return out;
    }
};

#endif // LJUBIMAC_H
