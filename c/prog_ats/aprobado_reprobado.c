#include <stdio.h>

int main()
{
    float examen;

    printf("Ingrese su calificacion del examen: ");
    scanf("%f",&examen);

    if(examen>=0 && examen<=10){
        if(examen>=6 && examen<=10){
            printf("Aprobado :D\n");
        }
        else{
            printf("Reprobado :(\n");
        }
        
    }
    else{
        printf("Valor incorrecto\n");
    }

    return 0;
}