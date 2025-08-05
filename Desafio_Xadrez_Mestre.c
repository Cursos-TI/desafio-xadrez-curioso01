#include <stdio.h>

// Função recursiva para movimentar a Torre (horizontalmente para a Direita)
void moverTorre(int casasRestantes) {
    if (casasRestantes <= 0) return; // Caso base: não há mais casas a mover
    printf("Direita\n");             // Imprime o movimento
    moverTorre(casasRestantes - 1);  // Chamada recursiva
}

// Função recursiva para movimentar a Rainha (horizontalmente para a Esquerda)
void moverRainha(int casasRestantes) {
    if (casasRestantes <= 0) return; // Caso base
    printf("Esquerda\n");            // Imprime o movimento
    moverRainha(casasRestantes - 1); // Chamada recursiva
}

// Função recursiva com loop aninhado para o Bispo (diagonal para cima e à direita)
void moverBispo(int casasRestantes) {
    if (casasRestantes <= 0) return; // Caso base
    for (int v = 0; v < 1; v++) {         // Loop externo simula o movimento vertical
        for (int h = 0; h < 1; h++) {     // Loop interno simula o movimento horizontal
            printf("Cima Direita\n");     // Imprime o movimento diagonal
        }
    }
    moverBispo(casasRestantes - 1); // Chamada recursiva
}

// Função para movimentar o Cavalo (duas casas para cima, uma para direita)
void moverCavalo(int movimentos) {
    // Loop externo para simular múltiplos movimentos em "L"
    for (int m = 0; m < movimentos; m++) {
        int cima = 0;
        int direita = 0;

        // Loop interno aninhado com múltiplas variáveis e controle de fluxo
        for (int i = 0; i < 3; i++) {
            if (i < 2) {
                cima++;
                printf("Cima\n");      // Movimento vertical
                if (cima == 2) continue; // Se já subiu duas vezes, vai para a próxima etapa
            } else {
                direita++;
                if (direita == 1) {
                    printf("Direita\n"); // Movimento final para a direita
                    break; // Encerra o loop atual após o movimento completo
                }
            }
        }
    }
}

int main() {
    // --------------------------------------------
    // MOVIMENTO DA TORRE (recursivo)
    // --------------------------------------------
    printf("Movimento da Torre (5 casas para a Direita):\n");
    moverTorre(5); // Chamada da função recursiva
    printf("\n");

    // --------------------------------------------
    // MOVIMENTO DO BISPO (recursivo + loops aninhados)
    // --------------------------------------------
    printf("Movimento do Bispo (5 casas na diagonal Cima Direita):\n");
    moverBispo(5); // Chamada da função recursiva
    printf("\n");

    // --------------------------------------------
    // MOVIMENTO DA RAINHA (recursivo)
    // --------------------------------------------
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    moverRainha(8); // Chamada da função recursiva
    printf("\n");

    // --------------------------------------------
    // MOVIMENTO DO CAVALO (loops complexos)
    // --------------------------------------------
    printf("Movimento do Cavalo (2 casas para Cima e 1 para Direita):\n");
    moverCavalo(1); // Simula 1 movimento completo em "L"
    printf("\n");

    return 0;
}
