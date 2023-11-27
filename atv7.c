#include <stdio.h>

// Função para calcular a soma de A e B e armazenar o resultado em A
void calcularSoma(int *a, int b) {
    *a = *a + b;
}

int main() {
    // Declaração de duas variáveis inteiras
    int valorA, valorB;

    // Solicita ao usuário que insira os valores
    printf("Digite o valor para a variável A: ");
    scanf("%d", &valorA);

    printf("Digite o valor para a variável B: ");
    scanf("%d", &valorB);

    // Chama a função para calcular a soma e modificar o valor de A
    calcularSoma(&valorA, valorB);

    // Exibe os valores de A e B após a chamada da função
    printf("Valor de A após a soma: %d\n", valorA);
    printf("Valor de B: %d\n", valorB);

    return 0;
}