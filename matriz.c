#include <stdio.h>
#define nl 100
#define nc 200

int main(){

    int M[nl][nc], i , j, l,c,cont, maior=-999;
    scanf("%d %d", &l, &c);

    //leitura da entrada
    for(i=0; i<l; i++){
        for(j=0; j<c;j++)
            scanf("%d", &M[i][j]);
    }
    //algoritmo de soma por quadras
    for(i=0;i<l-1;i++){
        cont = 0;
        for(j=0;j<c-1;j++){
        cont = M[i][j] + M[i][j+1] + M[i+1][j] + M[i+1][j+1];
        if(maior<cont)
        maior = cont;
        }
    }

    printf("A maior quadra = %d\n", maior);

    return 0;
}