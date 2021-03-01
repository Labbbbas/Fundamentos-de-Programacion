#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int numeros[10][10];
    int z, n, j, x;
    srand(time(NULL));
    printf("\n");
    for(z=0;z<10;z++){
        for(x=0;x<10;x++){
            numeros[z][x]=rand()%10;
            if(z==x){
                printf("\033[0;31m");
                printf("    %i",numeros[z][x]);
                printf("\033[0m");
            }
            else{
                printf("    %i",numeros[z][x]);
            }
        }
        printf("\n\n");
    }
    printf("\n\n\t     La diagonal del arreglo es:\n\n");
    for(j=0;j<10;j++){
        printf("\033[0;31m");
        printf("    %i",numeros[j][j]);
        printf("\033[0m");
    }
    printf("\n\n");
    return 0;
}
