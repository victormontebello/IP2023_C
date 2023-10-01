#include <stdio.h>
#define N 1000

int main(){
    int M[N][N], i , j, n;

    scanf("%d", &n);

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d", &M[i][j]);
    

    for(i=0;i<n;i++)
        printf("%d\n", M[i][i]);
    




return 0;
}