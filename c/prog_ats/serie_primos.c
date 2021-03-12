#include <stdio.h>

int main()
{
    int i,j,limite,contador=0,primos=0;

    printf("\nIngrese hasta que digito desea encontrar numeros primos: ");
    scanf("%d",&limite);
    printf("\n");

    for(j=1;j<=limite;j++){
        for(i=1;i<=j;i++){
            if(j%i==0){
                contador++;
            }
        }
        if(contador==2){
            printf("%d es un numero primo\n",j);
            primos++;
        }
        // else{
        //     printf("%d no es un numero primo\n",j);
        // }
        contador=0;
    }

    printf("\nEntre 1 y el %d, la cantidad de numeros primos es: %d\n\n",limite,primos);

    return 0;
}