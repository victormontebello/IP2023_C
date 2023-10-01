#include <stdio.h>

void calcular_dv_titulo_eleitor(int numSeq, int codUF, int *dv1, int *dv2) {
    // Verificar se o código da UF é válido
    if (codUF < 1 || codUF > 28) {
        printf("CODIGO DA UF INVALIDO!\n");
        return;
    }

    // Cálculo do primeiro dígito verificador (DV1)
    int somaSeq = 0;
    int tempSeq = numSeq;

    while (tempSeq > 0) {
        int digito = tempSeq % 10;
        somaSeq += digito;
        tempSeq /= 10;
    }

    somaSeq %= 11;
    *dv1 = (somaSeq == 10) ? 0 : somaSeq;

    // Cálculo do segundo dígito verificador (DV2)
    int somaUF = (codUF / 10) + (codUF % 10) + *dv1;
    somaUF %= 11;
    *dv2 = somaUF;
}

int main() {
    int numSeq, codUF;
    int dv1, dv2;

    scanf("%d %d", &numSeq, &codUF);

    calcular_dv_titulo_eleitor(numSeq, codUF, &dv1, &dv2);

    if (codUF >= 1 && codUF <= 28) {
        printf("%06d%02d/%02d\n", numSeq, codUF, dv1 * 10 + dv2);
    }

    return 0;
}