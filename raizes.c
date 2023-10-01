#include <stdio.h>

int raizesEq2Grau(double a, double b, double c, double *x1, double *x2) {
    double delta = b * b - 4 * a * c;

    if (delta > 0) {
        *x1 = (-b + sqrt(delta)) / (2 * a);
        *x2 = (-b - sqrt(delta)) / (2 * a);
        return 2; // Duas raízes distintas
    } else if (delta == 0) {
        *x1 = -b / (2 * a);
        return 1; // Raiz única
    } else {
        // Raízes imaginárias, não precisamos preencher x1 e x2
        return 0;
    }
}

int main() {
    double a, b, c,x1,x2;
    double result;
    scanf("%lf %lf %lf", &a, &b, &c);

    result = raizesEq2Grau(a, b, c, &x1, &x2);

    if (result == 2) {
        printf("RAIZES DISTINTAS\n");
        printf("X1 = %.2lf\n", x2);
        printf("X2 = %.2lf\n", x1);
    } else if (result == 1) {
        printf("RAIZ UNICA\n");
        printf("X1 = %.2lf\n", x1);
    } else {
        printf("RAIZES IMAGINARIAS\n");
    }

    return 0;
}