#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int A[4][4], B[4][4], C[4][4];
    int i, j;

    srand(time(NULL)); 

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            A[i][j] = rand() % 9 + 1;
            B[i][j] = rand() % 9 + 1;
            C[i][j] = A[i][j] - B[i][j]; 
        }
    }

    printf("Matriz A:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%2d  ", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz B:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%2d  ", B[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz C (A - B):\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%3d ", C[i][j]); 
        }
        printf("\n");
    }

    return 0;
}
