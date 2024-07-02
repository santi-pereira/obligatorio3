#ifndef GRAFO_H_INCLUDED
#define GRAFO_H_INCLUDED

#include "Boolean.h"

const int CANT_CIUD = 5;

typedef int Grafo[CANT_CIUD][CANT_CIUD];

void crearGrafo (Grafo &g);

void agregarAristaNoDirigido (Grafo &g, int fila, int columna);

void recorrerGrafo(Grafo g);

void DFS (Grafo g, int actual, boolean visitado[CANT_CIUD]);



#endif // GRAFO_H_INCLUDED
