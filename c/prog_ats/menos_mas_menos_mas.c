#include <stdio.h>

int main()
{
    int n, i=1,suma=0;

    printf("Digite el limite n: ");
    scanf("%d",&n);

    while(i<=n){
        if(i%2==0){
            suma-=i;
        }
        else{
            suma+=i;
        }
        i++;
    }

    printf("El resultado es: %d\n",suma);

    return 0;
}