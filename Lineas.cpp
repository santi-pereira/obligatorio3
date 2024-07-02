#include "Lineas.h"

void Make (Lineas &a) {

a = NULL;

}

boolean Vacio (Lineas a) {
boolean es;

if (a == NULL) {
    es = TRUE;
}
else {
    es = FALSE;
}
return es;
}


void Insert (Lineas &a, String valor) {

if (a == NULL) {
    a = new nodo;
    a->info = valor;
    a->hizq = NULL;
    a->hder = NULL;
    }
    else {
        if (valor < a->info) {
            Insert (a->hizq, valor);
        }
        else {
            Insert (a->hder, valor);
        }
    }

}


boolean Member (Lineas a, String valor) {
if (a == NULL) {
    return FALSE;
}
else {
    if (valor == a->info) {
        return TRUE;
    }
    else {
            if (valor < a->info) {
                return Member (a->hizq, valor);
            }
            else {
                return Member (a->hder, valor);
            }
    }
}


}


String Find (Lineas a, String valor) {

    if (a!=NULL){
        if (a->info==valor) {
            return a->info;
        }
        else {
                if (valor < a->info) {
                    return Find(a->hizq, valor);
            }
            else {
                return Find(a->hder, valor);
            }
        }
    }
}




