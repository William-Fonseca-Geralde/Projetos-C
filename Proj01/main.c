#include <stdio.h>
#include <string.h>

int main() {
  printf("Olá, Mundo\n");

  char nome[30], sexo;
  int idade;
  float peso, tam;

  
  printf("Digite o seu nome: ");
  scanf("%s", &nome);
  printf("Digite seu gênero: ");
  scanf(" %*c", &sexo);
  printf("Digite sua idade: ");
  scanf("%i", &idade);
  printf("Digite seu peso: ");
  scanf("%f", &peso);
  printf("Digite seu Tamanho: ");
  scanf("%f", &tam);

  printf("\nNome: %s \nIdade: %i \nPeso: %.2f \nGênero: %c \nTamanho: %.2f", nome, idade, peso, sexo, tam);
  
  return 0;
}