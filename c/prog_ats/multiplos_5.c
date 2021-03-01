#include <stdio.h>

int main()
{
    int n,i=1,multiplos=0;

    printf("Digite el total de numeros a comprobar: ");
    scanf("%d",&n);

    while(i<=n){
        if(i%5==0){
            printf("%d es multiplo de 5\n",i);
            multiplos++;
        }
        i++;
    }

    printf("\nEntre 1 y %d hay %d multiplos de 5\n",n,multiplos);

    return 0;
}