#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 int main()
 {
 	int n,i,x,suma=0;

 	printf("Cuantos elementos quiere en el arreglo? ");
    scanf("%d",&n);

    float numeros[n];
    srand(time(NULL));
    for(i=0;i<n;i++){
        numeros[i]=rand()%10;
        if(i==6){
            printf("\033[0;31m");
            printf("Valor random en la posicion %d : %.2f\n",i,numeros[i]);
            printf("\033[0m");
        }
        else{
            printf("Valor random en la posicion %d : %.2f\n",i,numeros[i]);
        }
    }
    
    printf("\n\nAsigne un valor para el elemento 4 del arreglo: ");
    scanf("%f",&numeros[3]);

    for(x=0;x<100;x++){
        if(x!=3){
            printf("Posicion %d: %.2f\n",x,numeros[x]);
        }
        else{
            printf("\033[0;31m");
            printf("Nuevo valor del cuarto elemento: %.2f\n",numeros[x]);
            printf("\033[0m");
        }
    }

    for(i=0;i<n; i++){
    	suma+=numeros[i];
	}
    printf("\n\nSumando los valores del arreglo obtenemos: %d\n\n",suma);
    
 	return 0;
 }