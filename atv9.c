#include <stdio.h>

int main() {
    // Declaração e inicialização da matriz de inteiros
    int minhaMatriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Imprime o endereço de cada posição na matriz
    printf("Endereços na matriz:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("Posição [%d][%d]: %p\n", i, j, (void*)&minhaMatriz[i][j]);
        }
    }

    return 0;
}
