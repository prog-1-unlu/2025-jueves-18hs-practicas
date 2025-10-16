indice_vector_a =0
indice_vector_b =0
v[3] -> 1
v2[4] -> 2
 MAY_V3 = 3%2 + 4 % 2



v3[MAY_V3] 

for(int i = 0; i< MAY_V3, i++){

    // verificar indices de vectores a y b
    if (v[indice_vector_a] > v2[indice_vector_b]){
        v3[i] = v2[indice_vector_b]
        indice_vector_b += 2
    }else{
        v3[i] = v[indice_vector_a]
        indice_vector_a += 2
    }
    // si un vector se termino 
    // solo cargar los indices impares del que no se termino


}