#include <stdio.h>
#include <math.h>
#include <string.h>
#define MAX 2001

int main() {
  char st[MAX];
  int FA[5], FB[5], i, c;
  float dist;
  fgets(st, MAX, stdin);
  i=0;
  c=0;
  while((i<MAX)&&(st[i]!=0)){
       if(st[i]==';') 
          c++;
       i++;
     }
   if(c!=1) {
      printf("FORMATO INVALIDO!\n");
      return 0;
      }
   for(i=0; i<5; i++){
     FA[i] = 0;
     FB[i] = 0;
    }
    i=0;
    while(st[i]!=';'){
        switch (st[i]) {
            case 'a':
            case 'A':FA[0]++;
              break;
            case 'e':
            case 'E':FA[1]++;
              break;
            case 'i':
            case 'I':FA[2]++;
              break;
            case 'o':
            case 'O':FA[3]++;
              break;
            case 'u':
            case 'U':FA[4]++;
              break;
            }
            i++;
          }
          i++;
          while(st[i]!='\0'){
              switch (st[i]) {
            case 'a':
            case 'A':FB[0]++;
              break;
            case 'e':
            case 'E':FB[1]++;
              break;
            case 'i':
            case 'I':FB[2]++;
              break;
            case 'o':
            case 'O':FB[3]++;
              break;
            case 'u':
            case 'U':FB[4]++;
              break;
            }
            i++;
          }
          
     printf("(%d, %d, %d, %d, %d)\n",FA[0],FA[1],FA[2],FA[3],FA[4]);
     printf("(%d, %d, %d, %d, %d)\n",FB[0],FB[1],FB[2],FB[3],FB[4]);
     c=0;
     for(i=0; i<5; i++) {
		 c = c + (FA[i]-FB[i])*(FA[i]-FB[i]);
		}
	dist = sqrt(c);
    printf("%.2f\n", dist);
  
return 0;
}