#include <stdio.h>

int main(){
    int a,b,c,d,det;
    scanf("%d %d", &a, &b);
    scanf("%d %d", &c, &d);
    det = a*d - b*c;
    printf("%d", det);
    
    return 0;
}