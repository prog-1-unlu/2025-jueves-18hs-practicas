
void cargar_matriz(int mat[M][N], int min, int max){
    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            mat[i][j] = min +  (rand() % (max-min)+1);
        }
    }
}

int suma= 0
for (c=0){
    if (c%2 != 0){
        for (f=0 ){
            if(f%2==0){
                suma += v[c][f]
            }
        }
    }    
}

for (c=0;c<max,c++){
    suma += m[c][c];
}

// funcion min 10
// funcion max 20
// 11 = (20 -10) +1 
// rand() % 11 + 10 
// min -> 10
// max -> 20
 
// 35-44
// 35+ (rand()%(44 - 35)+1)
// 35 + rand()%9+1 
// 35 + (0 - 9) min 35 max 44 
// 0 < rand()%45 > 44

// 35 + 0 = 0
// 35 + 44 = 79

/*
pedir un dato
si no esta entre lo que quiero
volver al principio

*/


printf("ingrese un dato")

scanf("$d", variable)

while(variable < 100 || varianble > 20 000){
    printf("ingrese de nuevo")
    scanf("$d", variable)
}

