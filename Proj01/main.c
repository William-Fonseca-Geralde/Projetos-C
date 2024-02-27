#include <stdio.h>

int main(int argc, char const *argv[]) {
  printf("Olá, Mundo\n");

  char nome[30];
  char sexo;
  int idade;
  float peso;

  printf("Digite o seu nome: ");
  scanf("%s", &nome);
  printf("Seu sexo: ");
  scanf("%s", &sexo);
  printf("Sua idade: ");
  scanf("%i", &idade);
  printf("E seu peso: ");
  scanf("%f", &peso);

  printf("\nNome: %s\nSexo: %c\nIdade: %i\nPeso: %.2f\n", nome, sexo, idade, peso);
  
  return 0;
}