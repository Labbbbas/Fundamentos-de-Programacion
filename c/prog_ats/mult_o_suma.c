#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,numero,suma=0,mult=1;

    printf("Ingrese un numero: ");
    scanf("%d",&numero);

    if(numero>10){
        while(i<=10){
            suma+=i;
            i++;
        }
    printf("La suma es: %d\n",suma);
    }
    else{
        while(i<=9){
            i++;
            mult*=i;
        }
    printf("La multiplicacion es: %d\n",mult);
    }
    return 0;
}