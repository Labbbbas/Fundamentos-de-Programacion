#include <stdio.h>

int main()
{
    float grados;
    printf("Ingrese de cuantos grados es su angulo: ");
    scanf("%f",&grados);

    if (grados < 90){
        printf("Es un angulo agudo :)\n");
    }
    else if (grados > 90){
        printf("Es un angulo obtuso :)\n");
    }
    else
    {
        printf("Es un angulo recto :)\n");
    }
    
    return 0;
}
