#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("\033[10;1;31m");
    printf("HOLA MUNDO\n");

    return 0;
}

// printf("\033[1;30m"); gris
// printf("\033[1;31m"); rojo
// printf("\033[1;32m"); verde
// printf("\033[1;34m"); azul
// printf("\033[1;35m"); magenta
// printf("\033[1;36m"); azul claro
// printf("\033[1;37m"); blanco
// printf("\033[1;38m"); blanco
// printf("\033[1;39m"); igual blanco
// printf("\033[1;40m"); sombreado de verde oscuro
// printf("\033[1;41m"); sombreado de rojo
// printf("\033[1;42m"); sombreado de verde
// printf("\033[1;43m"); sombreado de amarillo
// printf("\033[1;44m"); sombreado de azul
// printf("\033[1;45m"); sombreado de magenta
// printf("\033[1;46m"); sombreado de azul claro
// printf("\033[1;47m"); sombreado de blanco
// printf("\033[3;1;3(cualquiercolor)m"); italica
// printf("\033[4;1;3(cualquiercolor)m"); subrayado
// printf("\033[5;1;3(cualquiercolor)m"); parpadeo
// printf("\033[7;1;3(cualquiercolor)m"); fondo del color de la letra
// printf("\033[9;1;3(cualquiercolor)m"); rayado a la mitad