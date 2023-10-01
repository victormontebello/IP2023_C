#include <stdio.h>

void interceptoEmX(float a, float b, float *x, float *y) {
    *x = -b / a;
    *y = 0.0;
}

void interceptoEmY(float a, float b, float *x, float *y) {
    *x = 0.0;
    *y = b / a;
}

int main() {
    int n;
    scanf("%d", &n);

    float coeficientes[n][2];

    for (int i = 0; i < n; i++) {
        
        scanf("%f %f", &coeficientes[i][0], &coeficientes[i][1]);
    }

    for (int i = 0; i < n; i++) {
        float intercepto_x, intercepto_y;
        interceptoEmX(coeficientes[i][0], coeficientes[i][1], &intercepto_x, &intercepto_y);
        
        printf("Intercepto em X: (%.2f, 0.00)\n", intercepto_x);
        printf("Intercepto em Y: (0.00, %.2f)\n", intercepto_y);
    }

    return 0;
}
