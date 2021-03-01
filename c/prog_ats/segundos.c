#include <stdio.h>

int main()
{
    int horas,minutos,segundos,tiempo_final;

    printf("Ingrese la(s) hora(s): ");
    scanf("%d",&horas);
    printf("Ingrese los minutos: ");
    scanf("%d",&minutos);
    printf("Ingrese los segundos: ");
    scanf("%d",&segundos);

    horas *= 3600;
    minutos *= 60;
    tiempo_final = horas+minutos+segundos;

    printf("Total de segundos: %d\n",tiempo_final);

    return 0;
}
