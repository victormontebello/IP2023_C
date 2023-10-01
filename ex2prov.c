#include <stdio.h>

void calcular_dv_titulo_eleitor(int numSeq, int codUF, int *dv1, int *dv2);

int main(){
    int uf, dig, div1, div2;
    scanf("%d %d", &dig, &uf);
    if (uf >= 1 && uf <= 28){
        calcular_dv_titulo_eleitor(dig, uf, &div1, &div2);
        printf("%d%02d/%d%d\n", dig, uf, div1, div2);
    }else if (uf < 1 || uf > 28){
        printf("CODIGO DA UF INVALIDO!\n");
    }
    return 0;
}

void calcular_dv_titulo_eleitor(int numSeq, int codUF, int *dv1, int *dv2){
    int i, nums[8], diguf[2];
    for (i = 0; i < 8; i++){
        nums[i] = numSeq % 10;
        numSeq /= 10;
    }
    *dv1 = nums[7] * 2 + nums[6] * 3 + nums[5] * 4 + nums[4] * 5 + nums[3] * 6  + nums[2] * 7 + nums[1] * 8 + nums[0] * 9;
    *dv1 = *dv1 % 11;
    if (*dv1 == 10){
        *dv1 = 0;
    }
    diguf[0] = codUF % 10;
    codUF /= 10;
    diguf[1] = codUF;
    *dv2 =  diguf[1] * 7 + diguf[0] * 8 + *dv1 * 9;
    *dv2 = *dv2 % 11;
    if  (*dv2 == 10){
        *dv2 = 0;
    }
}