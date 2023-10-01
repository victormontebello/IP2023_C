#include <stdio.h>

void calcular_dv_titulo_eleitor(int numSeq, int codUF, int *dv1, int *dv2) {
    int seq = numSeq;
    int uf = codUF;
    int pesoSeq = 2;
    int pesoUf = 7;
    int somaSeq = 0;
    int somaUf = 0;

    // Cálculo do primeiro dígito verificador
    while (seq > 0) {
        int digito = seq % 10;
        somaSeq += digito * pesoSeq;
        seq /= 10;
        pesoSeq++;
    }

    int restoSeq = somaSeq % 11;
    *dv1 = (restoSeq == 10) ? 0 : restoSeq;

    // Cálculo do segundo dígito verificador
    while (uf > 0) {
        int digito = uf % 10;
        somaUf += digito * pesoUf;
        uf /= 10;
        pesoUf++;
    }

    int restoUf = somaUf % 11;
    int primeiroDigitoDv = (*dv1 * 10);
    *dv2 = (restoUf == 10) ? primeiroDigitoDv : primeiroDigitoDv + restoUf;
}

int main() {
    int numSeq, codUF;
    scanf("%d %d", &numSeq, &codUF);

    int dv1, dv2;
    calcular_dv_titulo_eleitor(numSeq, codUF, &dv1, &dv2);

    if (dv1 >= 0 && dv2 >= 0) {
        printf("%d/%02d\n", numSeq, codUF);
    } else {
        printf("CODIGO DA UF INVALIDO!\n");
    }

    return 0;
}