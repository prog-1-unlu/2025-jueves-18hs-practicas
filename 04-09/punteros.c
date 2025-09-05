// imports
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(){

    int a = 4;
    // char c = 'd';
    // char* f = &c;
    int* b = &a;
    int** f = &b;

    printf("El valor de la variable a es: %i \n", a);
    printf("El valor de la direccion d memoria de variable a es: %p \n", &a);
    printf("El valor de la direccion d memoria de variable a es: %p \n", b );
    printf("El valor de la variable a es: %i \n", *b);
    printf("El valor de la *&a es: %i \n", *&a);

    int arreglo[5] = {2,3,6,7,8};

    printf("el valor de arreglo es : %p \n", arreglo);
    printf("el valor arreglo es : %i \n", *arreglo);
    printf("el valor del primer elemento de arreglo es : %i \n", arreglo[0]);
    printf("el valor arreglo ++ es : %i \n", *(arreglo+2));
    printf("el valor p + 2 es : %p \n", *(arreglo+2));


    char* palabra2 = "palabra2";
    char palabra[] = {'h','o','l','a'};

    printf("palabra2 es %s \n", palabra2);
    printf("palabra es %s \n", palabra);
    printf("palabra es %c \n", palabra[4]);
    printf("palabra es %c \n", palabra[5]);

    return 0;
}