#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int opcion,numero,cubo;

    system("clear");
    printf("\n\t\t\t\tBIENDENIDO USUARI@\n\n\n\t\t\t\t¿Que desea hacer?");
    printf("\n\n\t\t\t1. Calcular el cubo de un numero");
    printf("\n\t\t\t2. El numero es par o impar\n\t\t\t3. Salir");
    printf("\n\n\n\t\t\t\tElija una opcion: ");
    scanf("%d",&opcion);
    system("clear");

    switch (opcion)
    {
    case 1:
        printf("\n\t\t\t\tIngrese un numero: ");
        scanf("%d",&numero);
        cubo=pow(numero,3);
        system("clear");
        printf("\n\t\t\t\tEl cubo de %d es: %d\n\n",numero,cubo);
        break;
    case 2:
        printf("\n\t\t\t\tIngrese un numero: ");
        scanf("%d",&numero);
        system("clear");
        if (numero%2==0){
            printf("\n\t\t\t\t%d es un numero par\n\n",numero);
        }
        else{
            printf("\n\t\t\t\t%d es un numero impar\n\n",numero);
        }
        break;
    case 3: 
        printf("\n\t\t\t\tHasta luego :)\n\n");
        break;
    default: 
        printf("\n\t\t\t\tOpcion Invalida\n\n");
        break;
    }

    return 0;
}