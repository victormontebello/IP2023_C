#include <stdio.h>

int main(){

    double fah, c;
    int n,i=0;
    scanf("%d", &n);

    while(i<n){
        scanf("%lf", &fah);
        c = 5.0*(fah-32.0)/9.0;
        printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", fah, c);
        i++;
    }
    return 0;
}