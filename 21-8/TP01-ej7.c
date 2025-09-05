/*Crear una función que reciba el tipo de bomba para una máquina,
 siendo el tipo de bomba un valor entero entre 0 y 4. Según el tipo de bomba debe mostrarse el siguiente mensaje usando un condicional switch:
Si el tipo de bomba es 0, mostrar un mensaje por consola indicando “No hay establecido un valor definido para el tipo de bomba”.
Si el tipo de bomba es 1, mostrar un mensaje por consola indicando “La bomba es una bomba de agua”.
Si el tipo de bomba es 2, mostrar un mensaje por consola indicando “La bomba es una bomba de gasolina”.
 Si el tipo de bomba es 3, mostrar un mensaje por consola indicando “La bomba es una bomba de hormigón”.
Si el tipo de bomba es 4, mostrar un mensaje por consola indicando “La bomba es una bomba de pasta alimenticia”.
 Si no se cumple ninguno de los valores anteriores mostrar el mensaje “No existe un valor válido para tipo de bomba”.
 */
#include <stdio.h>
 int main(void){

    int tipo_bomba;

    printf("digite el tipo de bomba el 0 al 4: ");
    scanf("%d",&tipo_bomba);

    switch(tipo_bomba){
        case 0:
            printf("No hay establecido un valor definido para el tipo de bomba");
            break;
        
        case 1:
            printf("La bomba es una bomba de agua\n");
            break;
        
        case 2:
            printf("La bomba es una bomba de gasolina\n");
            break;

        case 3:
            printf("La bomba es una bomba de hormigón\n");
            break;

        case 4:
            printf("La bomba es una bomba de pasta alimenticia\n");
            break;
        
        default:
            printf("No existe un valor válido para tipo de bomba\n");
            break;


    };

    

    return 0;
}

