#include <stdio.h>

// Função para calcular a soma do dobro dos valores e atualizar as variáveis
int somaDobro(int *a, int *b) {
    // Calcula a soma do dobro dos valores
    int resultado = 2 * (*a) + 2 * (*b);

    // Atualiza as variáveis com o dobro de cada valor
    *a = 2 * (*a);
    *b = 2 * (*b);

    // Retorna a soma do dobro dos valores
    return resultado;
}

int main() {
    // Declaração de duas variáveis inteiras
    int valor1, valor2;

    // Solicita ao usuário que insira os valores
    printf("Digite o valor para a variável 1: ");
    scanf("%d", &valor1);

    printf("Digite o valor para a variável 2: ");
    scanf("%d", &valor2);

    // Chama a função para calcular a soma do dobro e atualizar as variáveis
    int resultado = somaDobro(&valor1, &valor2);

    // Exibe os valores atualizados e a soma do dobro
    printf("Dobro da variável 1: %d\n", valor1);
    printf("Dobro da variável 2: %d\n", valor2);
    printf("Soma do dobro dos valores: %d\n", resultado);

    return 0;
}