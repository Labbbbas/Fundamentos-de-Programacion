#include <stdio.h>

int main()
{
    int i,j,numero,veces,factorial=1,suma=0;

    printf("Cuantos factoriales desea sumar? ");
    scanf("%d",&veces);

    for(i=1;i<=veces;i++){
        printf("Ingrese el numero: ");
        scanf("%d",&numero);
        factorial=1;
        for(j=1;j<=numero;j++){
            factorial*=j;
        }
        suma+=factorial;
    }

    printf("La suma factorial de los %d numeros que proporcionaste son: %d\n",veces,suma);

    return 0;
}