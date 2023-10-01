#include <stdio.h>

int main() {
    int num, i;
    unsigned long long factorial = 1;

    scanf("%d", &num);

    if (num < 0) {
        printf("Erro! O fatorial de um número negativo não está definido.\n");
    } 
    else {
        for (i = 1; i <= num; ++i) {
            factorial *= i;
        }
        printf("%d! = %d\n", num, factorial);
    }

    return 0;
}