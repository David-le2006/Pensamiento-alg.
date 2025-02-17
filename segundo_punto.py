#Descuento a unproducto
numero = float(input("Dame el valor full del producto: $"))

descuento = numero * 0.15
precio_final = numero - descuento

#imprimir resultados
print (f"Descuento aplicado: ${descuento:.2f}")
print (f"Precio final con descuento: ${precio_final:.2f}")
