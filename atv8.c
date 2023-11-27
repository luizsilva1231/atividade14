#include <stdio.h>

int main() {
    // Declaração e inicialização do array de float
    float meuArray[10] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};

    // Imprime o endereço de cada posição no array
    printf("Endereços no array:\n");
    for (int i = 0; i < 10; ++i) {
        printf("Posição %d: %p\n", i, (void*)&meuArray[i]);
    }

    return 0;
}