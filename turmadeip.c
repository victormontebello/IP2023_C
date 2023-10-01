#include <stdio.h>
#define CH 128

int main() {
  unsigned int mat, ch;
  float p1, p2, p3, p4, p5, p6, p7, p8,e1,e2,e3,e4,e5,t,med, mp,me;
  
  scanf("%d %f %f %f %f %f %f %f %f %f %f %f %f %f %f %d",&mat,&p1,&p2,&p3,&p4,&p5,&p6,&p7,&p8, &e1,&e2,&e3,&e4,&e5,&t,&ch);
  
  while(mat!=-1) {
      
      mp = (p1+p2+p3+p4+p5+p6+p7+p8)/8.0;
      me = (e1+e2+e3+e4+e5)/5.0;
      med = mp*0.7 + 0.15*me + 0.15*t;
      printf("Matricula: %d, Nota Final: %.2f, Situacao Final: ",mat,med);
      if((med>5.9)&&(ch > (0.75*CH)))
         printf("APROVADO\n");
       else if((med<6)&&(ch>(0.75*CH)))
               printf("REPROVADO POR NOTA\n");
              else if((med>5.9)&&(ch<(0.75*CH)))
                      printf("REPROVADO POR FREQUENCIA\n");
                     else printf("REPROVADO POR NOTA E POR FREQUENCIA\n");
      
       scanf("%d %f %f %f %f %f %f %f %f %f %f %f %f %f %f %d",&mat,&p1,&p2,&p3,&p4,&p5,&p6,&p7,&p8, &e1,&e2,&e3,&e4,&e5,&t,&ch);
   }

return 0;
}

    