#include "sladoled.h"

sladoled::sladoled(unsigned cena=90, unsigned en_vred=216, QString naziv="Sladoled"):
    Hrana(qMove(cena), qMove(en_vred), qMove(naziv))
{

}
