#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_HOSPEDE 100
#define ANDARES 4
#define QUARTOS_ANDAR 20 // Apenas numeros pares
#define PRE_COMUM 200
#define PRE_NATAL 350

// 1 pra ocupado, 0 pra desocupado
// 3 semanas X 4 andares X 20 quartos
int quartos_ocupados[3][ANDARES][QUARTOS_ANDAR];

// Definição da estrutura hospede
typedef struct {
  char nome[50];
  char email[100];
  char telefone[15];
  char quarto[8];
  int data;
} Hospede;

// Retorna o quarto do hóspede i
int convQuarto(Hospede hospedes[], int i) {
  char auxStr[4];

  auxStr[0] = hospedes[i].quarto[0];
  auxStr[1] = hospedes[i].quarto[1];
  auxStr[2] = hospedes[i].quarto[2];
  auxStr[3] = '\0';

  return atoi(auxStr);
}
// Retorna o dia de entrada do hóspede i

// Função para cadastrar um novo hospede na agenda estática
//OK
int cadastrarHospede(Hospede hospede[], int numHospedes) {
  int flag = 0;
  if (numHospedes >= MAX_HOSPEDE) {
    printf("O hotel está cheio. Não é possível cadastrar mais hospedes.\n");
    return numHospedes;
  }

  Hospede novoHospede;

  printf("Digite o nome do hospede: ");
  scanf(" %[^\n]", novoHospede.nome);

  printf("Digite o email do hospede: ");
  scanf(" %[^\n]", novoHospede.email);

  printf("Digite o telefone do hospede: ");
  scanf(" %[^\n]", novoHospede.telefone);

  /*
  printf("Digite o quarto do hospede: ");
  scanf(" %[^\n]", novoHospede.quarto);
  for(int i=0;i<3;i++)
      if(quartos_ocupados[hospede[i].data - 1][convQuarto(hospede, numHospedes) / 100 - 1]                   [convQuarto(hospede, numHospedes) % 100 - 1] == 1){
          printf("Quarto ocupado!");
      }
  */
  printf("Em qual data deseja reservar: \n");
  printf("1 - Natal\n2 - Ano Novo\n3 - Páscoa\n");
  
  scanf("%d", &novoHospede.data);

  while(flag == 0){
    printf("Digite o quarto do hospede: ");
    scanf(" %[^\n]", hospede[numHospedes].quarto);
    //printf("passage");
    if(quartos_ocupados[novoHospede.data - 1][convQuarto(hospede, numHospedes) / 100 - 1][convQuarto(hospede, numHospedes) % 100 - 1] == 1){
      printf("Quarto ocupado!\n");
    }else{
      quartos_ocupados[novoHospede.data - 1][convQuarto(hospede, numHospedes) / 100 - 1][convQuarto(hospede, numHospedes) % 100 - 1] = 1;
      flag = 1;
    }
  }
  
    /*
    for(int i=0;i<numHospedes;i++){
        if(quartos_ocupados[hospede[i].data - 1][convQuarto(hospede, numHospedes) / 100 - 1][convQuarto(hospede, numHospedes) % 100 - 1] == 1){
            printf("Quarto ocupado!");
            scanf("%d", &novoHospede.data);
        }
        else
          quartos_ocupados[novoHospede.data - 1][convQuarto(hospede, numHospedes) / 100 - 1]    [convQuarto(hospede, numHospedes) % 100 - 1] = 1;
    }
    */
  
  
  hospede[numHospedes] = novoHospede;
  
  printf("Hospede cadastrado com sucesso!\n");

  return numHospedes + 1;
}

// FUNÇÃO PARA PRECIFICAR ESTADIA:
//OK
void PrecoEstadia() {
  int data, preco;

  printf("1 - Natal\n2 - Ano Novo\n3 - Páscoa\n");
  printf("Em qual data deseja consultar o preço: ");
  scanf("%d", &data);

  switch (data) {
    case (1):
      preco = 7 * PRE_NATAL;
      break;
    case (2):
      preco = 7 * PRE_COMUM;
      break;
    case (3):
      preco = 7 * PRE_COMUM;
      break;
  }

  printf("O valor da estadia será: R$ %d.00\n", preco);
}

// Função para calcular os lucros em certo período
void calcularLucros(Hospede hospedes[], int numHospedes) {
  int lucroTotal = 0;
  int semana, precoEstadia, i, j;

  printf("Digite a semana que deseja calcular os lucros: \n");
  printf("1 - Semana do Natal: \n");
  printf("2 - Semana do Ano Novo: \n");
  printf("3 - Semana da Páscoa: \n");
  scanf("%d", &semana);

  precoEstadia = (semana == 1) ? PRE_NATAL : PRE_COMUM;
  
  for(i = 0; i < 4; i++){
    for(j = 0; j < 20; j++){
      lucroTotal = lucroTotal + quartos_ocupados[semana-1][i][j] * precoEstadia * 7;
    }
  }

  printf("O lucro total neste período é de: %d reais\n", lucroTotal);
}

