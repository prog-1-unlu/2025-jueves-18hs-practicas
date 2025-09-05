// escribir una funcion que busque un caracter en una palabra y retorne si lo encontro

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>

bool esta_el_caracter(char v[], char letra){

    int indice = 0;
    bool letra_encontrada = false;

    while (! letra_encontrada && v[indice] != '\0'){
        letra_encontrada = v[indice] == letra;
        indice++;
    }
    return letra_encontrada;

};

bool esta_el_caracter_con_for(char v[], char letra , int n){

    bool letra_encontrada = false;
    for (int i =0; i<n ; i++){
        if(v[i] == letra){
            letra_encontrada = true;
        }
    }
    return letra_encontrada;
};

int main(){

    
    return 1;
}
