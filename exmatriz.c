#include <stdio.h>
#define n 1

int main(){

    int m[n][n], i,j,det;

    for(i=0;i<2;i++){
        for(j=0;j<2;j++)
        scanf("%d", &m[i][j]);
    }
det = m[0][0] * m[1][1] - m[1][0] * m[0][1];

printf("%d\n", det);

    return 0;
}