#ifndef LINEAS_H_INCLUDED
#define LINEAS_H_INCLUDED
#include "Boolean.h"
#include "Linea.h"

typedef struct nodoA {
                        String info;
                        nodoA *hizq;
                        nodoA *hder;
                        } nodo;

typedef nodo *Lineas;


// Operaciones básicas:

//Crear un ABB
void Make (Lineas &a);

// Saber si el ABB está vacío
boolean Vacio (Lineas a);

void Insert (Lineas &a, String valor);

boolean Member (Lineas a, String valor);

String Find (Lineas a, String valor);


#endif // LINEAS_H_INCLUDED
