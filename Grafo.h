#ifndef GRAFO_H_INCLUDED
#define GRAFO_H_INCLUDED

#include "Boolean.h"
#include "constantes.h"



typedef int Grafo[CANT_CIUDADES][CANT_CIUDADES];


/*Operaciones Primitivas*/
void Crear (Grafo &g);


//Crear:   Grafo Crea un grafo vacío.
void Crear (Grafo &g);

//InsertarVertice : Grafo x V  Grafo Inserta el nuevo vértice al grafo. Precondición: el vértice no pertenece al grafo.
void InsertarVertice (Grafo &g, int vertice);
//Cómo insertar un vértice si ya sabemos de antemano cuantos vértices hay y sus posiciones??

//InsertarArista : Grafo x A  Grafo Inserta la nueva arista al grafo. Precondición: la arista no pertenece al grafo.
void InsertarArista (Grafo &g, int fila, int columna);

//PerteneceVertice : Grafo x V  Boolean Determina si en el grafo existe el vértice especificado.
boolean PerteneceVertice(Grafo g, int vertice);

//PerteneceArista : Grafo x A  Boolean Determina si en el grafo existe la arista especificada.
boolean PerteneceArista(Grafo g, int fila, int columna);

//GradoVertice : Grafo x V  Entero Devuelve el grado del vértice especificado. Precondición: el vértice pertenece al grafo
int GradoVertice (Grafo g, int vertice);

boolean buscarRuta (Grafo g, int verticeA, int verticeB);
void DFS (Grafo g, int actual, int verticeBuscar, boolean visitado[CANT_CIUDADES]);


#endif // GRAFO_H_INCLUDED
