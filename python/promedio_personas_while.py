comprobar = True

while comprobar == True:
    
    personas = int(input("Ingrese la cantidad de personas a evaluar: "))

    if personas > 0:

        comprobar = False
        
        peso_hombres = 0
        altura_hombres = 0
        peso_mujeres = 0 
        altura_mujeres = 0
        cantidad_hombres = 0
        cantidad_mujeres = 0

        i = 1
        
        while i <= personas: 
            
            print("")
            peso = float(input("Ingrese el peso de la persona numero " + str(i) + " en kg: "))
            altura = int(input("Ingrese la altura de la persona numero " + str(i) + " en cm: "))

            comprobar_genero = True

            while comprobar_genero == True:

                genero = input("Ingrese el genero de la persona (M) (F): ")

                if genero.upper() == "M":

                    peso_hombres += peso
                    altura_hombres += altura
                    cantidad_hombres += 1

                    comprobar_genero = False

                elif genero.upper() == "F":

                    peso_mujeres += peso
                    altura_mujeres += altura
                    cantidad_mujeres += 1

                    comprobar_genero = False

                else:
                    print("El genero seleccionado no es correcto, intentelo nuevamente.")
                
                i += 1

        promedio_pesoH = 0
        promedio_alturaH = 0

        if cantidad_hombres > 0:
            promedio_pesoH = peso_hombres / cantidad_hombres
            promedio_alturaH = altura_hombres / cantidad_hombres

        promedio_pesoM = 0
        promedio_alturaM = 0
        
        if cantidad_mujeres > 0:
            promedio_pesoM = peso_mujeres / cantidad_mujeres
            promedio_alturaM = altura_mujeres / cantidad_mujeres

        print("")
        print("De los datos obtenidos, los promedios son: ")
        print("Promedio peso de hombres: " + str(promedio_pesoH) + " kg")
        print("Promedio altura de hombres: " + str(promedio_alturaH) + " cm")
        print("Promedio peso de mujeres: " + str(promedio_pesoM) + " kg")
        print("Promedio altura de mujeres: " + str(promedio_alturaM) + " cm")

    else: 
        print("El numero ingresado no es correcto, intentelo nuevamente.") 