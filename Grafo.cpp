#include "Grafo.h"


void Crear (Grafo &g)
{
    int i, j;

    for (i = 0; i <CANT_CIUDADES; i++)
    {
        for (j = 0; j <CANT_CIUDADES; j++)
        {
            g[i][j] = 0;
        }
    }

}

void agregarAristaNoDirigido (Grafo &g, int fila, int columna)
{

    g[fila][columna] = 1;
    g[columna][fila] = 1;
}
void InsertarVertice (Grafo &g, int vertice)
{



}

void InsertarArista (Grafo &g, int fila, int columna)
{

    g[fila][columna]=1;
    if (fila != columna)
    {
        g[columna][fila]=1;
    }

}

boolean PerteneceVertice(Grafo g, int vertice)
{
    boolean pertenece = FALSE;
    int i=0, j;

    do
    {
        j=0;
        do
        {
            if (i == vertice || j == vertice)
            {
                pertenece = TRUE;
            }
            else
            {
                j++;
            }

        }
        while (j <CANT_CIUDADES && !pertenece);
        i++;
    }
    while (i <CANT_CIUDADES && !pertenece);
    return pertenece;
}

boolean PerteneceArista(Grafo g, int fila, int columna)
{
    boolean pertenece = FALSE;

    if (g[fila][columna] == 1)
    {
        pertenece = TRUE;
    }
    return pertenece;

}

int GradoVertice (Grafo g, int vertice)
{

    int cont = 0;

    for (int j=0; j<CANT_CIUDADES ; j++)
    {
        if (g[vertice][j]==1)
        {
            cont++;
        }
    }
    if (g[vertice][vertice]==1)
    {
        cont++;
    }
    return cont;

}

boolean buscarRuta (Grafo g, int verticeA, int verticeB)
{
    boolean visitados[CANT_CIUDADES];

    for(int i = 0; i<CANT_CIUDADES; i++)
    {
        visitados[i] = FALSE;
    }

    DFS(g, verticeA, verticeB, visitados);

    return visitados[verticeB];
}

void DFS (Grafo g, int actual, int verticeBuscar, boolean visitado[CANT_CIUDADES])
{
    int j;

    visitado[actual] = TRUE;

    if(actual!=verticeBuscar)
    {
        for (j = 0; j<CANT_CIUDADES; j++)
        {

            if (g[actual][j] == 1)
            {
                if (!visitado[j])
                {
                    DFS (g, j, verticeBuscar, visitado);
                }
            }
        }
    }

}





