#include "fecha.h"
void igresarFecha(eFecha datos[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("ingrese el dia: ");
        scanf("%d",datos[i].dia);

        printf("ingrese el dia: ");
        scanf("%d",datos[i].mes);

        printf("ingrese el dia: ");
        scanf("%d",datos[i].anio);
    }
}
