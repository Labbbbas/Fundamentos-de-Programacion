#include <stdio.h>

/*imprime la tabla fahrenheit - Celsius
para far =o , 20, ... 300*/

void main(){	

	int fahr, l_inferior, l_superior, t_incremento;
	float celsius;

	l_inferior =0; /*limite inferior de la tabla temperatura*/
	l_superior = 300; /*limite superior*/
	t_incremento=20; /*Tamaño del incremento*/
	
	fahr=l_inferior;
	while(fahr<=l_superior){
		celsius=((fahr-32)*5)/9;
		printf("%d °F \t %.4f °C\n",fahr,celsius);
		fahr=fahr+t_incremento;
	}	
}