#include <stdio.h>
#include <math.h>

int main(){

    float num,raiz;

    printf("Ingrese un numero: ");
    scanf("%f",&num);

    if(num>=0){
         raiz=sqrt(num);
         printf("La raiz cuadrada de %.2f es: %.4f\n",num,raiz);
    }
    else{
        printf("No se puede calcular la raiz cuadrada de un numero negativo, intente otro valor\n");
    }

    return 0;
}