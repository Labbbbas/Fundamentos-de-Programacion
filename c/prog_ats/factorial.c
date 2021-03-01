#include <stdio.h>

int main()
{
    int i,numero,factorial=1;

    printf("Digite el numero del que desea conocer su factorial: ");
    scanf("%d",&numero);

    for(i=1;i<=numero;i++){
        factorial*=i;
    }

    printf("El factorial de %d es: %d\n",numero,factorial);

    return 0;
}