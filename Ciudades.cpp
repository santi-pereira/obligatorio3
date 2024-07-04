#include "Ciudades.h"


void Crear (Ciudades &ad)
{
    ad.tope = 0;
}

void InsFront (Ciudades &ad, Ciudad elemento)
{
    ad.arre[ad.tope] = elemento;
    ad.tope++;
}

boolean EsVacia (Ciudades ad)
{
    if (ad.tope == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

Ciudad Primero (Ciudades ad)
{
    return ad.arre[0];
}

void Resto (Ciudades &ad)
{

    ad.arre[0] = ad.arre[ad.tope-1];
    ad.tope--;

}

int Largo (Ciudades ad)
{
    return ad.tope;

}

Ciudad Kesimo (Ciudades ad, int k)
{
    return ad.arre[k];
}


boolean Existe(Ciudades ad, String s)
{
    boolean encontre = FALSE;
    int i = 0;

    while(encontre == FALSE && i<ad.tope)
    {
        if(CompararStrings(darNombreCiudad(ad.arre[i]), s) == TRUE)
        {
                encontre = TRUE;
        }
        i++;
    }

    return encontre;
}

boolean EstaLlena(Ciudades ad)
{
    if (ad.tope == CANT_CIUDADES-1)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}



void InsBack (Ciudades &ad, String elemento)
{
    String aux;
    strcrear(aux);
    strcop(aux, elemento);

    ad.arre[ad.tope] = crearCiudad(ad.tope, aux);
    ad.tope = ad.tope+1;
}


void Listar(Ciudades ad)
{
    for(int i = 0; i<ad.tope; i++)
    {
        printf("%d - ", darNumeroCiudad(ad.arre[i]));
        print(darNombreCiudad(ad.arre[i]));
        printf("\n");
    }
}



