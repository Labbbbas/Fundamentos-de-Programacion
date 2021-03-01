#include <stdio.h>

int main()
{
    float num;

    printf("Digite un numero: ");
    scanf("%f",&num);

    if(num<0){
        printf("%.2f es negativo\n",num);
    }
    else if(num==0){
        printf("%.2f es un numero neutro\n",num);
    }
    else
    {
        printf("%.2f es positivo\n",num);
    }
    
    return 0;
}
