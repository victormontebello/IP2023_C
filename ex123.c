#include <stdio.h>

int main(){
  int nl, nc, i, j, flag=1;
  scanf("%d %d",&nl, &nc);
  for(i=0; i<nl; i++){
	  if(i%2==0)
	    flag=1;
	   else flag = 0;
    for(j=0; j<nc-1;j++)
      if(flag){
        printf("%d ", flag);
        flag =0;
       }else {
              printf("%d ", flag);
              flag =1;
              }
        if(flag){
           printf("%d\n",flag);
           flag=0;
         }else { printf("%d\n",flag);
                 flag=1;
                }
       }
return 0;
}