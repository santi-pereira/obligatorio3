#include "Lineas.h"

void Make (Lineas &a)
{

    a = NULL;

}

boolean Vacio (Lineas a)
{
    boolean es;

    if (a == NULL)
    {
        es = TRUE;
    }
    else
    {
        es = FALSE;
    }
    return es;
}


void Insert (Lineas &a, Linea valor)
{

    if (a == NULL)
    {
        a = new nodo;
        a->info = valor;
        a->hizq = NULL;
        a->hder = NULL;
    }
    else
    {
        if (darCodigoLinea(valor) < darCodigoLinea(a->info))
        {
            Insert (a->hizq, valor);
        }
        else
        {
            Insert (a->hder, valor);
        }
    }

}


boolean Member (Lineas a, Linea valor)
{
    if (a == NULL)
    {
        return FALSE;
    }
    else
    {
        if (darCodigoLinea(valor) == darCodigoLinea(a->info))
        {
            return TRUE;
        }
        else
        {
            if (darCodigoLinea(valor) < darCodigoLinea(a->info))
            {
                return Member (a->hizq, valor);
            }
            else
            {
                return Member (a->hder, valor);
            }
        }
    }


}


Linea Find (Lineas a, Linea valor)
{

    if (a!=NULL)
    {
        if (darCodigoLinea(a->info)==darCodigoLinea(valor))
        {
            return a->info;
        }
        else
        {
            if (darCodigoLinea(valor) < darCodigoLinea(a->info))
            {
                return Find(a->hizq, valor);
            }
            else
            {
                return Find(a->hder, valor);
            }
        }
    }
}

void Modify (Lineas &a, Linea viejo, Linea nuevo)
{

    if (a!=NULL)
    {
        if (streq(darCodigoLinea(a->info),darCodigoLinea(viejo))== TRUE)
        {
            a->info = nuevo;
        }
        else
        {
            if (esMenor(darCodigoLinea(viejo), darCodigoLinea(a->info)))
            {
                Modify(a->hizq, viejo, nuevo);
            }
            else
            {
                /*String es Mayor, o sea, viejo es mayor que a->info*/
                Modify (a->hder, viejo, nuevo);
            }
        }
    }

}

void Delete (Lineas &a, Linea valor)
{

    Lineas aux;

    if (streq(darCodigoLinea(a->info),darCodigoLinea(valor))== TRUE)
    {
        if (a -> hder == NULL)
        {
            aux = a -> hizq;
            delete a;
            a = aux;
        }
        else
        {
            if (a -> hizq == NULL)
            {
                aux = a -> hder;
                delete a;
                a = aux;
            }
            else
            {
                a -> info = Minimo (a -> hder);
                Borrar_Minimo (a -> hder);
            }
        }
    }
    else
    {
        if (esMenor(darCodigoLinea(valor),darCodigoLinea(a->info)))
        {
            Delete (a -> hizq, valor);
        }
        else
        {
            Delete (a -> hder, valor);
        }
    }


}

void Borrar_Minimo (Lineas &a)
{
    Lineas aux;
    if (a -> hizq == NULL)
    {
        aux = a -> hder;
        delete a;
        a = aux;
    }
    else
    {
        Borrar_Minimo (a -> hizq);
    }
}

Linea Minimo (Lineas a)
{
    while (a -> hizq != NULL)
    {
        a = a -> hizq;
    }
    return (a->info);
}
