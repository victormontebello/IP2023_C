#include <stdio.h>
#define N 1000

int main() {
  int M[N][N], n, i,j;
  scanf("%d", &n);
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
       scanf("%d", &M[i][j]);
  j=n-1;
  for(i=0; i<n; i++) { 
    printf("%d\n",M[i][j]);  
     j--;
   }  
       
 return 0;
 }
