#include "pica.h"

pica::pica(unsigned cena=120, unsigned en_vred=266, QString naziv="Pica"):
    Hrana(qMove(cena), qMove(en_vred), qMove(naziv))
{

}
