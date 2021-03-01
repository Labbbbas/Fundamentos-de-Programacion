#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tecla;
    
    printf("Programa de Borrado de Pantalla!\n");
    printf("Digite el numero 1: ");
    scanf("%d",&tecla);

    if(tecla==1){
        system("clear");
        printf("Ha funcionado el limpiado de pantalla :)\n");
    }
    else
    {
        fflush(stdin);
        printf("No ha funcionado :(\n");
        printf("Por favor digite el numero 1: ");
        scanf("%d",&tecla);
            if(tecla==1){
                system("clear");
                printf("Ha funcionado :D\n");
            }
            else
            {
                printf("No funciono :s\n");
            }
            
    }
    
    return 0;
}