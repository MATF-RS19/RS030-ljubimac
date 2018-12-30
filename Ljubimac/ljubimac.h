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
    int m_novac=2000;
    int m_cist = 100;
    int m_naspavan = 100;
    static Ljubimac* unique;
    Ljubimac(int sit = 0, QString ime = QString::fromStdString(""));
public:
    static Ljubimac* singleton();
    QJsonObject toJson() const override;
    void fromJson(const QJsonObject& json)override;
    friend std::ostream& operator<<(std::ostream& out, const Ljubimac& l)
    {
        out << l.m_ime.toStdString() << " " << l.m_sit;

        return out;
    }
    //metod koji se poziva kad se klikne na jedi
    void jedi(const Hrana & jelo);
    void add_sit(int x){set_sit(x+m_sit);}
    void set_sit(int x);
    void dec_sit(){m_sit--;emit value_changed(m_sit);}
    int get_sec(){return m_sec;}
    void set_sec(int x){m_sec = x;emit sec_value_changed(m_sec);}
    int get_sit(){return m_sit;}
    QString get_ime(){return m_ime;}
    unsigned get_novac(){return m_novac;}
    void set_novac(unsigned cena){ m_novac=cena;}
    void set_ime(QString ime){m_ime = ime;}
    void set_naspavanost(int x){m_naspavan = x > 100 ? 100 : x < 0 ? 0 : x;emit(value_changed_naspavanost(m_naspavan));}
    int get_naspavanost()const{return m_naspavan;}
    void set_cist(int x){m_cist = x > 100 ? 100 : x < 0 ? 0 : x;emit(value_changed_cist(m_cist));}
    int get_cist()const{return m_cist;}

    void add_cist(int x){set_cist(x+m_cist);}
    void add_naspavanost(int x){set_naspavanost(x+m_naspavan);}
    void dec_cist(){set_cist(m_cist-1);}
    void dec_naspavanost(){set_naspavanost(m_naspavan-1);}
signals:
    void value_changed(int x);
    void value_changed_cist(int x);
    void value_changed_naspavanost(int x);
    void sec_value_changed(int x);
};


#endif // LJUBIMAC_H
