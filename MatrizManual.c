#include <stdio.h>

int main() {
    int matriz[4][4];  
    int i, j;          

    printf("Ingrese los 16 valores de la matriz:\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);  
        }
    }

    printf("\nMatriz ingresada:\n\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", matriz[i][j]);  
        }
        printf("\n");
    }

    return 0;
}
