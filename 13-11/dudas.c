// Escribe una función recursiva que invierta una cadena de caracteres.
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void invertir_palabra(char palabra[], int inicio, int fin);

int main(){
    char palabra[5] = {'H','o','l','a'};
    printf("la palabra %s ",palabra);
    invertir_palabra(palabra,0,3);
    printf("queda invertida: %s", palabra);

    return 0;
}

void invertir_palabra(char palabra[], int inicio, int fin){

    if (inicio >= fin){
        return;
    }

    char aux = palabra[inicio];
    palabra[inicio] = palabra[fin];
    palabra[fin] = aux;

    return invertir_palabra(palabra, inicio + 1, fin -1);
    ;

}
