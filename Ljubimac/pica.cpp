#include "pica.h"

pica::pica(unsigned cena, unsigned en_vred, QString naziv):
    Hrana(qMove(cena), qMove(en_vred), qMove(naziv))
{

}
