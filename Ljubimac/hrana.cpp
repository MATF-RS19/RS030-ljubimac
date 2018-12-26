#include "hrana.h"

Hrana::Hrana(unsigned cena,unsigned en_vred,QString naziv)
    :m_cena(qMove(cena)),m_en_vred(qMove(en_vred)),m_naziv(qMove(naziv))
{

}

unsigned Hrana::cena() const
{
    return m_cena;
}

unsigned Hrana::en_vred() const
{
    return m_en_vred;
}

QString Hrana::naziv() const
{
    return m_naziv;
}

void Hrana::setCena(unsigned cena)
{
    m_cena=cena;
}

void Hrana::setEnVred(unsigned en_vred)
{
    m_en_vred=en_vred;
}

void Hrana::setNaziv(QString naziv)
{
    m_naziv=naziv;
}
