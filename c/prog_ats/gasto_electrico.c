#include <stdio.h>

#define tarifa_1 1.2;
#define tarifa_2 1.0;
#define tarifa_3 .9;

int main()
{
    int gasto;
    float pago;
    
    printf("Cual fue su gasto de corriente electrica este mes en kWh? ");    
    scanf("%d",&gasto);

    if(gasto<=1000){
        pago=gasto*tarifa_1;
        printf("Su tarifa por %d kWh es de: $%.2f\n",gasto,pago);
    }
    else if(gasto>1000 && gasto<1850){
        pago=gasto*tarifa_2;
        printf("Su tarifa por %d kWh es de: $%.2f\n",gasto,pago);
    }
    else{
        pago=gasto*tarifa_3;
        printf("Su tarifa por %d kWh es de: $%.2f\n",gasto,pago);
    }

    return 0;
}
