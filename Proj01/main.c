#include <stdio.h>

int main() {
  printf("Olá, Mundo\n");

  char nome[30], sexo[2];
  int idade;
  float peso, tam;

  
  printf("Digite o seu nome: ");
  scanf("%s", &nome);
  printf("Digite sua idade: ");
  scanf("%i", &idade);
  printf("Digite seu peso: ");
  scanf("%f", &peso);
  printf("Digite seu gênero: ");
  scanf("%s", &sexo);
  printf("Digite seu Tamanho: ");
  scanf("%f", &tam);

  printf("\nNome: %s \nIdade: %i \nPeso: %.2f \nGênero: %s \nTamanho: %.2f", nome, idade, peso, sexo, tam);
  
  return 0;
}