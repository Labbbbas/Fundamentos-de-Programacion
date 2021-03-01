#include <stdio.h>

int cuadrado(int a);

int main()
{
    int lado;
    char caracter;
    printf("\n\n¿Cuántos lados quiere que tenga su cuadrado? ");
    scanf("%d",&lado);
    printf("¿Cuál carácter desea imprimir? @");
    printf("\n\nListo :)\n\n\n");
    cuadrado(lado);
    return 0;
}

int cuadrado(int a){
    int f,c;
    for(f=1;f<=a;f++){
        for(c=0;c<a;c++){
            printf("@ ");
        }
        printf("\n");
    }
    printf("\n\n");
    return 0;
}