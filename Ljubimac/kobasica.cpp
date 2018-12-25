#include "kobasica.h"

kobasica::kobasica(unsigned cena, unsigned en_vred, QString naziv):
    Hrana(qMove(cena), qMove(en_vred), qMove(naziv))
{
    setPixmap(QPixmap(":images/kobasica.png"));
}
