#include <stdio.h>
#include <stdlib.h>

int main(){
    int inicio,conver=0,a=0;
    float c=0,op=0;

    system("clear");
    printf("Bienvenido al Conversion de Medidas de Peso, Longitud y Volumen :D\n");
    printf("Te gustaria comenzar? Si(1) o No(2): ");
    scanf("%d",&inicio);
    system("clear");

    if(inicio==1){
        do{
            printf("1. Medidas de Peso\n");
            printf("2. Medidas de Longitud\n");
            printf("3. Medidas de Volumen\n");
            printf("4. Salir\n\n");
            printf("Elige una opcion: "); 
            scanf("%d",&conver);
            system("clear");

        if (conver==1){
            printf("1. Onza a Gramo\n");
            printf("2. Libra a Kilogramo\n");
            printf("3. Tonelada Inglesa a Tonelada\n\n");
            printf("Elige una opcion: ");
            scanf("%d",&a);
            system("clear");

            switch(a){
                case 1:
                    printf("1. De Onza a Gramo\n\n");
                    printf("Ingrese la cantidad: ");
                    scanf("%f",&c);
                    op= c*28.3495231;
                    system("clear");
                    printf("%.2f Onza(s) equivalen a %.2f Gramo(s)\n\n",c,op);
                    printf("Desea convertir otra cantidad? Si(1) No(2): ");
                    scanf("%d",&inicio);
                    system("clear");
                    break;
                case 2:
                    printf("2. De Libra a Kilogramo\n\n");
                    printf("Ingrese la cantidad: ");
                    scanf("%f",&c);
                    op= c*0.45359237;
                    system("clear");
                    printf("%.2f Libra(s) equivalen a %.2f Kilogramo(s)\n\n",c,op);
                    printf("Desea convertir otra cantidad? Si(1) No(2): ");
                    scanf("%d",&inicio);
                    system("clear");
                    break;
                case 3:
                    printf("3. De Tonelada Inglesa a Tonelada\n\n");
                    printf("Escribe la cantidad: ");
                    scanf("%f",&c);
                    op= c*1.0160;
                    system("clear");
                    printf("%.2f Tonelada(s) inglesa(s) equivalen a %.2f Tonelada(s)\n\n",c,op);
                    printf("Desea convertir otra cantidad? Si(1) No(2): ");
                    scanf("%d",&inicio);
                    system("clear");
                    break;
                default:
                    printf("Lo siento, opcion no valida\n\n");
                    printf("Desea volver a intentarlo? Si(1) No(2): ");
                    scanf("%d",&inicio);
                    system("clear");
            }
        }
        else if(conver==2){
            printf("1. Pulgada a Milimetro\n");
            printf("2. Yarda a Metro\n");
            printf("3. Milla a Kilometro\n");
            printf("4. Pulgada al Cuadrado a Centimetro Cuadrado\n");
            printf("5. Pie al Cuadrado a Metro Cuadrado\n");
            printf("6. Yarda al Cuadrado a Metro Cuadrado\n");
            printf("7. Acre a Hectarea\n");
            printf("8. Milla al Cuadrado a Kilometro Cuadrado\n");
            printf("Elige una opcion: ");
            scanf("%d",&a);
            system("clear");

            switch(a){
                case 1:
                    printf("1. Pulgada a Milimetro\n");
                    printf("Escribe la cantidad: ");
                    scanf("%f",&c);
                    op= c*25.40;
                    printf("%.2f Pulgada(s) equivalen a %.2f Milimetro(s)\n\n",c,op);
                    printf("Desea convertir otra cantidad? Si(1) No(2): ");
                    scanf("%d",&inicio);
                    system("clear");
                    break;
                case 2:
                    printf("2. Yarda a Metro\n");
                    printf("Escribe la cantidad: ");
                    scanf("%f",&c);
                    op= c*0.91444;
                    printf("%.2f Yarda(s) equivalen a %.2f Metro(s)\n\n",c,op);
                    printf("Desea convertir otra cantidad? Si(1) No(2): ");
                    scanf("%d",&inicio);
                    system("clear");
                    break;
                case 3:
                    printf("3. Milla a Kilometro\n");
                    printf("Escribe la cantidad: ");
                    scanf("%f",&c);
                    op= c*1.6093;
                    printf("%.2f Milla(s) equivalen a %.2f Kilometro(s)\n\n",c,op);
                    printf("Desea convertir otra cantidad? Si(1) No(2): ");
                    scanf("%d",&inicio);
                    system("clear");
                    break;
                case 4:
                    printf("4. Pulgada al Cuadrado a Centimetro Cuadrado\n");
                    printf("Escribe la cantidad: ");
                    scanf("%f",&c);
                    op= c*6.452;
                    printf("%.2f Pulgada(s)al cuadrado equivalen a %.2f centimetro(s) cuadrado(s)\n\n",c,op);
                    printf("Desea convertir otra cantidad? Si(1) No(2): ");
                    scanf("%d",&inicio);
                    system("clear");
                    break;
                case 5:
                    printf("5. Pie al Cuadrado a Metro Cuadrado\n");
                    printf("Escribe la cantidad: ");
                    scanf("%f",&c);
                    op= c*0.09290;
                    printf("%.2f Pie(s) cuadrado(s) equivalen a %.2f Metro(s) cuadrado(s)\n\n",c,op);
                    printf("Desea convertir otra cantidad? Si(1) No(2): ");
                    scanf("%d",&inicio);
                    system("clear");
                    break;
                case 6:
                    printf("6. Yarda al Cuadrado a Metro Cuadrado\n");
                    printf("Escribe la cantidad: ");
                    scanf("%f",&c);
                    op= c*0.8361;
                    printf("%.2f Yarda(s) al cuadrado equivalen a %.2f Metro(s) cuadrado(s)\n\n",c,op);
                    printf("Desea convertir otra cantidad? Si(1) No(2): ");
                    scanf("%d",&inicio);
                    system("clear");
                    break;
                case 7:
                    printf("7. Acre a Hectarea\n");
                    printf("Escribe la cantidad: ");
                    scanf("%f",&c);
                    op= c*0.4047;
                    printf("%.2f Acre(s) equivalen a %.2f Hectarea(s)\n\n",c,op);
                    printf("Desea convertir otra cantidad? Si(1) No(2): ");
                    scanf("%d",&inicio);
                    system("clear");
                    break;
                case 8:
                    printf("8. Milla al Cuadrado a Kilometro Cuadrado\n");
                    printf("Escribe la cantidad: ");
                    scanf("%f",&c);
                    op= c*2.59;
                    printf("%.2f Milla(s) equivalen a %.2f Kilometro(s)cuadrado(s)\n\n",c,op);
                    printf("Desea convertir otra cantidad? Si(1) No(2): ");
                    scanf("%d",&inicio);
                    system("clear");
                    break;
                default:
                    printf("Lo siento, opcion no valida\n");
                    printf("Desea volver a intentarlo? Si(1) No(2): ");
                    scanf("%d",&inicio);
                    system("clear");
            }
        }
        else if (conver==3){
            printf("1. Pie Cubico a Metro Cubico\n");
            printf("2. Yarda Cubica a Metro Cubico\n");
            printf("3. Pinta a Litro\n");
            printf("4. Galon a Litro\n");
            printf("Elige una opcion: ");
            scanf("%d",&a);
            system("clear");

            switch(a){
                case 1:
                    printf("1. Pie Cubico a Metro Cubico\n");
                    printf("Escribe la cantidad: ");
                    scanf("%f",&c);
                    op= c*0.02832;
                    printf("%.2f Pie(s) cubico(s) equivalen a %.2f Metro(s) cubico(s)\n\n",c,op);
                    printf("Desea convertir otra cantidad? Si(1) No(2): ");
                    scanf("%d",&inicio);
                    system("clear");
                    break;
                case 2:
                    printf("2. Yarda Cubica a Metro Cubico\n");
                    printf("Escribe la cantidad: ");
                    scanf("%f",&c);
                    op= c*0.7646;
                    printf("%.2f Yarda(s) equivalen a %.2f Metro(s) cubico(s)\n\n",c,op);
                    printf("Desea convertir otra cantidad? Si(1) No(2): ");
                    scanf("%d",&inicio);
                    system("clear");
                    break;
                case 3:
                    printf("3. Pinta a Litro\n");
                    printf("Escribe la cantidad: ");
                    scanf("%f",&c);
                    op= c*0.56826;
                    printf("%.2f Pinta(s) equivalen a %.2f Litro(s)\n\n",c,op);
                    printf("Desea convertir otra cantidad? Si(1) No(2): ");
                    scanf("%d",&inicio);
                    system("clear");
                    break;
                case 4:
                    printf("4. Galon a Litro\n");
                    printf("Escribe la cantidad: ");
                    scanf("%f",&c);
                    op= c*4.54609;
                    printf("%.2f Galon(es) equivalen a %.2f Litro(s)\n\n",c,op);
                    printf("Desea convertir otra cantidad? Si(1) No(2): ");
                    scanf("%d",&inicio);
                    system("clear");
                    break;
                default:
                    printf("Lo siento, opcion no valida\n\n");
            }
        }
        else if(conver==4){
            printf("Hasta pronto\n"); break;}
        else{
            printf("Lo siento, opcion no valida\n"); 
            inicio=2;
        }
        }while(inicio==1);
    }
    else if(inicio==2){
        printf("Hasta pronto\n");
    }
    else{
        printf("Opcion no valida\n");
    }

    return 0;
}