#include <stdio.h>

int main()
{
    float calf_1,calf_2,calf_3,parciales,examen,trabajo,final;

    printf("Ingrese su calificiion del primer parcial: ");
    scanf("%f",&calf_1);
    if(calf_1>=0 && calf_1<=10){
        printf("Ingrese su calificacion del segundo parcial: ");
        scanf("%f",&calf_2);
        if(calf_2>=0 && calf_2<=10){
            printf("Ingrese su calificacion del tercer pacial: ");
            scanf("%f",&calf_3);
            if(calf_3>=0 && calf_3<=10){
                printf("Ingrese su calificion del examen final: ");
                scanf("%f",&examen);
                if(examen>=0 && examen<=10){
                    printf("Ingrese su calificacion del trabajo final: ");
                    scanf("%f",&trabajo);
                    if(trabajo>=0 && trabajo<=10){
                        parciales = ((calf_1+calf_2+calf_3)/3)*.55;
                        examen *= .30;
                        trabajo *= .15;
                        final = parciales+examen+trabajo;
                        printf("Su calificion final es: %.1f\n",final);
                    }
                    else{
                        printf("Valor incorrecto\n");
                    }
                }
                else{
                    printf("Valor incorrecto\n");
                }
            }
            else{
                printf("Valor incorrecto\n");
            }
        }
        else{
            printf("Valor incorrecto\n");
        }
    }
    else{
        printf("Valor incorrecto\n");
    }

    return 0;
}