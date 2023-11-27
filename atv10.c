#include <stdio.h>

int main() {
    // Declaração do array de inteiros
    int meuArray[5];

    // Ponteiro para percorrer o array
    int *ptr = meuArray;

    // Solicita ao usuário que insira os valores no array
    printf("Digite 5 valores inteiros:\n");
    for (int i = 0; i < 5; ++i) {
        scanf("%d", ptr + i);
    }

    // Imprime o dobro de cada valor lido usando aritmética de ponteiros
    printf("\nO dobro de cada valor lido é:\n");
    for (int i = 0; i < 5; ++i) {
        printf("%d ", *(ptr + i) * 2);
    }

    return 0;
}