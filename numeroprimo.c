#include <stdio.h>

int main() {
  int n, i, flag=0;
  scanf("%d", &n);
  
  for(i=2; i<=(n/2)+1; i++)
    if(n%i==0)
      flag=1;
  if(flag==0)
    printf("PRIMO\n");
   else printf("NAO PRIMO\n");
return 0;
}