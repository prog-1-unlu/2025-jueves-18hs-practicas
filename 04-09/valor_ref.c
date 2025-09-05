#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void incrementar(int* numero){
    *numero += 1;
}
int main(){

    int numero;
    printf("Escriba un numero");
    scanf("%i", &numero );
    printf("el numero es: %i \n" , numero);
    
    incrementar(&numero);
    printf("el numero es: %i \n" ,numero );

    return 0;
}

