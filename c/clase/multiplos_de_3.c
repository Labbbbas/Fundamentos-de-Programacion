#include <stdio.h>

int main(){
    int n = 3;
    int total;

    while (n <= 100){
    printf("%i\n",n);
    n = n + 3;
    total = total + 1;
    }

    printf("El total de numeros multiplos de 3 existentes entre el 1 y el 100 son: %i\n",total);

    return 0;
}