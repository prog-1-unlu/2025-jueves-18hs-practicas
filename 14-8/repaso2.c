
#include <stdio.h>
#include <string.h>

// Escribir una funcion que pida un numero entero N,y por   teclado pida N numeros enteros e retornar el mayor

//  pedir un numero X 
//  pido un numero X cantidad de veces
//  calcular el mayor
//  retornar el mayor

int mayor(int cantidad_de_numeros){
    
    int numero;
    int mayor=0;
    for (int i = 0 ; i < cantidad_de_numeros ;i++ ){
        printf("Ingrese un numero a comparar \n");
        scanf("%d",&numero);
        if (numero > mayor){
            mayor = numero;
        }
    }
    return mayor;
}

int main(){
    int cantidad_de_numeros;
    printf("Ingrese un numero :");
    scanf("%d",&cantidad_de_numeros);
    int mayor_numero = mayor(cantidad_de_numeros);
    printf("El numero mayor es : %d \n",mayor_numero);
    return 0;
}