#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[4][4];
    int sumaFilas[4] = {0};
    int sumaColumnas[4] = {0};
    int i, j;

    srand(time(NULL)); 

    printf("Matriz:\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            matriz[i][j] = rand() % 9 + 1;
            printf("%2d  ", matriz[i][j]); 
            sumaFilas[i] += matriz[i][j];      
            sumaColumnas[j] += matriz[i][j];  
        }
        printf("| Suma fila %d: %d\n", i, sumaFilas[i]);
    }

    printf("---\n");
    printf("Suma columnas: ");
    for (j = 0; j < 4; j++) {
        printf("%2d  ", sumaColumnas[j]);
    }
    printf("\n");

    return 0;
}
