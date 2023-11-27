#include <stdio.h>

// Função para encontrar o maior e o menor valor
void encontrarMaiorMenor(int *a, int *b) {
    if (*a < *b) {
        // Troca os valores se a for menor que b
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    // Agora, a contém o maior valor e b contém o menor valor
}

int main() {
    // Declaração de duas variáveis inteiras
    int valor1, valor2;

    // Solicita ao usuário que insira os valores
    printf("Digite o valor para a variável 1: ");
    scanf("%d", &valor1);

    printf("Digite o valor para a variável 2: ");
    scanf("%d", &valor2);

    // Chama a função para encontrar o maior e o menor valor
    encontrarMaiorMenor(&valor1, &valor2);

    // Exibe os valores após a função
    printf("Maior valor: %d\n", valor1);
    printf("Menor valor: %d\n", valor2);

    return 0;
}