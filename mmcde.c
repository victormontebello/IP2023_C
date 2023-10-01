#include <stdio.h>

int main(){
    int n1, n2, n3, mmc = 1;
    scanf("%d %d %d", &n1, &n2, &n3);

    while (n1 % 2 == 0 || n2 % 2 == 0 || n3 % 2 == 0)
    {
        printf("%d %d %d: 2\n", n1, n2, n3);
        mmc *= 2;
        if (n1 % 2 == 0)
        {
            n1 /= 2;
        }
            if (n2 % 2 == 0)
            {
            n2 /= 2;
            }
                if (n3 % 2 == 0)
                {
                n3 /= 2;
                }
    }
    while (n1 % 3 == 0 || n2 % 3 == 0 || n3 % 3 == 0){
        printf("%d %d %d: 3\n", n1, n2, n3);
        mmc *= 3;
        if (n1 % 3 == 0)
        {
            n1 /= 3;
        }
            if (n2 % 3 == 0)
            {
            n2 /= 3;
            }
                if (n3 % 3 == 0)
                {
                n3 /= 3;
                }
    }
    while (n1 % 5 == 0 || n2 % 5 == 0 || n3 % 5 == 0){
        printf("%d %d %d: 5\n", n1, n2, n3);
        mmc *= 5;
        if (n1 % 5 == 0)
        {
        n1 /= 5;
        }
            if (n2 % 5 == 0)
            {
            n2 /= 5;
            }
                if (n3 % 5 == 0)
                {
                n3 /= 5;
                }
    }
    while (n1 % 7 == 0 || n2 % 7 == 0 || n3 % 7 == 0){
        printf("%d %d %d: 7\n", n1, n2, n3);
        mmc *= 7;
        if (n1 % 7 == 0)
        {
        n1 /= 7;
        }
            if (n2 % 7 == 0)
            {
            n2 /= 7;
            }
                if (n3 % 7 == 0)
                {
                n3 /= 7;
                }
    }
    printf("MMC: %d\n", mmc);
    return 0;
}
