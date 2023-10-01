#include <stdio.h>

int main() {
    double a, b, c, d;
    double determinant;

    // Leitura dos elementos da matriz
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    // Cálculo do determinante
    determinant = a * d - b * c;

    // Exibição do resultado com 2 casas decimais
    printf("%.2lf\n", determinant);

    return 0;
}
