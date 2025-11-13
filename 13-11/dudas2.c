// Escribir una función recursiva que cuente la cantidad de números naturales desde m hasta un número n.
// 
// m = 3
// n = 5
// 

int contar_numeros(int inicio, int fin);

int main(){

    int numero = contar_numeros(3,6);
    printf("entre 3 y 5 hay %d numeros", numero);
    return 0;
}

int contar_numeros(int inicio, int fin){
    if (inicio>fin){
        return 0;
    }

    return 1 + contar_numeros(inicio + 1, fin);
    
}