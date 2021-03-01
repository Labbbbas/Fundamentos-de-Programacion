#include <stdio.h>
#include <unistd.h>

int main()
{
    int x,j,i,k,w,espacios=9;
    char *navidad[]={"F","E","L","I","Z  ","N","A","V","I","D","A","D  ","<","3"};

    printf("\n\n\n\t\t\t");
    for(w=0;w<=13;w++)
    {
        if(w%2==0)
        {
            printf("\033[1;35m");
            printf("%s ",navidad[w]);
        }
        else
        {
            printf("\033[1;37m");
            printf("%s ",navidad[w]);
        }
    }
    printf("\n\n\n");
    // printf("\033[5;1;35m");
    // printf("\n\t\t\t\tF");
    // printf("\033[1;37m");
    // printf("E");
    // printf("\033[1;35m");
    // printf("L");
    // printf("\033[1;37m");
    // printf("I");
    // printf("\033[1;35m");
    // printf("Z ");
    // printf("\033[1;37m");
    // printf("N");
    // printf("\033[1;35m");
    // printf("A");
    // printf("\033[1;37m");
    // printf("V");
    // printf("\033[1;35m");
    // printf("I");
    // printf("\033[1;37m");
    // printf("D");
    // printf("\033[1;35m");
    // printf("A");
    // printf("\033[1;37m");
    // printf("D ");
    // printf("\033[1;35m");
    // printf(":");
    // printf("\033[1;37m");
    // printf(")\n\n");

    printf("\033[1;33m");
    printf("\t\t\t\t       #\n");
    for(i=1;i<=10;i++)
    {
        printf("\t\t\t      ");
        for(k=1;k<=espacios;k++)
        {
            printf(" ");
        }
        espacios--;
        for(j=1;j<=(i*2)-1;j++)
        {
            if(j%2==0)
            {
                printf("\033[1;31m");
                printf("*");
            }
            else if(j%3==0){
                printf("\033[1;34m");
                printf("*");
            }
            else
            {
                printf("\033[1;32m");
                printf("*");
            }
        }
        printf("\n");
    }
    for(x=1;x<=3;x++)
    {
        printf("\033[1;30m");
        printf("\t\t\t\t      ***\n");
    }
    
    printf("\n\n");
    printf("\033[0m");
    
    return 0;
}





    // int filas,j,i,k,espacios=((filas*2)-1)/2;

    //printf("Ingrese el número filas:");
    //scanf("%i",&filas);

    //for(i=1;i<=filas;i++)
    //{
    //      for(k=1;k<=espacios;k++)
    //      {
    //          printf(" ");
    //      }
    //      espacios--;
    //      for(j=1;j<=(i*2)-1;j++)
    //      {
    //          printf("*");
    //      }
    //          printf("\n");
    //}
 




    // const char *const verde = "\033[0;40;32m";
    // const char *const subrayado_fazul_verde = "\033[5;44;32m";
    // const char *const normal = "\033[0m";

    // printf("Mostrando %scolores%s !!!\n", verde, normal);
    // printf("Mostrando %scolores%s !!!\n", subrayado_fazul_verde, normal); 