
#include <stdio.h>
#include <string.h>


// Crear un registro llamada alumno
// Verificar si el alumno aprobo el primer examen
// despues verificar 3 alumnos

struct alumno
{
    char nombre[20];
    int nota_primer_examen;
    int nota_segundo_examen;
};

struct asignatura {
    char profesor[20];
    char nombre[20];
    struct alumno estudiantes[3];
};

int main(){

    struct asignatura prog1 ={
        .profesor = "David",
        .nombre = "Programacion Est",
    };    

    struct alumno estudiante1 = {
        .nombre = "agustin",
        .nota_primer_examen = 10,
        .nota_segundo_examen= 6 
    };

    struct alumno estudiante2 = {
        .nombre = "mario",
        .nota_primer_examen = 4,
        .nota_segundo_examen= 2 
    };

    struct alumno estudiante3 = {
        .nombre = "jose",
        .nota_primer_examen = 1,
        .nota_segundo_examen= 7 
    };

    prog1.estudiantes[0] = estudiante1;
    prog1.estudiantes[1] = estudiante2;
    prog1.estudiantes[2] = estudiante3;
    
    for (int i=0 ; i<3;i++){


        if (prog1.estudiantes[i].nota_primer_examen >=4){
            printf("el alumno : %s tiene la nota %d en el primer examen \n", prog1.estudiantes[i].nombre,prog1.estudiantes[i].nota_primer_examen);
        }else{
            printf("el alumno : %s desaprobo \n", prog1.estudiantes[i].nombre);
        }
    }

    return 0;
}