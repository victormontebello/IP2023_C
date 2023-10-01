#include <stdio.h>

int main(){

    int n,i,q;

    scanf("%d", &n);

    for(i=2; i<=n;i+=2){
        q = i*i;
        printf("%d^2 = %d\n", i,q);

    }
    return 0;
}