Algoritmo ejercicio_2
	comprobar <- Verdadero
	Mientras comprobar==Verdadero Hacer
		Escribir 'Ingrese la cantidad de personas a evaluar: '
		Leer personas
		Si personas>0 Entonces
			comprobar <- Falso
			peso_hombres <- 0
			altura_hombres <- 0
			peso_mujeres <- 0
			altura_mujeres <- 0
			cantidad_hombres <- 0
			cantidad_mujeres <- 0
			Para i<-1 Hasta personas Hacer
				Escribir 'Ingrese el peso en kg: '
				Leer peso
				Escribir 'Ingrese la altura en cm: '
				Leer altura
				comprobar_genero <- Verdadero
				Mientras comprobar_genero==Verdadero Hacer
					Escribir 'Ingrese el genero de la persona (M) (F)'
					Leer genero
					Si genero=='M' O genero=='m' Entonces
						peso_hombres <- peso_hombres+peso
						altura_hombres <- altura_hombres+altura
						cantidad_hombres <- cantidad_hombres+1
						comprobar_genero <- Falso
					SiNo
						Si genero=='F' O genero=='f' Entonces
							peso_mujeres <- peso_mujeres+peso
							altura_mujeres <- altura_mujeres+altura
							cantidad_mujeres <- cantidad_mujeres+1
							comprobar_genero <- Falso
						SiNo
							Escribir 'El genero seleccionado no es correcto, intentelo nuevamente.'
						FinSi
					FinSi
				FinMientras
			FinPara
			promedio_pesoH <- 0
			promedio_alturaH <- 0
			Si cantidad_hombres>0 Entonces
				promedio_pesoH <- peso_hombres/cantidad_hombres
				promedio_alturaH <- altura_hombres/cantidad_hombres
				promedio_pesoM <- 0
				promedio_alturaM <- 0
			FinSi
			Si cantidad_mujeres>0 Entonces
				promedio_pesoM <- peso_mujeres/cantidad_mujeres
				promedio_alturaM <- altura_mujeres/cantidad_mujeres
			FinSi
			Escribir 'De los datos obtenidos, los promedios son: '
			Escribir 'Promedio peso de Hombres: ',promedio_pesoH,' kg'
			Escribir 'Promedio altura de Hombres: ',promedio_alturaH,' cm'
			Escribir 'Promedio peso Mujeres: ',promedio_pesoM,' kg'
			Escribir 'Promedio altura Mujeres: ',promedio_alturaM,' cm'
		SiNo
			Escribir 'El numero ingresado no es correcto, intentelo nuevamente'
		FinSi
	FinMientras
FinAlgoritmo
