#include <stdio.h>

int main(){

    int v[10000], i,n, maior=-999,j;

    scanf("%d", &n);

    while(n!=0){
        for(i=0;i<n;i++){
            scanf("%d", v[i]);
                if(maior<v[i])
                    maior = v[i];
                    j = i;
        }
        printf("%d \n", j, maior);
        scanf("%d", &n);
    }

    return 0;
}