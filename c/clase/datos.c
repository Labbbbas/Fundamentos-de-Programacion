#include <stdio.h>

int main()
{			
	char nombre[15];
	int edad;
	float estatura;
    char carrera[15];
	char facultad[15];
	
	printf("Dime tu nombre: ");
	scanf("%s",&nombre);

	printf("Dime tu edad: ");
	scanf("%d",&edad);

	printf("Cuanto mides? ");
	scanf("%f",&estatura);

    printf("Que carrera estudias? ");
	scanf("%s",&carrera);

	printf("En cual facultad? ");
	scanf("%s",&facultad);

	
	printf("\nEstos son tus datos:\n");
	printf("Tu nombre es: %s \n",nombre);
	printf("Tu edad es: %d\n",edad);
	printf("Tu estatura es: %.2f\n",estatura);
    printf("Estudias: %s \n", carrera);
	printf("En la facultad de: %s \n",facultad);
	
	return 0;
}
