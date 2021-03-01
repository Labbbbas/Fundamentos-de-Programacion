numero_1 = int(input("Ingrese un número: "))
numero_2 = int(input("Ingrese un número, otra vez: "))
numero_3 = int(input("Ingrese un número una vez más, por favor: "))
 
suma_1 = numero_1 == (numero_2 + numero_3)
suma_2 = numero_2 == (numero_1 + numero_3)
suma_3 = numero_3 == (numero_1 + numero_2)
 
 
if suma_1 == True:
    print(str(numero_1) + " es la suma de " + str(numero_2) + " + " + str(numero_3))
 
elif suma_2 == True:
    print(str(numero_2) + " es la suma de " + str(numero_1) + " + " + str(numero_3))
 
elif suma_3 == True:
    print(str(numero_3) + " es la suma de " + str(numero_1) + " + " + str(numero_2))
 
else:
    print("Ninguno de los números que ingresaste es la suma de los otros dos, amor y paz")
