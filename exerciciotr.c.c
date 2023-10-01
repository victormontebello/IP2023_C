#include <stdio.h>
#include <stdlib.h>

int main(){

    float a,b,c,ar,p;

    scanf("%f %f %f", &a, &b, &c);

    p = a+b+c;
    ar = ((a+b)*c)/2;

    if((a>b)&&(b>c)&&((b+c)>a)){
        printf("Perimetro = %.1f\n", p);

    }else if((a>c)&&(c>b)&&((b+c)>a)){
        printf("Perimetro = %.1f\n", p);

    }else if((b>c)&&(c>a)&&((a+c)>b)){
        printf("Perimetro = %.1f\n", p);

    }else if((b>a)&&(a>c)&&((a+c)>b)){
        printf("Perimetro = %.1f\n", p);

    }else if((c>a)&&(a>b)&&((b+a)>c)){
        printf("Perimetro = %.1f\n", p);

    }else if((c>b)&&(b>a)&&((a+b)>c)){
        printf("Perimetro = %.1f\n", p);

    }else
    printf("Area = %.1f\n", ar);

    return 0;
}