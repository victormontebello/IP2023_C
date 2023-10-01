#include <stdio.h> 

int main (){

    int n, m, numero_buscado, v[100000], b[1000];

    scanf("%d", &n);

    int i;
    for(i = 0; i<n;i++){
            scanf("%d", &v[i]);
    }

        scanf("%d", &m);

        for(i = 0; i<n;i++){
            scanf("%d", &b[i]);
        }

            for(i=0;i<m;i++){
                numero_buscado = b[i];

                int k=0;
                while(k<n && v[k]!= numero_buscado){

                    k = k + 1;
                }
                if(k==n){
                    printf("NAO ACHEI\n");
                }else
                {
                    printf("ACHEI\n");
                }
            }
    return 0;
}