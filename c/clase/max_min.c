#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	int array[7][5], i, min=100, max=0;
	int *ap;
	ap= &array[0][0]; 
	srand (time (NULL));
	for (i=0; i<7; i++){
		for(int j=0;j<5;j++){
			array[i][j]=rand()%100;
		}
	}
	for(i=0; i<7; i++){
		for(int j=0;j<5;j++){
			if(array[i][j]==array[0][3]){
				array[i][j]=0;
			}
		}
	}
	for(i=0; i<7; i++){
		for(i=0;i<5;i++){
			for(int j=0;j<5;j++){
				printf("%d\t", array[i][j]);
			}
			printf("\n");
		}
	for(i=0;i<35;i++){
		int x= *(ap+1);
		if(x<min){
			min=x;
		}
		if(x>max){
			max=x;
		}
	    }
	}
    
	printf("\tEl minimo es: %d\n", min);
	printf("\tEl maximo es: %d\n", max);

    return 0;
}