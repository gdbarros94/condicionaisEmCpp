#include <iostream>

int main() {
    float nota;

    printf("Digite sua nota: ");
    scanf("%f", &nota);

    if (nota >= 7.0) {
        printf("Você foi aprovado!\n");
    } else if (nota >= 5.0) {
        printf("Você está em recuperação.\n");
    } else {
        printf("Você foi reprovado.\n");
    }

    return 0;
}