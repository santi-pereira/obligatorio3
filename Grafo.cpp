#include "Grafo.h"

void crearGrafo (Grafo &g) {
    int i, j;

    for (i = 0; i <CANT_CIUD; i++) {
        for (j = 0; j <CANT_CIUD; j++) {
            g[i][j] = 0;
        }
    }

}

void agregarAristaNoDirigido (Grafo &g, int fila, int columna) {

g[fila][columna] = 1;
g[columna][fila] = 1;

}


void DFS (Grafo g, int actual, boolean visitado[CANT_CIUD]) {
int j;

visitado[actual] = TRUE;

for (j = 0; j<CANT_CIUD; j++) {

    if (g[actual][j] == 1) {
        if (!visitado[j]) {
            DFS (g, j, visitado);
        }
    }
}

}





