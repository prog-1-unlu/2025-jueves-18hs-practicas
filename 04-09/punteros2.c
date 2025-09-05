// Escribir una función que, tras pedir un día de la semana (de 1  a 7), 
// devuelve un puntero a cadena con el nombre del día. La función contendrá un arreglo de punteros a cadena. 
// Para probar la función se realizará un 
// programa que pida un día de la semana en número y escriba el día de la semana en letra.

// imports
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(){
   
    char* palabra2 = "palabra2";
    char palabra[] = {'h','o','l','a'};

    char a = 'a';
    char e = 'e';
    char i = 'i';
    char o = 'o';
    char u = 'u';

    char* arreglo[5] = {&a,&e,&i,&o,&u};

    int vocal_a_buscar = 5;

    printf("El numero %i es la vocal %c \n", vocal_a_buscar, *(arreglo[vocal_a_buscar -1]));

    return 0;
}