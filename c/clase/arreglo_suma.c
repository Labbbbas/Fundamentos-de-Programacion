#include <stdio.h>

int main()
{
    float prom;
	int num[5],n,sum=0,*ap=num;

    printf("\n");
	for(n=0;n<5;n++)
    {
        printf("Dame un numero: ");
		scanf("%d",&num[n]);
		sum+=(*(ap+n));
	}
	prom=sum/5;

    printf("\nSumandolos obtenemos: %d\n",sum);
	printf("Y su promedio es: %.2f\n\n", prom);

	return 0;
}