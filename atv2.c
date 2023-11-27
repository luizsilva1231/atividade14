#include <stdio.h>

int main() {
    // Declaração de duas variáveis inteiras
    int var1 = 42;
    int var2 = 73;

    // Obtém os endereços das variáveis
    int *ptrVar1 = &var1;
    int *ptrVar2 = &var2;

    // Compara os endereços e exibe o maior
    if (ptrVar1 > ptrVar2) {
        printf("O maior endereço é: %p\n", (void*)ptrVar1);
    } else if (ptrVar1 < ptrVar2) {
        printf("O maior endereço é: %p\n", (void*)ptrVar2);
    } else {
        printf("Os endereços são iguais: %p\n", (void*)ptrVar1);
    }

    return 0;
}