#include <stdio.h>
#include <stdlib.h>

typedef struct  {
    int numero_sucursal;
    char tipo_factura;
    int monto_factura;
} t_factura;

int main(){   

    FILE * f = fopen("facturas.txt", "r");

    t_factura factura;    

    if ( f == NULL){
        printf("Error al abrir archivo");
    }else{

        fscanf(f,"%d,%c,%d", &factura.numero_sucursal, &factura.tipo_factura, &factura.monto_factura);
        while(!feof(f)){
            int monto_total_sucursal = 0;
            int sucursal_actual = factura.numero_sucursal;
            while(!feof(f) && sucursal_actual == factura.numero_sucursal){
                char tipo_factura_actual = factura.tipo_factura;
                int total_tipo_factura = 0;
                while(!feof(f) && sucursal_actual == factura.numero_sucursal && tipo_factura_actual == factura.tipo_factura){
                    total_tipo_factura += factura.monto_factura;
                    fscanf(f,"%d,%c,%d", &factura.numero_sucursal, &factura.tipo_factura, &factura.monto_factura);
                }
                monto_total_sucursal += total_tipo_factura;
                printf("El total de la sucursal %d para el tipo %c es: %d \n", sucursal_actual, tipo_factura_actual, total_tipo_factura);
            }
            printf("\t\t El total de la sucursal %d es: %d \n\n", sucursal_actual, monto_total_sucursal);
        }
    }
    fclose(f);


    return 0;
}