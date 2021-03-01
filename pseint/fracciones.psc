Algoritmo fracciones
	x <- 1;
	contador <- 1;
	suma <- 0;
	Escribir "Ingrese un numero: ";
	Leer num;
	Mientras contador <= num Hacer
		z <- 0;
		z <- x/contador;
		Escribir "1/" contador " = " z;
		contador <- contador + 1;
		suma <- suma + z;
	FinMientras
	Escribir "La suma de los resultados es: " suma;
FinAlgoritmo
