#include <stdio.h>

int main() {
    int N,i,j,matriz[N][N];
    scanf("%d", &N);


    // Leitura dos elementos da matriz
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Impressão dos elementos da diagonal principal
    for ( i = 0; i < N; i++) {
        printf("%d\n", matriz[i][i]);
    }

    return 0;
}
