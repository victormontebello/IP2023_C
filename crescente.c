#include <stdio.h>

int main(){
    int n, xa, x, i, cont=1, maior=1;
    scanf("%d", &n);
    scanf("%d", &xa);
    i = 1;
        while(i<n){
            scanf("%d", &x);
                if(xa<x)
                cont++;
                else cont=1;
            x = xa;
            if(maior<cont)
                maior=cont;
            i++;
        }
    printf("O comprimento do segmento crescente maximo e: %d\n", maior);

    return 0;
}