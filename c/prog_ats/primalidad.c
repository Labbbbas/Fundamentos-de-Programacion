#include <stdio.h>

int main()
{
    int i,numero,contador=0;

    printf("Digite un numero: ");
    scanf("%d",&numero);

    for(i=1;i<=numero;i++){
        if(numero%i==0){
            contador++;
        }
    }

    if(contador==2){
        printf("El numero %d es primo\n",numero);
    }
    else{
        printf("El numero %d es compuesto\n",numero);
    }

    return 0;
}