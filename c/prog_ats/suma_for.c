#include <stdio.h>

int main()
{
    int i,suma_par=0,suma_impar=0;

        for(i=1;i<=100;i++){
            if(i%2==0){
                suma_par+=i;
            }
            else{
                suma_impar+=i;
            }
        }
        printf("La suma de los numeros pares entre 1 y 100 es: %i\n",suma_par);
        printf("La suma de los numeros impares entre 1 y 100 es: %i\n",suma_impar);
    return 0;
}