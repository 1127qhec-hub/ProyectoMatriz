#include <stdio.h>

int main() {
    int matriz[4][4]; 
    int i, j;        

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            matriz[i][j] = 0;
        }
    }

    printf("Matriz 4x4 inicializada en 0:\n\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
