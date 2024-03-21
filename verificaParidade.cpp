#include <iostream>

int main() {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("O número digitado é par.\n");
    }

    return 0;
}