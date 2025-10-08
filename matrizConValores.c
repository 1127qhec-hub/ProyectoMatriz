#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[4][4];
    int i, j;
    int pares = 0, impares = 0;

    srand(time(NULL));

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            matriz[i][j] = rand() % 10;  
        }
    }

    printf("Matriz generada con números aleatorios (0-9):\n\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d  ", matriz[i][j]);
            
            if (matriz[i][j] % 2 == 0)
                pares++;
            else
                impares++;
        }
        printf("\n");
    }

    printf("\nCantidad de números pares: %d\n", pares);
    printf("Cantidad de números impares: %d\n", impares);

    return 0;
}