// Função para exibir todos os hospedes cadastrados
//OK
void exibirHospedes(Hospede hospedes[], int numHospedes) {
  if (numHospedes == 0) {
    printf("Nenhum hospede cadastrado no hotel.\n");
    return;
  }

  printf("Hospedes cadastrados na agenda:\n");
  for (int i = 0; i < numHospedes; i++) {
    printf("Cliente %d:\n", i + 1);
    printf("Nome: %s\n", hospedes[i].nome);
    printf("Email: %s\n", hospedes[i].email);
    printf("Telefone: %s\n", hospedes[i].telefone);
    printf("Quarto: %s\n", hospedes[i].quarto);
    if (hospedes[i].data == 1) {
      printf("Semana do Natal!");
    } else if (hospedes[i].data == 2) {
      printf("Semana do Ano Novo!");
    }else{
      printf("Semana da Páscoa!");
    }

    printf("\n────────────────────\n");
    printf("\n");
  }
}

// Ordena os Hospedes pelo número do quarto
//OK
void sortHospedes(Hospede hospedes[], int numHospedes) {
  int n1, n2;
  Hospede aux;
  
  for (int i = 0; i < numHospedes - 1; i++) {
    for (int j = 0; j < numHospedes - 1 - i; j++) {
      if (hospedes[j].data > hospedes[j+1].data) {
        aux = hospedes[j];
        hospedes[j] = hospedes[j+1];
        hospedes[j+1] = aux;
      }
    }
  }

  for (int i = 0; i < numHospedes - 1; i++) {
    for (int j = 0; j < numHospedes - 1 - i; j++) {
      // Converte o número do quarto para int
      n1 = convQuarto(hospedes, j);
      n2 = convQuarto(hospedes, j + 1);

      if (n1 > n2) {
        aux = hospedes[j];
        hospedes[j] = hospedes[j + 1];
        hospedes[j + 1] = aux;
      }
    }
  }
}

// Função para exibir o status dos quartos
// OK
void exibirStatus(Hospede hospedes[], int numHospedes) {
  int numQuarto = 1;
  char data[12];
  char auxStr1[3];
  char auxStr2[5];
  int dia, mes, ano;
  int flag = 0;
  int auxData;

  printf("1 - Natal\n2 - Ano Novo\n3 - Páscoa\n");
  printf("Em qual data deseja verificar a ocupação: ");
  scanf("%d", &auxData);

  switch(auxData){
    case(1):
      printf("OCUPAÇÂO NO NATAL\n");
      break;
    case(2):
      printf("OCUPAÇÂO NO ANO NOVO\n");
      break;
    case(3):
      printf("OCUPAÇÂO NA PÁSCOA\n");
      break;
  }
  for (int i = 0; i < ANDARES; i++) {
    printf("%d° andar: \n", i + 1);

    for (int h = 0; h < 2; h++) {
      if (h == 0) {
        numQuarto = 1;
      }
      for (int j = 0; j < QUARTOS_ANDAR / 2; j++) {
        printf("┌");
        printf("─");
        printf("─");
        printf("─");
        printf("┐");
      }
      printf("\n");

      for (int j = 0; j < QUARTOS_ANDAR / 2; j++) {
        printf("│");
        printf("%d", (i + 1) * 100 + numQuarto);
        numQuarto += 2;
        printf("│");
      }
      printf("\n");

      if (h == 0) {
        numQuarto = 1;
      } else if (h == 1) {
        numQuarto = 2;
      }

      for (int j = 0; j < QUARTOS_ANDAR / 2; j++) {
        int quarto;

        printf("└");
        printf("─");

        if(quartos_ocupados[auxData-1][i][numQuarto-1] == 1){
          printf("X");
        }
        else{
          printf("O");
        }
        numQuarto+=2;

        printf("─");
        printf("┘");
      }
      printf("\n");
      numQuarto = 2;
    }
  }

  printf("\nOcupado: X\nLivre: O\n");
  printf("Pressione Enter para continuar ");

  char espera;
  getchar();
  scanf("%c", &espera);
}

int main() {
  Hospede agenda[MAX_HOSPEDE];
  int numHospedes = 0;
  char opcao;

  do {
    printf(
        "\n──────────────────────────────────────────────────────────────────────────────\nBem vindo ao GYN hotel, de que forma podemos ajudar?\n");
    printf("1 - Cadastrar novo hospede\n");
    printf("2 - Exibir hospedes cadastrados\n");
    printf("3 - Exibir status quartos\n");
    printf("4 - Calcular valor total da estadia\n");
    printf("5 - Calcular lucros\n");
    printf("0 - Sair\n");
    printf("Escolha uma opcao: ");
    scanf(" %c", &opcao);
    printf("\n───────────────────────────────────────────────────────────────────────────────\n");

    switch (opcao) {
    case '1':
      numHospedes = cadastrarHospede(agenda, numHospedes);
      break;
    case '2':
      sortHospedes(agenda, numHospedes);
      exibirHospedes(agenda, numHospedes);
      break;
    case '3':
      exibirStatus(agenda, numHospedes);
      break;
    case '4':
      PrecoEstadia();
      break;
    case '5':
      calcularLucros(agenda, numHospedes);
      break;
    case '0':
      printf("Saindo...\n");
      printf("───────────────────────────────────────────────────────────────────────────────\n");
      break;
    default:
      printf("Opção inválida! Tente novamente.\n");
    }

    printf("\n");
  } while (opcao != '0');

  return 0;
}
