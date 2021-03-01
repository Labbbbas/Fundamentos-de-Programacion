numero_1 = float(input("""
Ingrese un numero: """))
numero_2 = float(input("""
Ingrese otro numero: """))
numero_3 = float(input("""
Ingrese un numero una vez mas, por favor: """))

option_1 = numero_1>numero_3>numero_2
option_2 = numero_1>numero_2>numero_3
option_3 = numero_2>numero_1>numero_3
option_4 = numero_2>numero_3>numero_1
option_5 = numero_3>numero_2>numero_1
option_6 = numero_3>numero_1>numero_2
option_7 = numero_1==numero_2>numero_3
option_8 = numero_1==numero_3>numero_2
option_9 = numero_2==numero_1>numero_3
option_10 = numero_2==numero_3>numero_1
option_11 = numero_3==numero_1>numero_2
option_12 = numero_3==numero_2>numero_1
option_13 = numero_1==numero_2<numero_3
option_14 = numero_2==numero_1<numero_3
option_15 = numero_1==numero_3<numero_2
option_16 = numero_3==numero_1<numero_2
option_17 = numero_2==numero_3<numero_1
option_18 = numero_3==numero_2<numero_1

if option_1 == True:
  print("""""")
  print(str(numero_1) + " es mayor que " + str(numero_3) + " y que " + str(numero_2))
  print("""""")
elif option_2 == True:
  print("""""")
  print(str(numero_1) + " es mayor que " + str(numero_2) + " y que " + str(numero_3))
  print("""""")
elif option_3 == True:
  print("""""")
  print(str(numero_2) + " es mayor que " + str(numero_1) + " y que " + str(numero_3))
  print("""""")
elif option_4 == True:
  print("""""")
  print(str(numero_2) + " es mayor que " + str(numero_3) + " y que " + str(numero_1))
  print("""""")
elif option_5 == True:
  print("""""")
  print(str(numero_3) + " es mayor que " + str(numero_2) + " y que " + str(numero_1))
  print("""""")
elif option_6 == True:
  print("""""")
  print(str(numero_3) + " es mayor que " + str(numero_1) + " y que " + str(numero_2))
  print("""""")
elif option_7 == True:
  print("""""")
  print(str(numero_1) + " y " + str(numero_2) + " son mayores que " + str(numero_3))
  print("""""")
elif option_8 == True:
  print("""""")
  print(str(numero_1) + " y " + str(numero_3) + " son mayores que " + str(numero_2))
  print("""""")
elif option_9 == True:
  print("""""")
  print(str(numero_2) + " y " + str(numero_1) + " son mayores que " + str(numero_3))
  print("""""")
elif option_10 == True:
  print("""""")
  print(str(numero_2) + " y " + str(numero_3) + " son mayores que " + str(numero_1))
  print("""""")
elif option_11 == True:
  print("""""")
  print(str(numero_3) + " y " + str(numero_1) + " son mayores que " + str(numero_2))
  print("""""")
elif option_12 == True:
  print("""""")
  print(str(numero_3) + " y " + str(numero_2) + " son mayores que " + str(numero_1))
  print("""""")
elif option_13 == True:
  print("""""")
  print(str(numero_3) + " es mayor que " + str(numero_1) + " y que " + str(numero_2))
  print("""""")
elif option_14 == True:
  print("""""")
  print(str(numero_3) + " es mayor que " + str(numero_2) + " y que " + str(numero_1))
  print("""""")
elif option_15 == True:
  print("""""")
  print(str(numero_2) + " es mayor que " + str(numero_1) + " y que " + str(numero_3))
  print("""""")
elif option_16 == True:
  print("""""")
  print(str(numero_2) + " es mayor que " + str(numero_3) + " y que " + str(numero_1))
  print("""""")
elif option_17 == True:
  print("""""")
  print(str(numero_1) + " es mayor que " + str(numero_2) + " y que " + str(numero_3))
  print("""""")
elif option_18 == True:
  print("""""")
  print(str(numero_1) + " es mayor que " + str(numero_3) + " y que " + str(numero_2))
  print("""""")
else:
  print("""
Todos los numeros que ingresaste son equivalentes
""")
