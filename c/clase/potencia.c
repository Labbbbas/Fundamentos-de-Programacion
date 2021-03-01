#include <stdio.h>

int main()
{  
    int num,lim,resultado,i=1;

    printf("Ingrese un numero: ");
    scanf("%d",&num);
    printf("Hasta que potencia desea evaluarlo? ");
    scanf("%d",&lim);
    resultado=num;
    
    while(i<=lim){
        printf("%d a la potencia %d es: %d\n",num,i,resultado);
        i+=1;
        resultado*=num;
    }

    return 0;
}