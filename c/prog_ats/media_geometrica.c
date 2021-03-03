#include <stdio.h>
#include <math.h>

int main()
{
    int i;
    float num,producto=1,indice,lim;

    printf("Cuantos numeros desea ingresar? ");
    scanf("%f",&lim);

    for(i=1;i<=lim;i++){
        printf("Digite un numero: ");
        scanf("%f",&num);
        producto*=num;
    }
    indice=1/lim;
    producto = pow(producto,indice);
    printf("Media Geometrica: %.2f\n",producto);

    return 0;
}