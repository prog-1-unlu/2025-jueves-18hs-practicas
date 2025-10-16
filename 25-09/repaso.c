#include <stdio.h>
#define N 10

int main()
{
    float vec[N], *p, *max;
    int i;
    /*Ingresamos datos*/
    printf("Ingrese %f valores flotantes\n", N);
    for (p = vec; p < vec + N; p++)
        scanf("%f", p);
    
    for (int i = 0; i < N; i++){
        scanf("%f",&vec[i]);
    }
    /*Calculamos el máximo*/
    p = max = vec;
    for (i = 0; i < N; i++)
        if (*(p + i) > *max)
            max = p + i;
    /*Imprimimos el resultado*/
    printf("Max = %f\n", *max);
    printf("Pos = %ld\n", max - vec);
}
