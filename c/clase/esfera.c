#include <stdio.h>

int main()
{
    float radio;
    float pi = 3.1416;
    float v = 1.3333;

    printf("Ingrese el valor del radio: ");
    scanf("%f",&radio);

    float area = 4*pi*(radio*radio);
    float volumen = v*pi*(radio*radio*radio);

    printf("Area: %.2f\n",area);
    printf("Volumen: %.2f\n",volumen);

    return 0;
}
