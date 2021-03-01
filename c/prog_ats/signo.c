#include <stdio.h>
#include <string.h>

int main()
{
    char nombre[30],signo[20];

    printf("Digite su nombre: ");
    gets(nombre);
    printf("Digite su signo: ");
    gets(signo);

    if(strcmp(signo,"Geminis")==0){
        printf("Es signo Geminis, su nombre es: %s\n",nombre);
    }
    else{
        printf("No es signo Geminis\n");
    }

    return 0;
}