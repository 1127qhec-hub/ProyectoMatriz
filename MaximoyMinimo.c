#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[4][4];
    int i, j;
    int max, min;
    int filaMax = 0, colMax = 0;
    int filaMin = 0, colMin = 0;

    srand(time(NULL));

    printf("Matriz generada aleatoriamente (valores de 0 a 9):\n\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            matriz[i][j] = rand() % 10;  
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }

    max = min = matriz[0][0];

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (matriz[i][j] > max) {
                max = matriz[i][j];
                filaMax = i;
                colMax = j;
            }
            if (matriz[i][j] < min) {
                min = matriz[i][j];
                filaMin = i;
                colMin = j;
            }
        }
    }

    printf("\nValor máximo: %d (posición: fila %d, columna %d)\n", max, filaMax, colMax);
    printf("Valor mínimo: %d (posición: fila %d, columna %d)\n", min, filaMin, colMin);

    return 0;
}
