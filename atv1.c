#include <stdio.h>

int main() {
    // Declaração das variáveis
    int inteiro = 10;
    float real = 3.14;
    char caractere = 'A';

    // Declaração dos ponteiros
    int *ptrInteiro;
    float *ptrReal;
    char *ptrCaractere;

    // Associação das variáveis aos ponteiros
    ptrInteiro = &inteiro;
    ptrReal = &real;
    ptrCaractere = &caractere;

    // Imprime os valores iniciais das variáveis
    printf("Valores iniciais:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);

    // Modifica os valores através dos ponteiros
    *ptrInteiro = 20;
    *ptrReal = 2.718;
    *ptrCaractere = 'B';

    // Imprime os valores após a modificação
    printf("\nValores após a modificação:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);

    return 0;
}