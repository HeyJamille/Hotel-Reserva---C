#include <stdio.h>
#include <stdlib.h>


int pageInitial() {
  int opcao, qntQuartos, dataNasc, cpf;
  char nome[100];

  printf("====================================================================="
         "====== \n");
  printf("Seja muito bem vindo a nossa central de reservas. Por favor, escolha "
         "uma opção: \n\n");

  printf("1 - Verificar a disponibilidade de quartos. \n");
  printf("2 - Fazer uma reserva. \n");
  printf("3 - Cancelar uma reserva. \n");
  printf("4 - Verificar a disponibilidade de quartos. \n");
  printf("5 - Solicitar serviço adicional. \n\n");

  printf("Opção: ");
  scanf("%d", &opcao);
  getchar();
  
  switch(opcao) {
    case 1: 
      printf("\n=========================================================================== \n");
      printf("Possui %d quartos disponíveis para reserva.", qntQuartos);
      printf("\nDeseja visualizar mais detalhes de algum quarto? \n1 - Sim \n2 - Não");
      printf("\n");
      scanf("%d", &opcao);

      if(opcao == 1) {
        
      } else {
        
      }
      break;
    case 2: 
      printf("\n===================== Fazer uma reserva ========================\n");
      printf("Nome: ");
      fgets(nome, 100, stdin);
      
      printf("CPF: ");
      scanf("%d", &cpf);
      getchar();
      
      printf("Data de Nascimento: ");
      scanf("%d", &dataNasc);
      getchar();
      
      break;
  }
}
