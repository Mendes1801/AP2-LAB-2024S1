#include <stdio.h>

#define linhas 3
#define colunas 3

void somaMatrizes(int matriz1[linhas][colunas], int matriz2[linhas][colunas], int resultado[linhas][colunas]) {
    int i, j;

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

int main() {
    int matriz1[linhas][colunas] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matriz2[linhas][colunas] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int resultado[linhas][colunas];
    int i, j;

    somaMatrizes(matriz1, matriz2, resultado);

    printf("Matriz Resultante:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}

