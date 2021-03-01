def porcentaje():
    if numero < 500:
        return 30
    elif numero >= 500 and numero < 1000:
        return 7
    elif numero >= 1000 and numero <= 5000:
        return 15
    else:
        return 5
    
numero = int(input("Ingrese un numero: "))
cantidad = (numero*porcentaje())/100
resultado = numero + cantidad

if numero < 500:
    print(resultado)
elif numero >= 500 and numero < 1000:
    print(resultado)
elif numero >= 1000 and numero < 5000:
    print(resultado)
else:
    print(resultado)