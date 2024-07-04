#ifndef PARADAS_H_INCLUDED
#define PARADAS_H_INCLUDED
#include "String.h"

typedef struct nodoL {  String info;
                        nodoL *sig;
                        } Nodo;

typedef struct { Nodo * prim;
                Nodo * ult;
                } Paradas;


 /*Primitvas*/

 void Make (Paradas &L);

 void Insback (Paradas &L, String e);

 boolean Empty (Paradas L);

 String Front (Paradas L);

 void RemFront (Paradas &L);

 void Desplegar(Paradas L);

 /*Verificar todas las primitivas de la secuenciaP*/


#endif // PARADAS_H_INCLUDED
