comprobar = True
contador = 1
numero = 0
positivos = 0
negativos = 0

while comprobar == True:
    cantidad = int(input("Cuantos numeros desea agregar?: "))
    if cantidad > 0:
        while contador <= cantidad:
            numero = float(input("Ingrese un numero: "))
            if numero >= 0:
                positivos += numero
                contador += 1
                comprobar = False
            elif numero < 0:
                negativos += numero
                contador += 1
                comprobar = False
    else: 
        print("Intentelo nuevamente")

print("Suma total de los numeros positivos: " + str(positivos))
print("Suma total de los numeros negativos: " + str(negativos))