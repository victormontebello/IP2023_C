#include <stdio.h>

int main() {
    long int num1, num2, num3, num4,menor1, menor2, menor3, soma;
    
    scanf("%ld", &num1);
    scanf("%ld", &num2);
    scanf("%ld", &num3);
    scanf("%ld", &num4);

    
    if (num1 <= num2 && num1 <= num3 && num1 <= num4) {
        menor1 = num1;
        if (num2 <= num3 && num2 <= num4) {
            menor2 = num2;
            menor3 = (num3 <= num4) ? num3 : num4;
        } else if (num3 <= num2 && num3 <= num4) {
            menor2 = num3;
            menor3 = (num2 <= num4) ? num2 : num4;
        } else {
            menor2 = num4;
            menor3 = (num2 <= num3) ? num2 : num3;
        }
    } else if (num2 <= num1 && num2 <= num3 && num2 <= num4) {
        menor1 = num2;
        if (num1 <= num3 && num1 <= num4) {
            menor2 = num1;
            menor3 = (num3 <= num4) ? num3 : num4;
        } else if (num3 <= num1 && num3 <= num4) {
            menor2 = num3;
            menor3 = (num1 <= num4) ? num1 : num4;
        } else {
            menor2 = num4;
            menor3 = (num1 <= num3) ? num1 : num3;
        }
    } else if (num3 <= num1 && num3 <= num2 && num3 <= num4) {
        menor1 = num3;
        if (num1 <= num2 && num1 <= num4) {
            menor2 = num1;
            menor3 = (num2 <= num4) ? num2 : num4;
        } else if (num2 <= num1 && num2 <= num4) {
            menor2 = num2;
            menor3 = (num1 <= num4) ? num1 : num4;
        } else {
            menor2 = num4;
            menor3 = (num1 <= num2) ? num1 : num2;
        }
    } else {
        menor1 = num4;
        if (num1 <= num2 && num1 <= num3) {
            menor2 = num1;
            menor3 = (num2 <= num3) ? num2 : num3;
        } else if (num2 <= num1 && num2 <= num3) {
            menor2 = num2;
            menor3 = (num1 <= num3) ? num1 : num3;
        } else {
            menor2 = num3;
            menor3 = (num1 <= num2) ? num1 : num2;
        }
    }

    soma = menor1 + menor2 + menor3;

    
    printf("%ld\n", soma);

    return 0;
}

    
