#include <stdio.h>
#include <string.h>
#include "peliculas.h"
#include "fecha.h"
#define OCUPADO 0
#define LIBRE 1


/*

void cargarPeliculas(ePelicula unaPelicula[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("ingrese nombre de pelicula: ");
        fflush(stdin);
        gets(unaPelicula[i].nombrePelicula);

        printf("ingrese fecha de estreno: ");
        void igresarFecha(eFecha datos[],int);


        printf("ingrese actor: ");
        fflush(stdin);
        gets(unaPelicula[i].idActor);

        printf("ingrese genero: ");
        fflush(stdin);
        gets(unaPelicula[i].idGenero);

    }
}


void hardcodearDatosPeliculas(ePelicula unaPelicula[],int tam)
{
    int i;
    int legajoPelicula[]={1000,1001,1002,1003,1004,1005};
    char nombrePelicula[][50]={"Avengers EndGame","Thor","Cellular","Men in Black 4","IronMan","13  Going on 30"};
    int idfecha datos[]={20,4,2019};
    int idActor selebridad[]={1,5,4,5,2,3};
    int eGenero estilo[]={1,1,1,1,1,4};

    for(i=0;i<tam;i++)
    {
        unaPelicula[i].legajoPelicula = unaPelicula[i];
        strcpy(unaPelicula[i].nombrePelicula, nombrePelicula[i]);
        unaPelicula[i].idfecha = idfecha datos[i];
        unaPelicula[i].idActor = idActor selebridad[i];
        unaPelicula[i].idGenero = eGenero estilo[i];
        //unaPelicula[i].estado = OCUPADO;
    }
}
*/




void cargarPeliculas(ePelicula unaPelicula[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("ingrese nombre de pelicula: ");
        fflush(stdin);
        gets(unaPelicula[i].nombrePelicula);

        printf("ingrese fecha de estreno: ");
        cargarFecha(unaPelicula,tam);

        printf("ingrese actor: ");
        fflush(stdin);
        gets(unaPelicula[i].nombreActor);

        printf("ingrese pais de origen: ");
        fflush(stdin);
        gets(unaPelicula[i].paisOrigen);


        void generoPelicula(void);

    }
}

void cargarFecha(ePelicula unaPelicula[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("dia: ");
        scanf("%d",unaPelicula[i].dia);
        printf("mes: ");
        scanf("%d",unaPelicula[i].mes);
        printf("anio: ");
        scanf("%d",unaPelicula[i].anio);
    }
}

void generoPelicula(void)
{
    int opcion;
    char seguir='s';
    char genero[25];
    do{
        printf("genero de la pelicula: 1.Accion\n2.Comedia\n3.Drama\n4.Romance\n5.terror\n");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
            strcpy(genero,"Accion");

            break;
        case 2:
            strcpy(genero,"Comedia");
            break;
        case 3:
            strcpy(genero,"Drama");
            break;
        case 4:
            strcpy(genero,"Romanse");
            break;
        case 5:
            strcpy(genero,"Terror");
            break;
        default:
            printf("no ingreso nada");
            break;
        }
        system("pause");
        system("cls");
    }while(seguir=='s');

void modificarTitulo(ePelicula unaPelicula[],int tam, int nombrePelicula)
{
    int i;
    int loEncontro= 0;
    printf("ingrese titulo: ");
    scanf("%d",&nombrePelicula);

    for(i=0;i<tam;i++)
    {
        if(nombrePelicula== unaPelicula[i].nombrePelicula)
        {
            printf("ingrese nuevo el nuevo titulo: ");
            gets(unaPelicula[i].nombrePelicula);
            loEncontro=1;
            break;
        }
    }
    if(loEncontro==0)
    {
        printf("el dato no existe.\n");
    }
}


void eliminarPelicula(ePelicula unaPelicula[],int tam,int nombrePelicula)
{
    int i;
    int loEncontro= 0;
    printf("ingrese el nombre de la pelicula: ");
    scanf("%d",&nombrePelicula);

    for(i=0;i<tam;i++)
    {
        if(nombrePelicula== unaPelicula[i].nombrePelicula)
        {
            unaPelicula[i].estado= LIBRE;
            loEncontro=1;
            break;
        }
    }
    if(loEncontro==0)
    {
        printf("el dato no existe.\n");
    }
}
