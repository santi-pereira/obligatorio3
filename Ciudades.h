#ifndef CIUDADES_H_INCLUDED
#define CIUDADES_H_INCLUDED
#include "Ciudad.h"

const int CANT = 20;

typedef struct {Ciudad arre[CANT];
                int tope;
                }Ciudades;


void iniciarTope (Ciudades &ad);

void agregarElementoAlPrincipio (Ciudades &ad, Ciudad elemento);

#endif // ARREGLOCONTOPE_H_INCLUDED
