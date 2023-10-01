#include <stdio.h>

int main(){

   int i,n,v[5000], soma=0;

    scanf("%d", &n);

        for(i=0;i<n;i++){
            scanf("%d", v[i]);
            soma += v[i];
        }
    printf("%d\n", soma);

    return 0;
}

    