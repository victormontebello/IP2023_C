#include <stdio.h>

void ordenar_equipes(int n, int equipes[], int pontuacao[]) {
    
    if (n < 6 || n > 100) {
        printf("CAMPEONATO INVALIDO!\n");
        return;
    }

    
    int equipes_pontuacao[n][2];

    int i;
    for (i = 0; i < n; i++) {
        equipes_pontuacao[i][0] = equipes[i];
        equipes_pontuacao[i][1] = pontuacao[i];
    }
    for (i = 0; i < n - 1; i++) {
        int j;
        for (j = 0; j < n - i - 1; j++) {
            if (equipes_pontuacao[j][1] < equipes_pontuacao[j + 1][1] ||
                (equipes_pontuacao[j][1] == equipes_pontuacao[j + 1][1] && equipes_pontuacao[j][0] > equipes_pontuacao[j + 1][0])) {
                int temp1 = equipes_pontuacao[j][0];
                int temp2 = equipes_pontuacao[j][1];
                equipes_pontuacao[j][0] = equipes_pontuacao[j + 1][0];
                equipes_pontuacao[j][1] = equipes_pontuacao[j + 1][1];
                equipes_pontuacao[j + 1][0] = temp1;
                equipes_pontuacao[j + 1][1] = temp2;
            }
        }
    }

    
    printf("%d\n", n);

    for (i = 0; i < n; i++) {
        printf("%d %d %d\n", i + 1, equipes_pontuacao[i][0], equipes_pontuacao[i][1]);
    }
}

int main() {
    int n;

    
    scanf("%d", &n);

    
    if (n < 6 || n > 100) {
        printf("CAMPEONATO INVALIDO!\n");
        return 0;
    }

    int equipes[n];
    int pontuacao[n];

    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &equipes[i]);
    }

    for (i = 0; i < n; i++) {
        scanf("%d", &pontuacao[i]);
    }

    
    ordenar_equipes(n, equipes, pontuacao);

    return 0;
}