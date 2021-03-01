comprobar = True

while comprobar == True:

    opcion = input("Desea hacer los calculos en metros o en cm? (m) (cm): ")
    print("")

    if opcion.lower() == "m" or opcion.lower() == "metros":
        
        print("")
        radio = float(input("Ingrese el valor del radio: "))

        pi = 3.1415927
        area = radio**2 * pi
        area = round(area, 2)
        diametro = radio * 2
        circunferencia = diametro * pi
        circunferencia = round(circunferencia, 2) 

        print("")
        print("El area es: " + str(area) + " metros")
        print("")
        print("La circunferencia es: " + str(circunferencia) + " metros")
        print("")
        
        comprobar = False

    elif opcion.lower() == "cm" or opcion.lower() == "centimetros":

        print("")
        radio = float(input("Ingrese el valor del radio: "))
        
        pi = 3.1415927
        area = radio**2 * pi
        area = round(area, 2)
        diametro = radio * 2
        circunferencia = diametro * pi
        circunferencia = round(circunferencia, 2)

        print("")
        print("El area es: " + str(area) + " cm")
        print("")
        print("La circunferencia es: " + str(circunferencia) + " cm")
        print("")

        comprobar = False

    else:
        print("Ingrese una opcion correcta, por favor")