#include <stdio.h>

int main() {
    // ------------------------------
    // MOVIMENTO DA TORRE
    // Simulação do movimento da Torre (5 casas para a direita)
    // Estrutura: for
    // ------------------------------
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // ------------------------------
    // MOVIMENTO DO BISPO
    // Simulação do movimento do Bispo (5 casas na diagonal cima-direita)
    // Estrutura: while
    // ------------------------------
    printf("Movimento do Bispo (5 casas na diagonal Cima Direita):\n");
    int i = 1;
    while (i <= 5) {
        printf("Cima Direita\n");
        i++;
    }
    printf("\n");

    // ------------------------------
    // MOVIMENTO DA RAINHA
    // Simulação do movimento da Rainha (8 casas para a esquerda)
    // Estrutura: do-while
    // ------------------------------
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    int j = 1;
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= 8);
    printf("\n");

    // ------------------------------
    // MOVIMENTO DO CAVALO
    // Simulação do movimento do cavalo (2 casas para Cima e 1 para Esquerda)
    // Estrutura: for, while.
    // ------------------------------
    printf("Movimento do Cavalo (2 casas para Cima e 1 para Esquerda):\n");

    // Suponha que vamos simular esse movimento 1 vez
    for (int m = 0; m < 1; m++) {  // loop externo com for 
        int passos = 0;

        // loop interno com while: 2 passos para cima.
        while (passos < 2) {
            printf("Cima\n");
            passos++;
        }

        // passo final: 1 passo para a esquerda
        printf("Esquerda\n");
    }

    return 0;
}
