#include <stdio.h>
#include "Ciudades.h"
#include "Grafo.h"

void imprimirMenu()
{
    printf("*********** MENU PRINCIPAL ***********");
    printf("\n\n\n");
    printf("1 - Registrar una ciudad. \n");
    printf("2 - Listar ciudades. \n");
    printf("3 - Registrar nuevo tramo. \n");
    printf("4 - Verificar si existe el un tramo. \n");
    printf("5 - Agregar nueva linea. \n");
    printf("6 - Listar datos de todas las lineas. \n");
    printf("7 - Agregar parada en una linea. \n");
    printf("8 - Listar paradas de una linea. \n");
    printf("\n\n\n");
    printf("0 - Salir. \n");
    printf("\n\n");
    printf("Opcion elegida: ");
}

void Opcion1(Ciudades &ciud)
{

    Ciudades c;
    String nomAux;
    strcrear(nomAux);

    printf("Ingrese el nombre de una ciudad: ");
    scan(nomAux);


    if(EstaLlena(c) == FALSE)
    {

        if(Existe(ciud, nomAux) == FALSE)
        {
            InsBack(ciud, nomAux);
            printf("Se agrega la ciudad correctamente. \n\n");
        }
        else
        {
            printf("El nombre de la ciudad ya esta registrado.\n\n");
        }
    }
    else
    {
        printf("No existen mas lugares libres para agregar ciudades.\n\n");
    }

    strdestruir(nomAux);
}

void Opcion2(Ciudades c)
{
    Listar(c);
}

void Opcion3(Ciudades c, Grafo &graf)
{

    int ciudad1, ciudad2;

    printf("Ingrese el codigo de la ciudad 1: ");
    scanf("%d", &ciudad1);

    if(ciudad1>=0)
    {

        if(ciudad1<Largo(c))
        {
            printf("Ingrese el codigo de la ciudad 2: ");
            scanf("%d", &ciudad2);

            if(ciudad2>=0)
            {

                if(ciudad2<Largo(c))
                {

                    if(ciudad1 != ciudad2)
                    {
                        if(PerteneceArista(graf, ciudad1, ciudad2) == FALSE)
                        {
                             InsertarArista(graf, ciudad1 ,ciudad2);
                             printf("Se creo el tramo correctamente.\n");
                        }else
                        {
                            printf("Ya existe una ruta que une las ciudades. \n");
                        }

                    }else
                    {
                        printf("Las ciudades no pueden ser iguales.\n");
                    }


                }
                else
                {
                    printf("El codigo de la ciudad ingresado excede las ciudades registradas.\n");
                }
            }
            else
            {
                printf("El codigo de la ciudad ingresada no es valida.\n");
            }
        }
        else
        {
            printf("El codigo de la ciudad ingresado excede las ciudades registradas.\n");
        }
    }
    else
    {
        printf("El codigo de la ciudad ingresada no es valida.\n");
    }
}

void Opcion4(Ciudades c, Grafo graf)
{
    int ciudad1, ciudad2;

    printf("Ingrese el codigo de la ciudad 1: ");
    scanf("%d", &ciudad1);

    if(ciudad1>=0)
    {

        if(ciudad1<Largo(c))
        {
            printf("Ingrese el codigo de la ciudad 2: ");
            scanf("%d", &ciudad2);

            if(ciudad2>=0)
            {

                if(ciudad2<Largo(c))
                {
                    if(ciudad1 != ciudad2)
                    {
                        if(buscarRuta(graf, ciudad1, ciudad2) == TRUE)
                        {
                            printf("Existe un tramo entre las ciudades.\n");
                        }else
                        {
                            printf("No existe un tramo entre las ciudades.\n");
                        }
                    }else
                    {
                        printf("Las ciudades no pueden ser iguales.\n");
                    }
                }
                else
                {
                    printf("El codigo de la ciudad ingresado excede las ciudades registradas.\n");
                }
            }
            else
            {
                printf("El codigo de la ciudad ingresada no es valida.\n");
            }
        }
        else
        {
            printf("El codigo de la ciudad ingresado excede las ciudades registradas.\n");
        }
    }
    else
    {
        printf("El codigo de la ciudad ingresada no es valida.\n");
    }
}

int main()
{
    Ciudades ciudades;
    Crear(ciudades);

    Grafo grafo;
    Crear(grafo);


    int opcion;
    do
    {
        imprimirMenu();
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
        {
            Opcion1(ciudades);
            break;
        }
        case 2:
        {
            Opcion2(ciudades);
            break;
        }
        case 3:
        {
            Opcion3(ciudades, grafo);
            break;
        }
        case 4:
        {
            Opcion4(ciudades, grafo);
            break;
        }
        case 5:
        {
            break;
        }
        case 6:
        {
            break;
        }
        case 7:
        {
            break;
        }
        case 8:
        {
            break;
        }
        default:
        {
            printf("La opcion ingresada no es correcta. \n\n");
        }
        }

    }
    while(opcion != 0);


    return 0;
}
