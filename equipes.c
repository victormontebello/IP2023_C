#include <stdio.h>

#define MIN_EQUIPES 6
#define MAX_EQUIPES 100

void ordenarClassificacao(int equipes[], int pontuacao[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (pontuacao[i] < pontuacao[j] || (pontuacao[i] == pontuacao[j] && equipes[i] > equipes[j])) {
                // Troca de posição
                int tempPontuacao = pontuacao[i];
                pontuacao[i] = pontuacao[j];
                pontuacao[j] = tempPontuacao;
                
                int tempEquipes = equipes[i];
                equipes[i] = equipes[j];
                equipes[j] = tempEquipes;
            }
        }
    }
}

int main() {
    int n;
    int equipes[MAX_EQUIPES];
    int pontuacao[MAX_EQUIPES];
    
    scanf("%d", &n);
    
    if (n < MIN_EQUIPES || n > MAX_EQUIPES) {
        printf("CAMPEONATO INVALIDO!\n");
        return 0;
    }
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &equipes[i]);
    }
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &pontuacao[i]);
    }
    
    ordenarClassificacao(equipes, pontuacao, n);
    
    printf("%d\n", n);
    
    for (int i = 0; i < n; i++) {
        printf("%d %d %d\n", i + 1, equipes[i], pontuacao[i]);
    }
    
    return 0;
}