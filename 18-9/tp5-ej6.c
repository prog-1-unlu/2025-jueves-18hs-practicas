// En una matriz M(3, 4, 20) donde el primer índice señala número de centro de estudios, 
// el segundo el número de  curso y el tercero el número alumno, se almacenan en cada celda, 
// las notas de los alumnos. Se solicita:

// La nota media por curso.
// La nota media por centro.
// La nota media general. 
// La posición del mejor alumno de cada curso con su correspondiente nota. 


#include <stdio.h>
#include <string.h>

#define CENTROEST 3
#define CURSO 4
#define ESTUDIANTES 20

int main(){

    int mat[CENTROEST][CURSO][ESTUDIANTES];
    float nota_promedio_curso[CENTROEST][CURSO];

    return 0;
}

// La nota media por curso.
void calcular_promedios(
    int mat[CENTROEST][CURSO][ESTUDIANTES], 
    float nota_promedio_curso[CENTROEST][CURSO] ){

        float suma_notas;
        float promedio;
        for (int ce=0 ; ce < CENTROEST;ce++){
            for(int cur=0 ;cur < CURSO;cur++){
                suma_notas = 0;
                for(int est=0;est < ESTUDIANTES;est++){
                    suma_notas = suma_notas + mat[ce][cur][est];
                }
                promedio = suma_notas/ESTUDIANTES;
                nota_promedio_curso[ce][cur] = promedio;

            }
        }


}