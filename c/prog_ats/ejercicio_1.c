#include <stdio.h>
#define PI 3.1416

int y = 5; //Variable Global

int main()
{
    int x = 10; //Variable Local

    float suma = 0;

    suma = PI + x;

    printf("La suma es: %.4f\n", suma);

    return 0;
}

/*
Para limitar los decimales es: %.(numero de decimales que quieres)
Para convertir un numero flotante a entero es: %.f
*/