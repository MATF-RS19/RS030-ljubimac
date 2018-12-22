#include "kobasica.h"

kobasica::kobasica(unsigned cena=265, unsigned en_vred=321, QString naziv="Kobasica"):
    Hrana(qMove(cena), qMove(en_vred), qMove(naziv))
{

}
