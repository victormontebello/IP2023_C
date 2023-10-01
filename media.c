#include <stdio.h>

int main(){

    int v[1000], n,i,j,conti=0,conts=0, k=0, t;
    float media, soma;

    scanf("%d", &n);

    for(i=0;i<n;i++){
        scanf("%d", &v[i]);
    }
    for(j=0;j<n;j++){
        soma += v[j];
    }
    media = soma/n;

            while(k<n/2){
                if(v[k]>media)
                    conti++;
                    k++;
            }
            if(n%2==0){
                t = n/2 + 1;
            }else t = n/2;

            while(t<n-1){
                if(v[t]>media)
                conts++;
                t++;
            }


    if(conti==conts){
        printf("%.2f %d %d EMPATE\n", media, conti, conts);
    }else if(conti<conts){
        printf("%.2f %d %d SEGUNDA METADE\n", media, conti, conts);
    }else
        printf("%.2f %d %d PRIMEIRA METADE\n", media, conti, conts);

   
    return 0;
}