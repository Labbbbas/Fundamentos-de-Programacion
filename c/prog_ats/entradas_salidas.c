#include <stdio.h>

// int main()
// {
//     int a;
//     float b;
//     char c;

//     printf("Digite el valor de la variable c: ");
//     scanf("%c",&c);

//     printf("El valor es: %c\n", c);

//     return 0;
// }

int main()
{
    char x[50];

    printf("Digite su nombre: ");
    gets(x);

    printf("Su nombre es: %s\n",x);

    return 0;
}
