#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE *f;
    f = fopen("test.txt","w");
    
    char car = 'a';
    putc(car, f);
    car = 'g';
    putc(car, f);
    car = 'u';
    putc(car, f);
    
    // hago algo

    char palabra[5] = {'A','G','U','\0'};

    fputs(palabra,f);
    
    fclose(f);
    f = fopen("test.txt","r");
    char result = getc(f);
    printf("%c \n",result);
    result = getc(f);
    printf("%c \n",result);
    result = getc(f);
    printf("%c \n",result);
    
    fclose(f);

    f = fopen("test.txt","a");
    
    char palabra2[5] = {'D','A','V','\0'};

    fputs(palabra2,f);

    fclose(f);

    
    char palabra_leida[10];
    f = fopen("test.txt","r");
    fgets(palabra_leida,10,f);

    printf("el archivo tenia: %s \n", palabra_leida);
    fclose(f);

    return 0;
}