#include "kolac.h"

kolac::kolac(unsigned cena=150, unsigned en_vred=438, QString naziv="Kolac"):
    Hrana(qMove(cena), qMove(en_vred), qMove(naziv))
{

}
