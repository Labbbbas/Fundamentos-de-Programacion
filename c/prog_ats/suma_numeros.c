#include <stdio.h>

int main()
{
    int i=1,n,suma=0;

    printf("Digite el total de numeros a sumar: ");
    scanf("%d",&n);

    while (i<=n){
        suma+=i;
        i++;
    }
    
    printf("La suma es: %d\n",suma);

    return 0;
}