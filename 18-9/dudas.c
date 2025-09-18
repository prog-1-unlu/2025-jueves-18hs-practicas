// traspuesta de una matriz


#include <stdio.h>
#include <string.h>

#define F 2
#define C 3
 

// 1 2 3
// 4 5 6


//1 4
// 2 5
// 3 6
int main(){

    int mat[F][C] = 
    {
        {1,2,3},
        {4,5,6}
    }; 
    // {{1,4}
    // ,{2,5},
    //  {3,6}}
    int T[C][F];

    for (int i = 0 ; i < C ;i++) {
        for (int j = 0; j < F ; j++){
            T[i][j] = mat[j][i];
        }
    }
    printf("traspuesta \n");
    for (int i = 0 ; i < C ;i++) {
        for (int j = 0; j < F ; j++){
            printf("%d \t", T[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}

