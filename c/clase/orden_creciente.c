#include <stdio.h>

int main()
{
    int num_1,num_2,num_3;

    printf("Ingrese un numero: ");
    scanf("%d",&num_1);
    printf("Ingrese otro numero: ");
    scanf("%d",&num_2);    
    printf("Ingrese un numero mas: ");
    scanf("%d",&num_3);

    (num_1<num_2 && num_2<num_3)?printf("Estan en orden creciente\n"):printf("No estan en orden creciente\n");

    return 0;
}
