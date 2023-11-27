#include <stdio.h>

// Função para trocar o conteúdo de duas variáveis
void trocarConteudo(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    // Declaração de duas variáveis inteiras
    int valor1, valor2;

    // Solicita ao usuário que insira os valores
    printf("Digite o valor para a variável 1: ");
    scanf("%d", &valor1);

    printf("Digite o valor para a variável 2: ");
    scanf("%d", &valor2);

    // Chama a função para trocar o conteúdo das variáveis
    trocarConteudo(&valor1, &valor2);

    // Exibe os valores após a troca
    printf("Valores após a troca:\n");
    printf("Variável 1: %d\n", valor1);
    printf("Variável 2: %d\n", valor2);

    return 0;
}