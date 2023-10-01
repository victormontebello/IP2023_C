#include <stdio.h>

int main(){
    int j, i, n;
    scanf("%d", &n);
    if (n >= 2 && n <= 100){
        for (j = 1; j <= n; j++){
            for (i = j + 1; i <= n; i++){
                if (i != n){
                    printf("(%d,%d)-", j, i);
                }else{
                    printf("(%d,%d)\n", j, i);
                }
            }
        }
    }
    return 0;
}