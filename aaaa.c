#include <stdio.h>

int main() {
    int N;
    int casos = 0;
    
    while (1) {
        scanf("%d", &N);
        
        if (N == 0)
            break;
        
        int vetor[N], i;
        
        for (i = 0; i < N; i++) {
            scanf("%d", &vetor[i]);
        }
        
        int maior = vetor[0];
        int indice = 0;
        
        for (i = 1; i < N; i++) {
            if (vetor[i] > maior) {
                maior = vetor[i];
                indice = i;
            }
        }
        
        printf("%d %d\n", indice, maior);
        casos++;
    }
    
    if (casos > 0) {
        printf("\n"); // Quebra de linha após todas as saídas
    }
    
    return 0;
}