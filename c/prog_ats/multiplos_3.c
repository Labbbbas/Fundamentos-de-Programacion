#include <stdio.h>

int main()
{
    int n,i=1,multiplos=0;

    printf("Digite el total de numeros a comprobar: ");
    scanf("%d",&n);

    while(i<=n){
        if(i%3==0){
            printf("%d es multiplo de 3\n",i);
            multiplos++;
        }
        i++;
    }

    printf("\nEntre 1 y %d hay %d multiplos de 3\n",n,multiplos);

    return 0;
}