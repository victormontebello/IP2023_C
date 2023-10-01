/*  Alunos(as):
    Matriculas: 
    prova sorteada (   )   de 1 a 5
*/ 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define PRO 100
#define CLI 100
#define FUN 100
#define VEN 100

typedef struct { long int cod_prod;
                          char nome_produto[60];
                          char marca[25];
                          float valor_unitario;
                          int quantidade;
                          char tipo_prod; //Cosmético, Eletrodoméstico, calçado e Roupas.
                          //outros se achar necessário
                       }Produto;

typedef struct {Produto prod[PRO];
                         int ult;
                         char data_atualizacao[11];
                         }Estoque;

typedef struct {int cpf; // cod_cliente
                         char nome_cliente[50];
                         char email[50];
                         char data_adm[11];
                         char endereco[100];
                         char telefone[15];
                         float valor_gasto;
                       }Cliente;
                       
typedef struct {Cliente cli[CLI];
                         int ult;
                        }Clientes;

typedef struct {int cod_emp;
                         char nome_func[50];
                         char email[50];
                         char data_adm[11];
                         char endereco[100];
                         char telefone[15];
                         char cargo[15];
                         char setor; //Cosmético, Eletrodoméstico, calçado e Roupas.
                         float salario;
                       }Funcionario;

typedef struct {Funcionario func[FUN];
                         int ult;
                         }RH;

typedef struct{long int cod_prod[100];
                        int cpf; //cod_cliente
                        float valor_venda;
                        char data_compra[11];
                        char tipo_pag; //Credito, Débito, Pix ou dinheiro 
                        int cod_emp; //codigo do vendedor
                        }Vendas;
typedef struct{ Vendas venda[VEN];
                          int ult;
                          float total_arrecadado;
                          }EmpresaEM;
     
 void inicializa_estoque(Estoque *e){
   e->ult = 0;
   printf("Entre com o dia de hoje\n");
   scanf("%[^\n]", e->data_atualizacao);
   getchar();
   
 }    
 
 void inicializa_clientes(Clientes *c){
    c->ult = 0;
 }
    
  void inicializa_RH(RH *r) {
     r->ult = 0;
  } 
  
  void inicializa_empresa(EmpresaEM *e) {
    e->ult = 0;
    e->total_arrecadado = 0.0;
  }
  void buscar_funcionario_por_codigo(RH *r, int codigo) {
    for (int i = 0; i < r->ult; i++) {
        if (r->func[i].cod_emp == codigo) {
            printf("Dados do Funcionário com Código %d:\n", codigo);
            printf("Nome: %s\n", r->func[i].nome_func);
            printf("Email: %s\n", r->func[i].email);
            printf("Data de Admissão: %s\n", r->func[i].data_adm);
            printf("Endereço: %s\n", r->func[i].endereco);
            printf("Telefone: %s\n", r->func[i].telefone);
            printf("Cargo: %s\n", r->func[i].cargo);
            printf("Setor: %c\n", r->func[i].setor);
            printf("Salário: %.2f\n", r->func[i].salario);
            printf("Total de Vendas: %.2f\n", r->func[i].total_vendas);
            return; // Found the employee, exit the function
        }
    }

    printf("Funcionário com código %d não encontrado.\n", codigo);
}
void relatorio_produtos_cosmeticos(Estoque *e) {
    printf("Relatório de Produtos do Setor Cosmético:\n");
    for (int i = 0; i < e->ult; i++) {
        if (e->prod[i].tipo_prod == 'C') { // 'C' representa o setor Cosmético
            printf("Código: %ld\n", e->prod[i].cod_prod);
            printf("Nome: %s\n", e->prod[i].nome_produto);
            printf("Quantidade: %d\n", e->prod[i].quantidade);
            printf("Valor Unitário: %.2f\n", e->prod[i].valor_unitario);
            printf("--------------------\n");
        }
    }
}
                          
 int main() {
   Produto P;
   Estoque E;
   Cliente c;
   Clientes C;
   Funcionario F;
   RH rh;
   Vendas V;
   EmpresaEM empresa;
   int op;
   
   inicializa_estoque(&E);
   inicializa_clientes(&C);
   inicializa_RH(&rh);
   inicializa_empresa(&empresa);
   do{
       // MENU();
        scanf("%d", &op);
        switch(op) {
           case 1:
              break;
           case 2:
               break;
           case 3:
           int codigo_funcionario;
    printf("Digite o código do funcionário: ");
    scanf("%d", &codigo_funcionario);
    buscar_funcionario_por_codigo(&rh, codigo_funcionario);
              break;
           
           case 4:relatorio_produtos_cosmeticos(&E);
              break;
        
        //...
        
        
          case 100: printf("obrigado por utilizar nosso produto\n");
              break;
        }   
   }while(op!=100);
   
 
 
 
 
 
 return 0;
 }
