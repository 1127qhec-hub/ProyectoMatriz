#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int A[3][4];  
    int AT[4][3]; 
    int i, j;


    srand(time(NULL));


    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            A[i][j] = rand() % 9 + 1;
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            AT[j][i] = A[i][j];
        }
    }

    printf("Matriz A (3x4):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%3d", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz Transpuesta AT (4x3):\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%3d", AT[i][j]);
        }
        printf("\n");
    }

    return 0;
}
