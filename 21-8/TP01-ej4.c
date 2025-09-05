/*
Escribir una función que reciba tres cadenas de caracteres y 
1 muestre por pantalla el resultado de concatenar las tres primeras letras de las cadenas.
 Además, la función deberá 
 retornar un cero si las dos primeras cadenas son iguales, 
 un dos si las últimas dos cadenas son iguales,
 un tres si todas las cadenas son iguales,
  y un cuatro si todas las cadenas fueran distintas.
*/


#include <stdio.h>
#include <string.h>

#define A 20 // Almacenamiento para las 3 cadenas de caracteres
int cadenas (char cadena_1[A],char cadena_2[A],char cadena_3[A])
{
    int i; // Itera con for y evalua if
    char concatenar_todas[A]; // Almacena las tres primeras letras de las cadenas
    int r = 0, p = 0; // Contador en 0 para almacenar las ultimas 2 cadenas
    int retorno_final; // Retorna un numero final segun la condicion
    int a=0, b=0, c=0; // Contador en 0 para caracteres de las 3 cadenas
    for (i = 0; i < 9; i++)
    {
        if (i < 3)
        {
            concatenar_todas[i] = cadena_1[i];
        }
        else if (i < 6)
        {
            concatenar_todas[i] = cadena_2[r];
            r++;
        }
        else if (i < 9)
        {
            concatenar_todas[i] = cadena_3[p];
            p++;
        }
    }
    concatenar_todas[9] = '\0';
    printf("La cadena de caracteres final es: %s\n", concatenar_todas);
/*
 un cero si las dos primeras cadenas son iguales, 
 un dos si las últimas dos cadenas son iguales,
 un tres si todas las cadenas son iguales,
  y un cuatro si todas las cadenas fueran distintas.
  */
    if (strcmp(cadena_1,cadena_2) == 0 && strcmp(cadena_3,cadena_2) == 0){
        retorno_final = 3;
    }
    else if (strcmp(cadena_3,cadena_2) == 0){
        retorno_final = 2;
    }
    else if(strcmp(cadena_1,cadena_2) == 0) {
        retorno_final = 0;
    }
    else if (strcmp(cadena_1,cadena_2) == 0 && strcmp(cadena_3,cadena_2) == 0 && strcmp(cadena_3,cadena_1) == 0) {
        retorno_final = 4;
    }
    else {
        retorno_final = 1;
    }


    return retorno_final;
}



int main ()
{
    char palabra_1[A] = "hola";
    char palabra_2[A] = "hol";
    char palabra_3[A] = "hola";
    printf("El numero final es: %d \n", cadenas(palabra_1,palabra_2,palabra_3));
    return 0;
}    



