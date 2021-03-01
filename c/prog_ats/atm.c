#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcion;
    float saldo=1000,agregar,retirar;

    system("clear");
    printf("\n\t\t\tBIENVENIDO A SU CAJERO VIRTUAL");
    printf("\n\n\n\t\t\t\t¿Que desea hacer?");
    printf("\n\n\t\t\t1. Ingresar dinero a la cuenta");
    printf("\n\t\t\t2. Retirar dinero de la cuenta");
    printf("\n\t\t\t3. Salir");
    printf("\n\n\n\t\t\tDigite una opcion: ");
    scanf("%d",&opcion);
    system("clear");

    switch (opcion)
    {
    case 1: printf("\n\t\t\t¿Cuanto dinero desea ingresar? ");
            scanf("%f",&agregar);
            system("clear");
            if(agregar>0){
            saldo+=agregar;
            printf("\n\t\t\tEl saldo total es: $%.2f\n\n",saldo);
            }
            else{
                printf("\n\t\tUsted no puede ingresar esa cantidad de dinero\n\n");
            }
        break;
    case 2: printf("\n\t\t\t¿Cuanto dinero desea retirar? ");
            scanf("%f",&retirar);
            system("clear");
            if (retirar>saldo){
                printf("\n\t\t\tLa cantidad a retirar es mayor al saldo :(\n\n");
            }
            else if (retirar<=0){
                printf("\n\t\tUsted no puede retirar esa cantidad de dinero\n\n");
            }
            else{
                saldo-=retirar;
                printf("\n\t\t\tUsted ha retirado $%.2f\n\n\t\t\tSaldo disponible: $%.2f\n\n",retirar,saldo);
            }
        break;
    case 3: printf("\n\t\t\t\tHasta pronto :)\n\n");
        break;
    default: printf("\n\t\t\t\tOpcion invalida\n\n");
    }
    return 0;
}