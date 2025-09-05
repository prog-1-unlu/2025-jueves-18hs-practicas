# // Escribir una función que reciba tres cadenas de caracteres 
# y muestre por pantalla el resultado de concatenar las tres primeras letras de las cadenas. 
#  Además, la función deberá retornar un cero si las dos primeras cadenas son iguales, 
# // un dos si las últimas dos cadenas son iguales, un tres si todas las cadenas son iguales, 
# // y un cuatro si todas las cadenas fueran distintas.

def concatenar_cadenas(cadena1, cadena2, cadena3):
    primera_letra_cadena_1 = cadena1[0:3]
    primera_letra_cadena_2 = cadena2[0:3]
    primera_letra_cadena_3 = cadena3[0:3]
    palabra_concatenada = primera_letra_cadena_1 + primera_letra_cadena_2 + primera_letra_cadena_3
    print(palabra_concatenada)

    if (cadena1 == cadena2) and (cadena1 == cadena3):
        resultado = 3
    elif cadena1== cadena2:
        resultado = 0
    elif cadena2 == cadena3:
        resultado = 2
    else:
        resultado = 4
    return resultado



assert concatenar_cadenas("hola","hola","mar") == 0
assert concatenar_cadenas("buenos","dias","dias") == 2
assert concatenar_cadenas("traje","feliz","dolor")== 4
assert concatenar_cadenas("hola","hola","hola")== 3
print("PASO")


# Crear una función que reciba dos números enteros como parámetros, 
# realice la suma aritmética de ambos, y retorne el resultado de la suma.

def suma(numero1,numero2):
    return numero1 + numero2

def resta(numero1, numero2):
    return numero1 - numero2

def producto(numero1 , numero2):
    return numero1 * numero2

assert suma(6,6) == 12
assert suma(-4,4) ==  0
assert suma(0,0) == 0
print("PASO SUMA")

assert resta(-5,5) == -10
assert resta(0,-3) == 3
assert resta(2,8) == -6
print("PASO RESTA")

assert producto(0,8) == 0
assert producto(-1,-1) == 1
assert producto(-5,5) == -25
print("PASO PRODUCTO")