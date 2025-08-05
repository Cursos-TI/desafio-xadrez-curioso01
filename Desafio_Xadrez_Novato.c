#include <stdio.h>

int main() {
    // Simulação do movimento da Torre (5 casas para a direita)
    // Estrutura: for
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Simulação do movimento do Bispo (5 casas na diagonal cima-direita)
    // Estrutura: while
    printf("Movimento do Bispo (5 casas na diagonal Cima Direita):\n");
    int i = 1;
    while (i <= 5) {
        printf("Cima Direita\n");
        i++;
    }
    printf("\n");

    // Simulação do movimento da Rainha (8 casas para a esquerda)
    // Estrutura: do-while
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    int j = 1;
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= 8);

    return 0;
}