#include <stdio.h>
#include <string.h>

typedef struct livro {
  char nome_livro, data_criacao[10], autor;
  int num_pag;
} Livro;

typedef struct no {
  Livro livro;
  No *prox;
} *No;

No *inicio = NULL;

int main() {
  
  return 0;
}