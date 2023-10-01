#include <stdio.h>

void interceptoEmX(float a, float b, float *x, float *y) {
    *x = -b / a;
    *y = 0.0;
}

void interceptoEmY(float a, float b, float *x, float *y) {
    *x = 0.0;
    *y = b;
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        float a, b;
        scanf("%f %f", &a, &b);

        float intercepto_x, intercepto_y;
        interceptoEmX(a, b, &intercepto_x, &intercepto_y);
        
        printf("Intercepto em X: (%.2f, 0.00)\n", intercepto_x);
        printf("Intercepto em Y: (0.00, %.2f)\n", intercepto_y);
    }

    return 0;
}
