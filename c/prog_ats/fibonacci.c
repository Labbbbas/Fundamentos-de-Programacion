#include <stdio.h>

int main()
{
    int i,numero,x=0,y=1,z=1;

    printf("Digite el numero de elementos que desea tenga la serie: ");
    scanf("%d",&numero);

    printf("1  ");
    for(i=1;i<numero;i++){
        z=x+y;
        x=y;
        y=z;
        printf("%d  ",z);
    }

    printf("\n");

    return 0;
}