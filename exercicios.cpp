#include <stdio.h>

int main() {
  int numero;

  // Exercício 1
  printf("Digite um número: ");
  scanf("%d", &numero);
  if (numero > 10) {
    printf("O número é maior que 10.\n");
  }

  // Exercício 2
  printf("Digite um número: ");
  scanf("%d", &numero);
  if (numero == 0) {
    printf("O número é zero.\n");
  }

  // Exercício 3
  printf("Digite um número: ");
  scanf("%d", &numero);
  if (numero < 0) {
    printf("O número é negativo.\n");
  } else {
    printf("O número é positivo ou zero.\n");
  }

  // Exercício 4
  printf("Digite um número: ");
  scanf("%d", &numero);
  if (numero % 2 == 0) {
    printf("O número é par.\n");
  } else {
    printf("O número é ímpar.\n");
  }

  // Exercício 5
  printf("Digite um número: ");
  scanf("%d", &numero);
  if (numero > 10) {
    printf("O número é maior que 10.\n");
  } else if (numero == 10) {
    printf("O número é igual a 10.\n");
  } else {
    printf("O número é menor que 10.\n");
  }

  // Exercício 6
  printf("Digite um número de 1 a 7 representando um dia da semana: ");
  scanf("%d", &numero);
  switch (numero) {
    case 1:
      printf("Domingo\n");
      break;
    case 2:
      printf("Segunda-feira\n");
      break;
    case 3:
      printf("Terça-feira\n");
      break;
    case 4:
      printf("Quarta-feira\n");
      break;
    case 5:
      printf("Quinta-feira\n");
      break;
    case 6:
      printf("Sexta-feira\n");
      break;
    case 7:
      printf("Sábado\n");
      break;
    default:
      printf("Número inválido.\n");
  }

  return 0;
}