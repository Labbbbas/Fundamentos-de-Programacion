#include <stdio.h>

int main(){
    char a = 'e'; //size: 1 byte range: 0 to 255
    short b = -15; //size: 2 bytes ; range: -128 to 127
    int c = 1014; //size: 2 bytes ; range: -32768 to 32767
    unsigned int d = 128; //size: 2 bytes ; range: 0 to 65535
    long e = 123456; //size: 4 bytes ; range: -2147483648 to 2147483637
    float f = 15.678; //size: 4 bytes ; range: -3.4x10 to 3.4x10
    double g = 123123.123123; //size: 8 bytes ; range: -1.7x10 to 1.7x10
    long double h = 123123.123123; //the same case of double

    printf("El elemento es: %lf\n", g);

    return 0;
}

/*
Para imprimir long es: %li
Para imprimir unsigned int es: %i
Para imprimir char es: %s
Para imprimir short es: %i
Para imprimir int es: %i
Para imprimir float es: %f
Para imprimir double es: %lf
*/