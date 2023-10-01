#include <stdio.h>

int main(){

    int n, i=1, k, ka, maior=1, cont=1;
    scanf("%d", &n);
    scanf("%d", &ka);
    i = 1;
        while(i<n){
            scanf("%d", &k);
             if(ka==k)
             cont++;
             else cont=1;
             if(maior<cont)
             maior=cont;
        ka = k;
        i++;
 }
    printf("O comprimento do segmento de numeros iguais e: %d\n", maior);

    return 0;
}