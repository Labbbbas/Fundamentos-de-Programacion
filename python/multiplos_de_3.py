# numero = 3
# multiplos = 0

# while numero <= 99:
#     print(numero)
#     numero += 3
#     multiplos += 1

# print("")
# print("La cantidad de numeros multiplos de 3 existentes entre el 1 y el 100 son: " + str(multiplos))
# print("")

multiplos = 0
for i in range(100):
    if i % 3 != 0:
        continue
    elif i == 0:
        continue
    else:
        print(i)
        multiplos+=1
print("Total de numeros dentro dle rango: " + str(multiplos))