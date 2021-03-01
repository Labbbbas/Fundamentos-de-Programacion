#include <stdio.h>

int main()
{
    float num_1,num_2;

    printf("Ingrese un numero: ");
    scanf("%f",&num_1);
    printf("Ingrese un numero: ");
    scanf("%f",&num_2);

    if(num_1>num_2){
        printf("%.2f es mayor que %.2f\n",num_1,num_2);
    }
    else if(num_1==num_2){
        printf("Son iguales\n");
    }
    else{
        printf("%.2f es mayor que %.2f\n",num_2,num_1);
    }
    return 0;
}
