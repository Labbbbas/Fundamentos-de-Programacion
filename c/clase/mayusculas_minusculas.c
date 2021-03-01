#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char texto[256];
    char mayusculas[256];
    char minusculas[256];

    printf("Introduzca texto: ");
    scanf("%s",&texto);

    strcpy(mayusculas, texto);
    strcpy(minusculas, texto);

    strupr(mayusculas);
    strlwr(minusculas);

    printf("Texto Original: %s\n",texto);
    printf("Mayusculas: %s\n",mayusculas);
    printf("Minusculas: %s\n",minusculas);

    return 0;
}
