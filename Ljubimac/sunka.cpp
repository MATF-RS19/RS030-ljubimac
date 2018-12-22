#include "sunka.h"

sunka::sunka(unsigned cena=432, unsigned en_vred=511, QString naziv="Sunka"):
    Hrana(qMove(cena), qMove(en_vred), qMove(naziv))
{

}
