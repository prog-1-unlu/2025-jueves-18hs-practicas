#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M 5
#define N 5
#define LINEA printf("-----------------\n");

void cargar_matriz(int [M][N]);
void mostrar_matriz(int [M][N]);
void ordenar_matriz(int [M][N]);

int main()
{
    srand(time(NULL));
    int mat[M][N];
    
    cargar_matriz(mat);
    mostrar_matriz(mat);
    LINEA
    ordenar_matriz(mat);
    mostrar_matriz(mat);
    
    return 0;
}

void cargar_matriz(int mat[M][N]){
    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            mat[i][j] = rand() % 2;
        }
    }
}

void mostrar_matriz(int matriz[M][N]){
    for (int i = 0; i < M; i++){
        printf("[");
        for (int j = 0; j < N; j++){
            if (j == 0){
                printf("%d", matriz[i][j]);
            } else {
                printf(", %d", matriz[i][j]);
            }
        }
        printf("]\n");
    }
}

void ordenar_matriz(int matriz[M][N]){
    int aux = 0;
    
    for (int i = 0; i < M; i++){
        for (int j = 0; j < N-1; j++){
            for (int k = 1; k < N; k++){
                if (matriz[i][k-1] > matriz[i][k]){
                    aux = matriz[i][k-1];
                    matriz[i][k-1] = matriz[i][k];
                    matriz[i][k] = aux;
                }
            }
        }
    }
}