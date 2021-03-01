import os

def horas_correctas(hora):
    if hora == "1":
        return True
    elif hora == "5":
        return True
    elif hora == "9":
        return True
    elif hora == "1:00 p.m.":
        return True
    elif hora == "5:00 p.m.":
        return True
    elif hora == "9:00 p.m.":
        return True
    elif hora == "1:00 pm":
        return True
    elif hora == "5:00 pm":
        return True
    elif hora == "9:00 pm":
        return True
    elif hora == "1:00pm":
        return True
    elif hora == "5:00pm":
        return True
    elif hora == "9:00pm":
        return True
    elif hora == "a la 1":
        return True
    elif hora == "a las 5":
        return True
    elif hora == "a las 9":
        return True
    elif hora == "1pm":
        return True
    elif hora == "5pm":
        return True
    elif hora == "9pm":
        return True

# def horas_correctas(hora):
#     if hora == ("1"or"5"or"9"or"1:00 p.m."or"5:00 p.m."or"9:00 p.m."or"1:00 pm"or"5:00 pm"or"9:00 pm"or"1:00pm"or"5:00pm"or"9:00pm"or"a la 1"or"a las 5"or"a las 9"or"1pm"or"5pm"or"9pm")
#         return True

os.system('clear')
menu = """
Bienvenido al Cine Público de la Facultad de Ingeniería! :D

¿Qué película desea ver hoy? """
pelicula = input(menu)
pelicula = pelicula.capitalize()
os.system('clear')
    
print("""
¡Excelente elección!
    
Los horarios son: 1:00 p.m.
                  5:00 p.m.
                  9:00 p.m.""")
hora = input("""
¿En qué horario desea verla? """)

while horas_correctas(hora) != True:
    print("")
    hora = input("Ingrese una hora correcta, por favor: ")

os.system('clear')

if horas_correctas(hora) == True:
    print("")
    print("Muy bien!")

print("")
edad = int(input("Solo para verificar, ¿Cuántos años tiene? "))
os.system('clear')
if edad < 18 or edad > 130:
    print("")
    print("Lo siento, usted no tiene la edad requerida para ingresar a este cine :c")
    print("")
    exit(0)
else:
    print("")
    print("De acuerdo, sigamos ;)")
    print("")

comprobar = True
while comprobar == True:
    print("")
    boletos = int(input("¿Cuántos boletos quiere? "))
    print("")
    os.system('clear')
    if boletos > 0:
        costo = 100 * boletos
        print("")
        print(pelicula + " a la(s) " + hora + " para " + str(boletos) + " personas")
        print("")
        print("Son " + str(costo) + " pesos, por favor")
        print("")
        dinero = int(input("Recibo: $"))
        comprobar = False
    else:
        print("")
        print("No puedo darle esa cantidad de boletos, por favor ingrese un numero correcto")
        print("")
        comprobar = True
    
os.system('clear')
cambio = dinero - costo
if dinero > costo:
    print("")
    print("Ok, le cobro")
    print("")
    print("Le entrego su cambio: $" + str(cambio) + " peso(s)")
    print("")
    print("Disfrute su película! :)")
    print("")
elif dinero == costo:
    print("")
    print("Ok, disfrute su pelicula! :)")
    print("")
else:
    print("")
    print("Lo siento mucho, no puedo aceptar esa cantidad :(")
    print("")
    print("Vuelva pronto.")
    print("")