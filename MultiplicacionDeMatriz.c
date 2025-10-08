#include <stdio.h>

int main() {
    int m, n, p, q;
    int i, j, k;


    printf("Ingrese las dimensiones de la matriz A (filas columnas): ");
    scanf("%d %d", &m, &n);

    printf("Ingrese las dimensiones de la matriz B (filas columnas): ");
    scanf("%d %d", &p, &q);

   
    if (n != p) {
        printf("\nError: No se pueden multiplicar las matrices.\n");
        printf("Las columnas de A deben ser iguales a las filas de B.\n");
        return 1;
    }

    int A[m][n], B[p][q], C[m][q];

   
    printf("\nIngrese los elementos de la matriz A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

  
    printf("\nIngrese los elementos de la matriz B:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

  
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            C[i][j] = 0;
            for (k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nMatriz A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz B:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("%4d", B[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz C = A × B:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%4d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
