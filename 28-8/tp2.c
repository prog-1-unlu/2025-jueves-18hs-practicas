// Escribir una función que reciba un arreglo de caracteres e retorne si se encuentran ordenados de menor a mayor o no.


// Ejemplo
// A = {‘c’, ‘a’, 'j’, ’t’, ‘p’, ‘g’}
// Resultado= “NO”
// A = {‘a’, ‘c’, ‘g’, ‘j’, ‘p’, ’z’}
// Resultado= “SI”

// creamos una funcion un vector como parametro y largo del vector (v[],N) retorna un bool
// comparar los numeros con el anterior
// 
// retoranar si estan ordenados

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>


bool esta_ordenado_asc(char v[],int n){

    bool esta_ordenado = true;
    int indice = 0;
    while (esta_ordenado && indice < (n -1 ) ){
        if (v[indice] > v[indice + 1]){
            esta_ordenado = false;
        }
        indice++;
    }
    return esta_ordenado;
}


bool esta_ordenado_v2_asc(char v[], int n){
    bool esta_ordenado = true;
    int indice = 0;
    while(esta_ordenado && indice < (n -1 )){
        esta_ordenado = v[indice] <= v[indice + 1];
        indice++;
    };
}


int main (){
    int n = 5;
    char vector[] = {'a','b','d','f','a'};
    char vector_2[] = {'a','b','d','d','g'};

    bool esta_ordenado = esta_ordenado_asc(vector,n);
    bool esta_ordenado_v2 = esta_ordenado_v2_asc(vector,n);
    bool esta_ordenado_2 = esta_ordenado_asc(vector_2,n);
    bool esta_ordenado_2_v2 = esta_ordenado_v2_asc(vector_2,n);

    assert(esta_ordenado == false);
    assert(!esta_ordenado_v2);
    assert(esta_ordenado_2);
    assert(esta_ordenado_2_v2);
    return 0;
}
