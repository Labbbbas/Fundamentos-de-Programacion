#include <stdio.h>

int main()
{
    int vehiculo;

    printf("Bienvenido a la caseta :)\n\n1. Turismo $500\n2. Autobus $3000\n3. Motocicleta $300\n\nDe que tipo es su vehiculo? ");
    scanf("%d",&vehiculo);

    switch (vehiculo)
    {
    case 1:printf("\nUsted debe pagar un peaje de $500, por favor\n");
        break;
    case 2:printf("\nUsted debe pagar un peaje de $3000, por favor\n");
        break;
    case 3:printf("\nUsted debe pagar un peaje de $300, por favor\n");
        break;
    default:printf("\nVehiculo no autorizado\n");
        break;
    }    

    return 0;
}