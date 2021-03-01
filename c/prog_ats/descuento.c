#include <stdio.h>

int main()
{
    float pago,descontado,precio_final;
    #define descuento .15;

    printf("Ingrese el total a pagar: $");
    scanf("%f",&pago);

    descontado = pago*descuento;
    precio_final = pago-descontado;

    printf("Aplicando un descuento del 15 por ciento, el total a pagar es: $%.2f\n",precio_final);
    printf("Usted ha ahorrado: $%.2f\n",descontado);

    return 0;
}