#include <stdio.h>
    
int main()
{
    int num_1;
    int num_2;
    int resultado;
    printf("Ingrese el primer valor\n");
    scanf("%d", &num_1);
    printf("Ingrese el segundo valor\n");
    scanf("%d", &num_2);
    resultado = num_1 + num_2;
    printf("El resultado de la suma es: %d\n", resultado);
    return 0;
}