#include <stdio.h>

int main()
{
    int n,m,x,suma=0;

    printf("Ingrese el primer numero a evaluar: ");
    scanf("%d",&m);
    printf("Ingrese el ultimo numero a evaluar: ");
    scanf("%d",&n);

    x=m;
    while(x<=n){
        if(x%2==0){
            suma+=x;
        }
        else{
            suma+=0;
        }
        x++;
    }
    
    printf("La suma de los pares entre %d y %d es: %d\n",m,n,suma);

    return 0;
}