#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct livro {
  char nome_livro, data_criacao[10], autor;
  int num_pag, nota; // a variável nota será determinada de 0 a 5
  bool status; // se for true: foi pedido empréstimo, se for false: está no estoque para empréstimo
} Livro;

typedef struct no {
  Livro livro;
  struct no *prox;
} No;

No *inicio = NULL;

int main() {
  int opcao;

  printf("***************Bem-Vindo à Livraria***************\n");
  printf("\t1 - Cadastrar novos livros;\n");
  printf("\t2 - Excluir livros;\n");
  printf("\t3 - Modificar livros;\n");
  printf("\t4 - Buscar livros;\n");
  printf("\t5 - Pedir empréstimo de livros;\n");
  printf("\t6 - Retorno de livros;\n");
  printf("\t0 - Sair do Programa\n");
  scanf("%i", opcao);

  switch (opcao)
  {
  case 1:
    
    break;
  case 2:
    
    break;
  case 3:
    
    break;
  case 4:
    
    break;
  case 5:
    
    break;
  case 6:
    
    break;
  case 0:

    break;
  default:
    printf("Digite algum número do sumário");
    break;
  }
  
  return 0;
}