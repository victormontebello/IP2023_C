#include <stdio.h>
#define TAM 10

int busca_sequencial(int v[], int x){
    int i;
    i=0;
    while((i<TAM)&&(x!=v[i]))
        i++;
    return i;

}
/*int busca_binaria(int v[], int x){


}*/
int main(){
    int v[TAM], x, i;
    for(i=0;i<TAM;i++){
        scanf("%d", &v[i]);
    }
        scanf("%d", &x);
    i = busca_sequencial(v, x);
    if(i==TAM)
        printf("elemento %d nao esta no vetor\n", x);
    else
        printf("elemento %d esta na posicao v[%d]", x, i);

    return 0;
}