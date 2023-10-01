#include <stdio.h>
#include <string.h>

int main(){
    long int n, i, ii, size;
    char txt[1001], aux;
    scanf("%ld", &n);
    getchar();
    for (i = 0; i < n; i++){
        scanf("%[^\n]", txt);
        getchar();
        size = strlen(txt);
        for (ii = 0; ii < size; ii++){
            if (txt[ii] >= 65 && txt[ii] <= 90 || txt[ii] >= 97 && txt[ii] <= 122 || txt[ii] >= 48 && txt[ii] <= 57){
                txt[ii] += 3;
            }
        }
        for (ii = 0; ii < size; ii++){
            if (ii % 2 == 0 && ii != (size - 1)){
                aux = txt[ii];
                txt[ii] = txt[ii + 1];
                txt[ii + 1] = aux;
            }
        }
        for (ii = 0; ii < size; ii++){
            if (txt[ii] == '+'){
                txt[ii] = ' ';
            }
            else if (txt[ii] == ' '){
                txt[ii] = '+';
            }
        }
        printf("%s\n", txt);

    }
    return 0;
}