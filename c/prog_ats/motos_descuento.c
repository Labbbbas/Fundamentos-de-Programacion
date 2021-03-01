#include <stdio.h>
#include <string.h>

int main()
{

    char marca[20];
    float precio,descuento;

    printf("Bienvenido!\nQue marca de moto desea comprar?\nTenemos Honda, Yamaha, Suzuki, y otras: ");
    scanf("%s",&marca);

    if(strcmp(marca,"Honda")==0){
        printf("Ingrese el precio de la moto: ");
        scanf("%f",&precio);
        descuento=precio*.05;
        precio-=descuento;
        printf("Son $%.2f por su moto marca %s\n",precio,marca);
    }
    else if(strcmp(marca,"Yamaha")==0){
        printf("Ingrese el precio de la moto: ");
        scanf("%f",&precio);
        descuento=precio*.08;
        precio-=descuento;
        printf("Son $%.2f por su moto marca %s\n",precio,marca);
    }
    else if(strcmp(marca,"Suzuki")==0){
        printf("Ingrese el precio de la moto: ");
        scanf("%f",&precio);
        descuento=precio*.10;
        precio-=descuento;
        printf("Son $%.2f por su moto marca %s\n",precio,marca);
    }
    else if(strcmp(marca,"Otras")==0){
        printf("Ingrese el precio de la moto: ");
        scanf("%f",&precio);
        descuento=precio*.02;
        precio-=descuento;
        printf("Son $%.2f por su moto marca %s\n",precio,marca);
    }
    else{
        printf("Valor incorrecto\n");
    }

    return 0;
}