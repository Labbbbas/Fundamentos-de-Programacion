#include <stdio.h>

int main()
{
    int mes;

    printf("\nAdivinare el mes que me digas ;)\n\nDime un numero del 1 al 12: ");
    scanf("%d",&mes);
    printf("\n");
    
    switch (mes)
    {
    case 1:printf("Tu mes es Enero\n\n");
        break;
    case 2:printf("Tu mes es Febrero\n\n");
        break;
    case 3:printf("Tu mes es Marzo\n\n");
        break;
    case 4:printf("Tu mes es Abril\n\n");
        break;
    case 5:printf("Tu mes es Mayo\n\n");
        break;
    case 6:printf("Tu mes es Junio\n\n");
        break;
    case 7:printf("Tu mes es Julio\n\n");
        break;
    case 8:printf("Tu mes es Agosto\n\n");
        break;
    case 9:printf("Tu mes es Septiembre\n\n");
        break;
    case 10:printf("Tu mes es Octubre\n\n");
        break;
    case 11:printf("Tu mes es Noviembre\n\n");
        break;
    case 12:printf("Tu mes es Diciembre\n\n");
        break;
    default:printf("No existe un mes %d\n\n",mes);
        break;
    }

    return 0;
}