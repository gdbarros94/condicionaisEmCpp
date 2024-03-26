#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cstring>
int main() {
    srand(time(0)); // Seed para geração de números aleatórios

    // Exercício 1 - Verificação de Número Par
    int num1;
    printf("Digite um número inteiro: ");
    scanf("%d", &num1);
    if (num1 % 2 == 0) {
        printf("Par\n");
    } else {
        printf("Ímpar\n");
    }

    // Exercício 2 - Verificação de Número Positivo
    int num2;
    printf("Digite outro número inteiro: ");
    scanf("%d", &num2);
    if (num2 > 0) {
        printf("Positivo\n");
    } else {
        printf("Negativo\n");
    }

    // Exercício 3 - Verificação de Número Múltiplo de 3 e 5
    int num3;
    printf("Digite mais um número inteiro: ");
    scanf("%d", &num3);
    if (num3 % 3 == 0 && num3 % 5 == 0) {
        printf("É múltiplo de 3 e 5\n");
    } else {
        printf("Não é múltiplo de 3 e 5\n");
    }

    // Exercício 4 - Classificação de Triângulos
    int lado1, lado2, lado3;
    printf("Digite os três lados de um triângulo: ");
    scanf("%d %d %d", &lado1, &lado2, &lado3);
    if (lado1 == lado2 && lado2 == lado3) {
        printf("Equilátero\n");
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        printf("Isósceles\n");
    } else {
        printf("Escaleno\n");
    }

    // Exercício 5 - Calculadora Simples
    float num4, num5, resultado;
    char operador;
    printf("Digite dois números e uma operação (+, -, *, /): ");
    scanf("%f %f %c", &num4, &num5, &operador);
    switch (operador) {
        case '+':
            resultado = num4 + num5;
            break;
        case '-':
            resultado = num4 - num5;
            break;
        case '*':
            resultado = num4 * num5;
            break;
        case '/':
            resultado = num4 / num5;
            break;
        default:
            printf("Operador inválido\n");
            return 1;
    }
    printf("Resultado: %.2f\n", resultado);

    // Exercício 6 - Verificação de Ano Bissexto
    int ano;
    printf("Digite um ano: ");
    scanf("%d", &ano);
    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
        printf("Ano bissexto\n");
    } else {
        printf("Não é ano bissexto\n");
    }

    // Exercício 7 - Conversão de Temperatura
    float temperatura;
    char escolha;
    printf("Deseja converter de Celsius para Fahrenheit (C) ou de Fahrenheit para Celsius (F)? ");
    scanf(" %c", &escolha);
    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);
    if (escolha == 'C' || escolha == 'c') {
        temperatura = (temperatura * 1.8) + 32;
        printf("Temperatura em Fahrenheit: %.2f\n", temperatura);
    } else if (escolha == 'F' || escolha == 'f') {
        temperatura = (temperatura - 32) / 1.8;
        printf("Temperatura em Celsius: %.2f\n", temperatura);
    } else {
        printf("Escolha inválida\n");
        return 1;
    }

    // Exercício 8 - Verificação de Número Primo
    int num6;
    printf("Digite um número inteiro: ");
    scanf("%d", &num6);
    int divisores = 0;
    for (int i = 1; i <= num6; ++i) {
        if (num6 % i == 0) {
            divisores++;
        }
    }
    if (divisores == 2) {
        printf("Primo\n");
    } else {
        printf("Não primo\n");
    }

    // Exercício 9 - Cálculo de Média Ponderada
    float nota1, nota2, nota3, peso1, peso2, peso3, media;
    printf("Digite as três notas e seus respectivos pesos: ");
    scanf("%f %f %f %f %f %f", &nota1, &peso1, &nota2, &peso2, &nota3, &peso3);
    media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);
    printf("Média ponderada: %.2f\n", media);

    // Exercício 10 - Verificação de Palíndromo
    char palavra[100];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    int tamanho = strlen(palavra);
    bool palindromo = true;
    for (int i = 0; i < tamanho / 2; ++i) {
        if (palavra[i] != palavra[tamanho - i - 1]) {
            palindromo = false;
            break;
        }
    }
    if (palindromo) {
        printf("Palíndromo\n");
    } else {
        printf("Não é palíndromo\n");
    }

    // Exercício 11 - Calculadora de IMC
    float altura, peso, imc;
    printf("Digite sua altura (em metros) e seu peso (em quilogramas): ");
    scanf("%f %f", &altura, &peso);
    imc = peso / (altura * altura);
    printf("IMC: %.2f - ", imc);
    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if (imc < 25) {
        printf("Peso normal\n");
    } else if (imc < 30) {
        printf("Sobrepeso\n");
    } else {
        printf("Obesidade\n");
    }

    // Exercício 12 - Identificação de Quadrante de um Ponto no Plano Cartesiano
    int x, y;
    printf("Digite as coordenadas (x, y) de um ponto: ");
    scanf("%d %d", &x, &y);
    if (x > 0 && y > 0) {
        printf("Está no primeiro quadrante\n");
    } else if (x < 0 && y > 0) {
        printf("Está no segundo quadrante\n");
    } else if (x < 0 && y < 0) {
        printf("Está no terceiro quadrante\n");
    } else if (x > 0 && y < 0) {
        printf("Está no quarto quadrante\n");
    } else if (x == 0 && y != 0) {
        printf("Está sobre o eixo das ordenadas\n");
    } else if (y == 0 && x != 0) {
        printf("Está sobre o eixo das abscissas\n");
    } else {
        printf("Está na origem\n");
    }

    // Exercício 13 - Validação de Número de Cartão de Crédito
    long long int numCartao;
    printf("Digite o número do cartão de crédito: ");
    scanf("%lld", &numCartao);
    int numDigitos = 0;
    long long int temp = numCartao;
    while (temp != 0) {
        temp /= 10;
        numDigitos++;
    }
    if (numDigitos != 16) {
        printf("Número inválido\n");
        return 1;
    }
    temp = numCartao;
    int soma = 0;
    bool segundoDigito = false;
    while (temp != 0) {
        int digito = temp % 10;
        if (segundoDigito) {
            digito *= 2;
            if (digito > 9) {
                digito -= 9;
            }
        }
        soma += digito;
        segundoDigito = !segundoDigito;
        temp /= 10;
    }
    if (soma % 10 == 0) {
        printf("Válido\n");
    } else {
        printf("Inválido\n");
    }

    // Exercício 14 - Jogo de Adivinhação
    int numAleatorio = rand() % 100 + 1;
    int palpite;
    printf("Adivinhe o número entre 1 e 100: ");
    do {
        scanf("%d", &palpite);
        if (palpite < numAleatorio) {
            printf("Palpite baixo, tente novamente: ");
        } else if (palpite > numAleatorio) {
            printf("Palpite alto, tente novamente: ");
        }
    } while (palpite != numAleatorio);
    printf("Parabéns! Você acertou.\n");

    // Exercício 15 - Cálculo de Fatorial
    int numFatorial;
    long long int fatorial = 1;
    printf("Digite um número inteiro positivo para calcular o fatorial: ");
    scanf("%d", &numFatorial);
    if (numFatorial < 0) {
        printf("Número inválido\n");
        return 1;
    }
    for (int i = 1; i <= numFatorial; ++i) {
        fatorial *= i;
    }
    printf("Fatorial de %d: %lld\n", numFatorial, fatorial);

    return 0;
}