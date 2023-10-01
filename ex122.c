#include <stdio.h>
#define N 10

int main(){
  int mat[N][N], nl, nc, i,j;
  do{scanf("%d",&nl);
     }while((nl<1)||(nl>10));
   
  do{scanf("%d",&nc);
     }while((nc<1)||(nc>10));
     
  for(i=0;i<nl;i++)
     for(j=0;j<nc; j++)
       scanf("%d",&mat[i][j]);
  
   for(i=0;i<nl;i++){
     printf("linha %d: ",i+1);
     for(j=0;j<nc-1; j++)
       printf("%d,",mat[i][j]);
     printf("%d\n",mat[i][j]);
    }
 return 0;
 }
