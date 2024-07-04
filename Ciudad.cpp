#include "Ciudad.h"

Ciudad crearCiudad(int nroCiud, String Nombre)
{
    Ciudad c;
    c.NumeroCiudad = nroCiud;
    c.NombreCiudad = Nombre;

    return c;
}


int darNumeroCiudad (Ciudad c)
{
    return c.NumeroCiudad;
}

String darNombreCiudad (Ciudad c)
{
    return c.NombreCiudad;
}
