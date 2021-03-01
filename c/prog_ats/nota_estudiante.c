#include <stdio.h>

int main()
{
    char nota;

    printf("Ingrese su nota: ");
    scanf("%c",&nota);

    switch (nota)
    {
    case 'a':printf("Excelente!\n");
        break;
    case 'b':printf("Notable!\n");
        break;
    case 'c':printf("Aprobado!\n");
        break;
    case 'd': //Como no encuentra break, sigue con el siguiente caso, por lo que tambien saldra reprobado
    case 'f':printf("Reprobado\n");
        break;
    default:printf("Valor invalido\n");
        break;
    }

    return 0;
}