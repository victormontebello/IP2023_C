#include <stdio.h>

int main(){

    double s;
    int n;

    scanf("%d", &n);

   while (n>0) {
    s=s+ (double)1/n;
    n--;
    }

        printf("%.6lf\n",s);
        
    return 0;
}