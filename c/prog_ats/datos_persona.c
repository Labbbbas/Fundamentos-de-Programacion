#include <stdio.h>
#include <string.h>

int main()
{
    char nombre[30],sexo[15];
    int edad;

    printf("Ingrese su nombre: ");
    gets(nombre);
    printf("Ingrese su edad: ");
    scanf("%d",&edad);
    printf("Ingrese su sexo: ");
    scanf("%s",&sexo);

    if(strcmp(sexo,"Masculino")==0 && edad>=18){
        printf("Eres de Sexo Masculino y eres mayor de edad. Tu nombre es: %s\n",nombre);
    }
    else{
        printf("Necesitas ser de sexo masculino y tambien mayor de edad para que muestre tu nombre\n");
    }

    return 0;
}