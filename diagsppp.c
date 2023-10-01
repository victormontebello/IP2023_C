#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int matriz[N][N];
    int i, j;

    // Lendo a matriz
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Imprimindo os elementos da diagonal principal
    for (i = 0; i < N; i++) {
        printf("%d\n", matriz[i][i]);
    }

    return 0;
}
