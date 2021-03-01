#include <stdio.h>

int main()
{
    int calf;
    printf("Ingrese su calificacion en escala 0-100: ");
    scanf("%d",&calf);
    if(calf<=100 && calf>=90){
        printf("Obtuviste una A\n");
    }
    else if(calf<90 && calf>=80){
        printf("Obtuviste una B\n");
    }
    else if(calf<80 && calf>=70){
        printf("Obtuviste una C\n");
    }
    else if(calf<70 && calf>=69){
        printf("Obtuviste una D\n");
    }
    else if(calf<69 && calf>=0){
        printf("Obtuviste una F\n");
    }
    else{
        printf("Valor no valido\n");
    }
    return 0;
}
