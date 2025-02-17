#solicutar numeros
numero1 = float(input("Dame un numero"))
numero2 = float(input("Dame otro numero"))

#operaciones correspondientes
suma = numero1 + numero2
resta = numero1 - numero2
multiplicacion = numero1 * numero2
division = numero1 / numero2 if numero2 != 0 else "No se puede dividir entre 0"
porcentaje1 = numero1 * 0.20
porcentaje2 = numero2 * 0.20

print (f"suma: {suma}" )
print (f"resta: {resta}")
print (f"multiplicacion: {multiplicacion}")
print (f"division: {division}")
print (f"El 20% del primer numero: {porcentaje1}")
print (f"El 20% del segundo numero: {porcentaje2}")
