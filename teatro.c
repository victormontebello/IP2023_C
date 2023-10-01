#include <stdio.h>
#define VI 0.05
#define G 200.00

int main() {
  int i, ni, mi, maiorig;
  float vingresso, vi, vf, lucro, custo, maiorl=-99999;
  scanf("%f", &vingresso);
  scanf("%f", &vi);
  scanf("%f", &vf);
  if(vf<vi)
    printf("INTERVALO INVALIDO.\n");
 else { i = vi;
        while(i<=vf) {
          if(i==vingresso)
            { custo = 200 + 120 * 0.05;
              lucro = vingresso*120 - custo;
              if(maiorl<lucro)
                {maiorl = lucro;
			     maiorig = 120;
			     mi = i;
			 }
              printf("V: %.2f, N: 120, L: %.2f\n",(float)i, lucro); 
            }
          else if(i<vingresso)
                 { ni = 120 + 25*(vingresso-i)/0.5;
                   custo = 200 + ni * 0.05;
                   lucro = i*ni - custo;
                    if(maiorl<lucro)
                      {maiorl = lucro;
			           maiorig = ni;
			           mi = i;
			          }
                   printf("V: %.2f, N: %d, L: %.2f\n",(float)i,ni, lucro);
                  }else {ni = 120 - 30*(i - vingresso)/0.5;
                         custo = 200 + ni * 0.05;
                         lucro = i*ni - custo;
                         if(maiorl<lucro)
                           {maiorl = lucro;
			                maiorig = ni;
			                mi = i;
			                }
                         printf("V: %.2f, N: %d, L: %.2f\n",(float)i,ni, lucro);
                       }
                       i++;
           }
           printf("Melhor valor final: %d\n",maiorig);
           printf("Lucro: %.2f\n",maiorl);
           printf("Numero de ingressos: %.2f\n", (float)mi);
      }
return 0;
}
  