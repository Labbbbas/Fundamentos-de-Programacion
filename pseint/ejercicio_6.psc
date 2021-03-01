Algoritmo menor_a_50
	comprobar <- Verdadero
	comprobar_2 <- Verdadero
	aumentar <- 5
	disminuir <- -2
	el_mayor <- 0
	el_menor <- 0
	Mientras comprobar==Verdadero Hacer
		Escribir 'Ingrese un numero: '
		Leer numero_1
		Escribir 'Ingrese un numero mas: '
		Leer numero_2
		Si numero_1<=50 Y numero_2<=50 Y numero_1<>numero_2 Entonces
			comprobar <- Falso
			Si numero_1>numero_2 Entonces
				el_mayor <- el_mayor+numero_1
				el_menor <- el_menor+numero_2
			SiNo
				Si numero_1<numero_2 Entonces
					el_mayor <- el_mayor+numero_2
					el_menor <- el_menor+numero_1
				FinSi
			FinSi
			Escribir el_menor,' ',el_mayor
			Mientras comprobar_2==Verdadero Hacer
				Si el_menor<el_mayor Entonces
					el_menor <- el_menor+aumentar
					el_mayor <- el_mayor+disminuir
					Escribir el_menor,' ',el_mayor
					comprobar_2 <- Verdadero
				SiNo
					comprobar_2 <- Falso
					Escribir 'El menor ha superado al mayor!'
				FinSi
			FinMientras
		SiNo
			Escribir 'Intentelo nuevamente'
		FinSi
	FinMientras
FinAlgoritmo
