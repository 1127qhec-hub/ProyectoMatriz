#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int A[4][4];
    int i, j;
    int sumaPrincipal = 0;
    int sumaSecundaria = 0;

    srand(time(NULL)); 

   
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            A[i][j] = rand() % 9 + 1;
        }
    }

    printf("Matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%3d", A[i][j]);
        }
        printf("\n");
    }

    printf("\nDiagonal principal: ");
    for (i = 0; i < 4; i++) {
        printf("%d ", A[i][i]);
        sumaPrincipal += A[i][i];
    }

    printf("\nDiagonal secundaria: ");
    for (i = 0; i < 4; i++) {
        printf("%d ", A[i][3 - i]);
        sumaSecundaria += A[i][3 - i];
    }

    
    printf("\n\nSuma diagonal principal = %d", sumaPrincipal);
    printf("\nSuma diagonal secundaria = %d\n", sumaSecundaria);

    return 0;
}
