#include <stdio.h>

// Função para verificar se uma matriz é uma matriz de permutação
int ser_permuta(int mat[][20], int n) {
    int count_ones, count_zeros,i,j;

    for (i = 0; i < n; i++) {
        count_ones = count_zeros = 0;

        for (j = 0; j < n; j++) {
            if (mat[i][j] == 1)
                count_ones++;
            else if (mat[i][j] == 0)
                count_zeros++;
            else
                return 0; // Se houver algum elemento diferente de 0 ou 1, não é matriz de permutação
        }

        if (count_ones != 1 || count_zeros != n - 1)
            return 0; // Se não há exatamente um elemento igual a 1 e n-1 elementos iguais a 0 na linha, não é matriz de permutação
    }

    for (j = 0; j < n; j++) {
        count_ones = count_zeros = 0;

        for ( i = 0; i < n; i++) {
            if (mat[i][j] == 1)
                count_ones++;
            else if (mat[i][j] == 0)
                count_zeros++;
        }

        if (count_ones != 1 || count_zeros != n - 1)
            return 0; // Se não há exatamente um elemento igual a 1 e n-1 elementos iguais a 0 na coluna, não é matriz de permutação
    }

    return 1;
}

int main() {
    int N,t,i,j; // Número de casos de teste
    scanf("%d", &N);

    for (t = 0; t < N; t++) {
        int d; // Dimensão da matriz
        int mat[20][20]; // Matriz de até 20x20 (conforme o enunciado)

        scanf("%d", &d);

        // Leitura da matriz
        for (i = 0; i < d; i++) {
            for (j = 0; j < d; j++) {
                scanf("%d", &mat[i][j]);
            }
        }

        // Verificação e impressão do resultado
        if (ser_permuta(mat, d))
            printf("Matriz permutacao\n");
        else
            printf("Nao permutacao\n");
    }

    return 0;
}
