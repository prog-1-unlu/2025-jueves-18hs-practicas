
#include <stdio.h>
#include <string.h>


// # Crear una función que reciba dos números enteros como parámetros, 
// # realice la suma aritmética de ambos, y retorne el resultado de la suma.
// si el primer numero es mas grande que el segundo,hago una resta si no una suma
int sumar(int num1, int num2);

int main() {
    int respuesta = sumar(5, 10);
    printf("La suma es: ->%d<-\n", respuesta);

    respuesta = sumar(15, 10);
    printf("La suma es: ->%d<-\n", respuesta);
    respuesta = sumar(5, 5);
    printf("La suma es: ->%d<-\n", respuesta);
    
    return 0;    
}

int sumar(int num1, int num2){
    
    int resultado ;
    if (num1 > num2) {
        resultado = num1 - num2; 
    }else{
        resultado = num1 + num2;
    }
    return resultado;
}

