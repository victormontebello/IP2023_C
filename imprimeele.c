#include <stdio.h>
#define min 937.00

int main(){

    int renda, pessoas,escola,etnia, totall1, totall2, totall3, totall4,totaln;
    float bruto;

    while(renda!=-1){
        scanf("%d %d %d %d", &renda, &pessoas, &escola, &etnia);
        bruto = (float)renda/pessoas;
            if((bruto>min)&&(escola!=2)){
                totaln++;
             if((bruto>min)&&(escola==2))
                printf("ALUNO COTISTA (L3)\n");
                totall3++;
                 if(escola==2)
                    printf("ALUNO COTISTA (L1)\n");
                    totall1++;
                 if((escola==2)&&(etnia!=4)&&(bruto>min)){
                        printf("ALUNO COTISTA (L4)\n");
                        totall4++;
                 if((escola==2)&&(etnia!=4))
                        printf("ALUNO COTISTA (L2)\n");
                        totall2++;
                }
                printf("TOTAL (L1): %d\n", &totall1);
                printf("TOTAL (L2): %d\n", &totall2);
                printf("TOTAL (L3): %d\n", &totall3);
                printf("TOTAL (L4): %d\n", &totall4);
                printf("TOTAL NAO COTISTA: %d\n", &totaln);


    }


    return 0;
}