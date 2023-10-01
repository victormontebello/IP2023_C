#include <stdio.h>

int main()
{
    int n, a, b, c, d;
    int i;

    scanf("%d %d %d", &n, &a, &b);

    int fibonacci[n];
    

    fibonacci[0] = a;
    fibonacci[1] = b;

    i = 2;
    for(; i < n; i++) {
        c = a + b;
        fibonacci[i] = c;
        a = b;
        b = c;
    }

    i = 0;
    for(; i < n; i++) {
        scanf("%d", &d);

        if(d == fibonacci[i]) {
            printf("OK\n");
        }else {
            printf("Nao e Fibonacci");
            return 0;
        }
    }

    printf("A serie informada e de Fibonacci\n");
    return 0;
}