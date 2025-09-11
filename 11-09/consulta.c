// cargar una matiz de 4 filas y 3 columnas con numneros entre el 1 y el 30

// imports
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>

#define FILAS 4
#define COLUMNAS 3

void cargar_matriz(int m[FILAS][COLUMNAS]){
    for (int f=0; f<FILAS; f++){
        for (int c=0; c<COLUMNAS; c++){
            m[f][c] = rand() % 31;
        }
    }

}

void mostrar_matriz(int m[FILAS][COLUMNAS]){
    for (int f=0; f<FILAS; f++){
            for (int c=0; c<COLUMNAS; c++){
                printf("%d \t", m[f][c]);
            }
            printf("\n");
        }


}

int buscar_mayor(int m[FILAS][COLUMNAS]){
    int mayor =0;
    for (int f=0; f<FILAS; f++){
        for (int c=0; c<COLUMNAS; c++){
            if (mayor < m[f][c]){
                mayor = m[f][c];
            }
        }
    }
    return mayor;

}

int buscar_menor(int m[FILAS][COLUMNAS]){
    int menor = m[0][0];
    for (int f=0; f<FILAS; f++){
        for (int c=0; c<COLUMNAS; c++){
            if (menor > m[f][c]){
                menor = m[f][c];
            }
        }
    }
    return menor;

}


float promedio(int m[FILAS][COLUMNAS]){
    float contador=0;
    float acumulador=0;    
    float promedio =0;
    for (int f=0; f<FILAS; f++){
        for (int c=0; c<COLUMNAS; c++){
            contador +=1;
            acumulador += m[f][c];
        }
    }
    return acumulador/contador;

}

int main(){
    srand(time(NULL));

    int matriz[FILAS][COLUMNAS];
    int matriz_2[FILAS][COLUMNAS] = {
        {2,3,6},
        {3,4,9},
        {7,1,9},
        {151,7,7}
    };

    cargar_matriz(matriz);
    mostrar_matriz(matriz);

    printf("El mayor numero es: %d \n", buscar_mayor(matriz_2));
    printf("El menor numero es: %d \n", buscar_menor(matriz_2));
    float p =  promedio(matriz);
    printf("El promedio es: %f \n", p);
    return 0;
}