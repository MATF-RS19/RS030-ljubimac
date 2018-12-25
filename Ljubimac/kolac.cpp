#include "kolac.h"

kolac::kolac(unsigned cena, unsigned en_vred, QString naziv):
    Hrana(qMove(cena), qMove(en_vred), qMove(naziv))
{
    setPixmap(QPixmap(":images/kolac.png"));
}
