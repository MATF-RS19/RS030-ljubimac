#ifndef LJUBIMAC_H
#define LJUBIMAC_H
#include <QString>
#include <iostream>
#include <QObject>
#include "tfj.h"
#include "hrana.h"

class Ljubimac : public QObject, public TFJ
{
    Q_OBJECT    
    int m_sit;
    QString m_ime;
    int m_sec = 0;
    unsigned m_novac=2000;
public:
    Ljubimac(int sit = 0, QString ime = QString::fromStdString(""));

    QJsonObject toJson() const override;
    void fromJson(const QJsonObject& json)override;

    friend std::ostream& operator<<(std::ostream& out, const Ljubimac& l)
    {
        out << l.m_ime.toStdString() << " " << l.m_sit;

        return out;
    }

    //metod koji se poziva kad se klikne na jedi
    void jedi(const Hrana & jelo);

    void set_sit(int x);
    void dec_sit(){m_sit--;emit value_changed(m_sit);}
    int get_sec(){return m_sec;}
    void set_sec(int x){m_sec = x;emit sec_value_changed(m_sec);}
    int get_sit(){return m_sit;}
    QString get_ime(){return m_ime;}
    unsigned get_novac(){return m_novac;}
    void set_novac(unsigned cena){ m_novac=cena;}//ovde a mozda zato sto sam stavila gore da bude 2000, mozda treba neki konstruktor pa da se tu incijalizuje
signals:
    void value_changed(int x);
    void sec_value_changed(int x);
};

#endif // LJUBIMAC_H
