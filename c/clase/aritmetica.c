#include <stdio.h>

int main()
{
    int num_1;
    int num_2;

    printf("Ingrese un numero: ");
    scanf("%d",&num_1);
    printf("Ingrese un numero mas: ");
    scanf("%d",&num_2);

    int suma=num_1+num_2;
    int resta=num_1-num_2;
    int multi=num_1*num_2;
    float div=num_1/num_2;
    int mod=num_1%num_2;

    printf("\n");
    printf("La suma es: %d\n", suma);
    printf("La diferencia es: %d\n",resta);
    printf("La multiplicacion es: %d\n",multi);
    printf("La division es: %.2f\n",div);
    printf("El modulo es: %d\n",mod);

    return 0;
}
