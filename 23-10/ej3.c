#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE *f;
    f = fopen("test2","rb");

    int numero;
    fread(&numero, sizeof(numero), 1, f);
    while (!feof(f)){
        printf("La letra es: %d \n",numero);
        fread(&numero, sizeof(numero), 1, f);
    }
    
    fclose(f);

    return 0;
}