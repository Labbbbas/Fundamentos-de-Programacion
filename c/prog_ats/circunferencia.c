#include <stdio.h> 

int main(){

    float radio, circunferencia,diametro;
    #define pi 3.1416

    printf("Ingrese el radio del circulo en cm: ");
    scanf("%f",&radio);

    diametro = radio*2;
    circunferencia = diametro*pi;

    printf("La circunferencia del circulo es: %.2f cm\n",circunferencia);

    return 0;
}