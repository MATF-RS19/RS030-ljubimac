#include "sladoled.h"

sladoled::sladoled(unsigned cena, unsigned en_vred, QString naziv):
    Hrana(qMove(cena), qMove(en_vred), qMove(naziv))
{

}
