#include <stdio.h>

int main(int argc, char const *argv[])
{
    float num_1,num_2,num_3,media_aritmetica;

    printf("Ingrese el primer numero: ");
    scanf("%f",&num_1);
    printf("Ingrese el segundo numero: ");
    scanf("%f",&num_2);
    printf("Ingrese el tercer numero: ");
    scanf("%f",&num_3);

    media_aritmetica = (num_1+num_2+num_3)/3;

    printf("La media aritmetica de los valores que ingresaste es: %.2f\n",media_aritmetica);
    
    return 0;
}
