comprobar = True
comprobar_2 = True
aumentar = 5
disminuir = -2
mayor = 0
menor = 0

while comprobar == True:
    numero_1, numero_2 = float(input("Ingrese un numero: ")), float(input("Ingrese un numero mas: "))
    if numero_1 <= 50 and numero_2 <= 50 and numero_1 != numero_2:

        comprobar = False

        if numero_1 > numero_2:
            mayor += numero_1
            menor += numero_2
        elif numero_2 > numero_1:
            mayor += numero_2
            menor+= numero_1

        print(menor, mayor)
        while comprobar_2 == True:
            
            if menor < mayor:
                menor += aumentar
                mayor += disminuir
                print(menor, mayor)
                comprobar_2 = True
            else: 
                comprobar_2 = False
                print("El menor ha superado al mayor!")
    else:
        print("Intentelo nuevamente")
