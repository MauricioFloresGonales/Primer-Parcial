/*
typedef struct
{
    int legajoPelicula;
    char nombrePelicula[50];
    int idfecha;
    int idActor;
    int idGenero;
    int estado;

}ePelicula;*/


typedef struct
{
    int legajoPelicula;
    char nombrePelicula[50];
    int dia;
    int mes;
    int anio;
    char nombreActor[50];
    char paisOrigen[25];
    int genero;
    int estado;

}ePelicula;

void cargarFecha(ePelicula[],int);
void modificarTitulo(ePelicula[],int,int);

void eliminarPelicula(ePelicula[],int,int);
