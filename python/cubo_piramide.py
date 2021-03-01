import math

menu = """
Bienvenido al Mejor Programa del Mundo :D

Vamos a calcular el Area de la Base, el Area Lateral, el Area Total y el Volumen de la figura que quieras :)

1. Cubo (Hexaedro)
2. Piramide Cuadrangular

Elige una Opcion: """

opcion = (input(menu))

if opcion == "1":
  lado = int(input("Escribe el valor en centimetros de un lado: "))

  area_base = lado**2
  print("Area Base: " + str(area_base) + " cm cuadrados")

  area_lateral = lado**2
  print("Area Lateral: " + str(area_lateral) + " cm cuadrados")

  area_total = area_base*6
  print("Area Total: " + str(area_total) + " cm cuadrados")

  volumen = lado**3
  print("Volumen: " + str(volumen) + " cm cubicos")

elif opcion == "2":
  base = int(input("Escribe el valor en centimetros de un lado de la base: "))
  altura = int(input("Escribe el valor en centimetros de la altura: "))

  area_base = base**2
  print("Area Base: " + str(area_base) + " cm cuadrados")

  apotema = base/2
  Ap = ((altura**2) + (apotema**2))
  Ap = math.sqrt(Ap)
  area_lateral = (base*Ap) / 2
  print("Area Lateral: " + str(area_lateral) + " cm cuadrados")

  area_total = area_base + (area_lateral*4)
  print("Area Total: " + str(area_total) + " cm cuadrados")

  volumen = (area_base*altura) / 3
  print("Volumen: " + str(volumen) + " cm cubicos")

else:
  print("Ingrese una opcion correcta, por favor")
