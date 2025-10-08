#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[4][4];
    int i, j;
    int suma = 0;
    float promedio;

    srand(time(NULL));

    printf("Matriz generada aleatoriamente (valores de 0 a 9):\n\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            matriz[i][j] = rand() % 10; 
            printf("%d  ", matriz[i][j]);
            suma += matriz[i][j];        
        }
        printf("\n");
    }

    promedio = (float)suma / 16; 

    printf("\nSuma de todos los elementos: %d\n", suma);
    printf("Promedio de los elementos: %.2f\n", promedio);

    return 0;
}
