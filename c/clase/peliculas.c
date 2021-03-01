#include <stdio.h>

int main()
{
    int precios[3],j,total,x=1;
    printf("Bienvenido al puesto de peliculas del tianguis\n\n");
    for(j=0;j<3;j++)
    {
        printf("Cuanto cuesta la pelicula?\n"); scanf("%d",&precios[j]);
    }
    if((precios[2]>precios[0]&&precios[0]>precios[1])||(precios[2]>precios[1] && precios[1]>precios[0]))
    {
        total=precios[0]+precios[1];
    }
    else if((precios[0]>precios[2]&&precios[2]>precios[1]||(precios[0]>precios[1] && precios[1]>precios[2])))
    {
        total=precios[2]+precios[1];
    }
    else if((precios[1]>precios[0]&&precios[0]>precios[2])||(precios[1]>precios[2]&&precios[2]>precios[0]))
    {
        total=precios[2]+precios[0];
    }
    else
    {
        total=precios[1]+precios[2];
    }
    printf("Son %d pesos, por favor\n",total);
    return 0;
}