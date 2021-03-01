#include <stdio.h>

int main (){
	float x;
	float y;
	float z;
	
	printf("Ingrese la longitud en millas: ");
	scanf("%f",&x);
	
	printf("Ingrese la longitud en pies: ");
	scanf("%f",&y);
	
	printf("Ingrese la longitud en pulgadas: ");
	scanf("%f",&z);
	
	x = x * 1609.34;
	y = y * 0.3048;
	z = z * 0.0254;
	
    printf("\n");
	printf ("La longitud de millas a metros es: %.2f m\n", x);
	printf ("La longitud de pies a metros es: %.2f m\n",y);
	printf ("La longitud de pulgadas a metros es: %.2f m\n",z);

    return 0;
}