#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Prototipo de función:
void tipo_bomba(int);

void tipo_bomba(int num){
    
    // Definiendo los casos para el switch:
    switch(num){
        case 0:
            printf("No hay establecido un valor definido para el tipo de bomba.\n");
            break;
        case 1:
            printf("La bomba es una bomba de agua.\n");
            break;
        case 2:
            printf("La bomba es una bomba de gasolina.\n");
            break;
        case 3:
            printf("La bomba es una bomba de hormigón.\n");
            break;
        case 4:
            printf("La bomba es una bomba de pasta alimenticia.\n");
            break;
        default:
            printf("No existe un valor válido para tipo de bomba.\n");
            break;
    }
}

int main()
{
    // Inicializando la semilla para obtener diferentes resultados:
    srand(time(NULL));
    
    // Declarando la variable de cierre:
    int cierre;
    
    // Definiendo el ciclo indefinido con cláusula de cierre:
    while (cierre != 9){
        cierre = rand() % 11;
        printf("El numero aleatorio para esta ronda fue: %i\n", cierre);
        
        if (cierre == 9){
            printf("...pero %i es el numero de salida.\n", cierre);
        }else{
            tipo_bomba(cierre);
        }
    }
    
    return 0;
}

