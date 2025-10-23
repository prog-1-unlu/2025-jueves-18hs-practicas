// size_t fwrite(const void * buffer, size_t tamaño, size_t numero, FILE * f)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char palabra[5] = {'D','A','V','\0'};
    int numero = 4;
    int numeros[2];
    FILE *f;
    f = fopen("test2","w");
    fwrite(&numero,sizeof(numero),1,f);
    numero = 5;
    fwrite(&numero,sizeof(numero),1,f);
    
    fclose(f);
    f = fopen("test2","r");
    fread(numeros, sizeof(numero), 2, f);
    fclose(f);
    printf("el numero leido es: %d, %d",numeros[0], numeros[1]);
    return 0;
}