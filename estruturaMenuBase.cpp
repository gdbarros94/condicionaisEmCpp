#include <iostream>

int main() {
    int opcao;

    printf("1. Imprimir Olá\n");
    printf("2. Imprimir Tchau\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("Olá!\n");
    } else if (opcao == 2) {
        printf("Tchau!\n");
    } else {
        printf("Opção inválida!\n");
    }
}