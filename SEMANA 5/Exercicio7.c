#include <stdio.h>

void multiplicaMatrizes(int n, int m, int p, int A[][m], int B[][p], int C[][p]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
            for (int k = 0; k < m; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int n, m, p;

    printf("Digite o n�mero de linhas da matriz A: ");
    scanf("%d", &n);
    printf("Digite o n�mero de colunas da matriz A e o n�mero de linhas da matriz B: ");
    scanf("%d", &m);
    printf("Digite o n�mero de colunas da matriz B: ");
    scanf("%d", &p);

    int A[n][m], B[m][p], C[n][p];

    printf("Digite os elementos da matriz A:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Digite os elementos da matriz B:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    multiplicaMatrizes(n, m, p, A, B, C);

    printf("O resultado da multiplica��o de A por B �:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

