#include <stdio.h>
#define popular 1.00
#define arq 10.00
#define ger 5.00
#define cad 20.00

int main(){

    int n,i,pessoas;
    double perpop, perger, perarq, percad, arrecad;
    scanf("%d", &n);

    i=1;
    
    while(n--){
        scanf("%d %lf %lf %lf %lf", &pessoas, &perpop, &perger, &perarq, &percad);
        arrecad = pessoas*(perpop*popular + perger*ger + perarq*arq + percad*cad)/100;
        printf("A RENDA DO JOGO N. %d E = %.2lf\n", i++, arrecad);
    }

    return 0;
}