#include <stdio.h>

int main()
{
    int n,i,suma=0,pares=0;

    printf("Digite hasta que numero desea evaluar: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        if(i%2==0){
            suma+=i;
            pares+=1;
        }
    }

    printf("La cantidad de numeros pares entre 1 y %d es: %d\n",n,pares);
    printf("Y su suma total es: %d\n",suma);

    return 0;
}