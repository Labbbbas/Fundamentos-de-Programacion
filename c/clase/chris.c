#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void parte1(void); 
void parte2(void); 
void parte3(void); 

int main(){
	
	printf("\n\nParte 1\n");
	parte1();                       
	printf("\n\n");
	printf("Parte 2\n");
	parte2();
	printf("\n\n");
	printf("Parte 3\n");
	parte3();
	return 0;	
}

void parte1(void)
{
	int ARRAY1[10];
	int *ptr;  
	int *ptrnum;
	int i=0;
	int x=0;	
	ptr = &ARRAY1[0];
	ptrnum = &x;
	srand(time(NULL));
	
	printf("Numero Aletorio\n");
		
	for(i=0; i<10; i++){
		*ptrnum = 1 + rand()%(100);
		*(ptr+i) = *ptrnum; 
		printf("%d.-\t%d\n", i+1, *ptrnum);
	}
	
	printf("\nValor del septimo elemento: %d\n\n", ARRAY1[6]);	
}

void parte2(void){
	
	float Z2[5]={0};
	float *ptr;
	int i;
	
	ptr = &Z2[0];
		
	printf("Introduce un valor para almacenar en el indice 4: ");
	scanf("%f",ptr+3); 
	
	for(i=0;i<5;i++){
	printf("%d.-\t%.2f\n", i+1, *(ptr+i));
	}	
}

void parte3(void){
	
	float Z3[100]={0}; 
	float *ptrz;       
	float *ptrsum;
	float *ptrnum;
	int i=0;
	float num=0;
	float suma=0;
	
	ptrz = &Z3[0]; 
	ptrsum = &suma;
	ptrnum = &num;
		
	srand(time(NULL));
	
	for(i=0; i<100; i++){
		num = 1 + rand()%(100); 
		*(ptrz+i) = *ptrnum;    
	}	

	for(i=0; i<100; i++){ 
		suma = *ptrsum + *(ptrz+i);	
	}
	
	printf("La suma del arreglo flotante es: %.2f\n\n", *ptrsum);	
}