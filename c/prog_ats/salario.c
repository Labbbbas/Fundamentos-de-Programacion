#include <stdio.h>

int main()
{
    float salario;
    int horas;
    #define valor_hora 7.25;

    printf("Ingrese el total de horas trabajadas: ");
    scanf("%d",&horas);

    salario = horas*valor_hora;

    printf("Su salario es: $%.2f dolares\n",salario);

    return 0;
}
