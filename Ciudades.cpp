#include "Ciudades.h"


void iniciarTope (Ciudades &ad) {
ad.tope = 0;
}

void agregarElementoAlPrincipio (Ciudades &ad, Ciudad elemento) {
ad.arre[ad.tope] = elemento;
ad.tope++;
}
