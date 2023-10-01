#include <stdio.h>

int main(){

int n100, n50, n10, m1, i,r;

    scanf("%d", &i);
    
    m1 = i%10;
    n100 =i/100;
    r = i%100;
    n50= r/50;
    r = r%50;
    n10 = r/10;
    
    printf("NOTAS DE 100 = %d\n", n100);
    printf("NOTAS DE 50 = %d\n", n50);
    printf("NOTAS DE 10 = %d\n", n10);
    printf("MOEDAS DE 1 = %d\n", m1);
    
    return 0; 
}    
    