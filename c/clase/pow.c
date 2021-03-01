#include <stdio.h>
#include <math.h>

int main()
{
    int T,P,N;
    printf("Asigne un valor para T: "); scanf("%i",&T);
    printf("Asigne un valor para P: "); scanf("%i",&P);
    printf("Asigne un valor para N: "); scanf("%i",&N);
    if((pow((T/P),N))==(pow(T,N)/pow(P,N)))
    {
        printf("Son iguales\n");
    }
    else
    {
        printf("No son iguales\n");
    }
    return 0;
}