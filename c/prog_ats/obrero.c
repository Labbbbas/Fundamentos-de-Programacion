#include <stdio.h>

int main()
{
    float salario;
    #define aumento .25

    printf("Ingrese su salario actual: $");
    scanf("%f",&salario);

    salario += (salario*aumento);

    printf("Su nuevo salario es: $%.2f\n",salario);

    return 0;
}
