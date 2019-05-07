#include <stdio.h>
#include <stdlib.h>

#include "actor.h"
#include "fecha.h"
#include "genero.h"
#include "peliculas.h"
#define T 3
int main()
{
    ePelicula unaPelicula[T];
    eFecha datos[T];
    eActor selebridad[T];
    eGenero estilo[T];



    //void menuDeOpciones(void);
 int opcion;
    char seguir = 's';

    do{
        printf("1. Alta\n2.2. Modificar Datos De Una Pelicula\n3.Baja de pelicula\n4.listar\n5.salir\nElija una opcion:");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
            cargarPeliculas(unaPelicula,T);

            break;
        case 2:

            break;
        case 3:

            break;
        case 4:


            break;
        case 5:

            break;
        }
        system("pause");
        system("cls");
    }while(opcion!=5);

    return 0;
}
