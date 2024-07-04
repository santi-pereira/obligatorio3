#ifndef LINEA_H_INCLUDED
#define LINEA_H_INCLUDED
#include "Paradas.h"

typedef struct {
                String CodigoLinea;
                int CantidadParadas;
                Paradas Paradas;
                } Linea;

String darCodigoLinea (Linea l);

int darCantidadParadas (Linea l);

Paradas darParadas (Linea l);

#endif // LINEA_H_INCLUDED
