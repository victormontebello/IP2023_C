#include <stdio.h>

int main(){

    double renda, salariomin = 937.00;
    int quant, tipoescola, etnia, l1 = 0, l2 = 0, l3 = 0, l4 = 0, ncota = 0;
    
    scanf("%lf %d %d %d", &renda, &quant, &tipoescola, &etnia);

    while(renda!=-1){
        scanf("%lf %d %d %d", &renda, &quant, &tipoescola, &etnia);

        
        if ((renda / quant) <= (1.5 * salariomin) && tipoescola == 2){
            if (etnia == 1 || etnia == 2 || etnia == 3){
                printf("ALUNO COTISTA (L2)\n");
                l2++;
            }
            else{
                printf("ALUNO COTISTA (L1)\n");
                l1++;
            }
        }
        
        else if (tipoescola == 2){
            if (etnia == 1 || etnia == 2 || etnia == 3){
                printf("ALUNO COTISTA (L4)\n");
                l4++;
            }
            else{
                printf("ALUNO COTISTA (L3)\n");
                l3++;
            }    
        }
        
        else if(tipoescola == 1){
            printf("ALUNO NAO COTISTA\n");
            ncota++;
        }
        scanf("%lf %d %d %d", &renda, &quant, &tipoescola, &etnia);
    }
    
        printf("TOTAL (L1): %d\n", l1);
        printf("TOTAL (L2): %d\n", l2);
        printf("TOTAL (L3): %d\n", l3);
        printf("TOTAL (L4): %d\n", l4);
        printf("TOTAL NAO COTISTA: %d\n", ncota);
        
    return 0;
}