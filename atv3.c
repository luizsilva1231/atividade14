#include <stdio.h>

int main() {
    // Declaração de duas variáveis inteiras
    int var1, var2;

    // Solicita ao usuário que insira os valores
    printf("Digite o valor para a variável 1: ");
    scanf("%d", &var1);

    printf("Digite o valor para a variável 2: ");
    scanf("%d", &var2);

    // Obtém os endereços das variáveis
    int *ptrVar1 = &var1;
    int *ptrVar2 = &var2;

    // Compara os endereços e exibe o conteúdo do maior endereço
    if (ptrVar1 > ptrVar2) {
        printf("Conteúdo do maior endereço (%p): %d\n", (void*)ptrVar1, *ptrVar1);
    } else if (ptrVar1 < ptrVar2) {
        printf("Conteúdo do maior endereço (%p): %d\n", (void*)ptrVar2, *ptrVar2);
    } else {
        printf("Os endereços são iguais: %p\n", (void*)ptrVar1);
    }

    return 0;
}