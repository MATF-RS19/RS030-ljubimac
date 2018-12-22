#include "hamburger.h"

hamburger::hamburger(unsigned cena=320, unsigned en_vred=502, QString naziv="Hamburger"):
    Hrana(qMove(cena), qMove(en_vred), qMove(naziv))
{

}
