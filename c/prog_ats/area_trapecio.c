#include <stdio.h>

int main(){

    float base_mayor,base_menor,altura,area;

    printf("Ingrese el valor de la base mayor: ");
    scanf("%f",&base_mayor);
    printf("Ingrese el valor de la base menor: ");
    scanf("%f",&base_menor);
    printf("Ingrese el valor de la altura: ");
    scanf("%f",&altura);

    area = ((base_mayor+base_menor)/2)*altura;

    printf("El area del trapecio es: %.2f cm cuadrados\n",area);

    return 0;
}