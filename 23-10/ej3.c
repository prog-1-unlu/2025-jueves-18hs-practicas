#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE *f;
    f = fopen("test2","rb");

    int c = getc(f);
    while (!feof(f)){
        printf("La letra es: %d \n",c);
        c = getc(f);
    }
    
    fclose(f);

    return 0;
}