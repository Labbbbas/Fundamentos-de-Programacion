#include <stdio.h>

int main()
{
    int numero;

    printf("Digite un numero: ");
    scanf("%d",&numero);

    (numero%2==0) ? printf("El numero es par\n") : printf("El numero es impar\n");

    return 0;
}