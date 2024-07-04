#ifndef CIUDADES_H_INCLUDED
#define CIUDADES_H_INCLUDED
#include "Ciudad.h"
#include "Boolean.h"
#include "String.h"

#include "constantes.h"

typedef struct {
                Ciudad arre[CANT_CIUDADES];
                int tope;
            }Ciudades;

// Secuencia Crea una secuencia vacía.
void Crear (Ciudades &ad);

//Agrega un elemento de tipo T a la secuencia.
//Precondicion: Tiene que existir al menos una posicion libre en el arreglo.
void InsFront (Ciudades &ad, Ciudad elemento);

// Boolean Determina si la secuencia está vacía o no.
boolean EsVacia (Ciudades ad);

//Primero : Secuencia T  Devuelve el primer elemento de la secuencia.
//Precondición: la secuencia no es vacía.
Ciudad Primero (Ciudades ad);

//Resto : Secuencia  Secuencia Devuelve la secuencia sin su primer elemento.
//Precondición: la secuencia no es vacía
void Resto (Ciudades &ad);

// int Largo (Ciudades ad);
int Largo (Ciudades ad);

//Devuelve el elemento que ocupa la posición K de la secuencia.
//Precondición: El largo de la secuencia es mayor o igual a K
Ciudad Kesimo (Ciudades ad, int k);


//Devuelve true si el string ya pertenece al arreglo
boolean Existe(Ciudades ad, String s);

//devuelve true si no hay mas lugares libres para agregar elementos
boolean EstaLlena(Ciudades ad);

//Inserta un nuevo elementos al final del arreglo
//Precondicion: Tiene que existir al menos una posicion libre en el arreglo.
void InsBack (Ciudades &ad, String elemento);


//Listar número y nombre de cada una de las ciudades registradas hasta el momento en el sistema, ordenadas por número de ciudad de menor a mayor.
void Listar(Ciudades ad);


#endif // ARREGLOCONTOPE_H_INCLUDED
