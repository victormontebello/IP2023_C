#include <stdio.h>

float absoluto(float n){
    if(n<0)
        return -n;
    else return n;
}
int main(){
    int n, i, j;
    float a[3], b[3], maior, coordenada;
    scanf("%d", &n);

    for(i=0;i<3;i++)
        scanf("%f", &a[i]);
    j = 1;
    while(j<n){
        for(i=i;i<3;i++)
            scanf("%f", &b[i]);
            maior = -99;
        for(i=0;i<3;i++){
            coordenada = absoluto(b[i] - a[i]);
            if(maior,coordenada)
            maior = coordenada;
        }
        printf("%.2f\n", maior);
        for(i=0;i<3;i++)
            a[i] = b[i];
            j++;    
    }
    return 0;
}