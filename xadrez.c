#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    // Declaração das Variaveis

    int MOVIMENTOS_TORRE = 5;
    int MOVIMENTOS_BISPO = 5;
    int MOVIMENTOS_RAINHA = 8;

    printf("### Desafio ADS: Movimentando as Peças do Xadrez ###\n");
    printf("=====================================================\n\n");

    // --- 1. Movimento da Torre (usando loop 'for') ---    
    
    printf("--- Movimento da Torre (%d casas para a Direita) ---\n", MOVIMENTOS_TORRE);
    
    // A Torre se move 5 casas para a direita.  

    for (int i = 0; i < MOVIMENTOS_TORRE; i++) 
    {
        printf("Direita\n");
    }

    printf("\n"); // coloquei uma linha para o console ficar melhor para ler 

    // --- 2. Movimento do Bispo (usando loop 'while') --- 

    printf("--- Movimento do Bispo (%d casas na diagonal Cima-Direita) ---\n", MOVIMENTOS_BISPO);

    // O Bispo se move 5 casas na diagonal (cima e direita). 
    // vou usar o while aqui 

    int passos_bispo = 0;

    // O bloco de código só executa se a condição (passos_bispo < 5) for verdadeira.  
    while (passos_bispo < MOVIMENTOS_BISPO) {
        
        printf("Cima, Direita\n");

        //incrementado um contador para não ter loop infinito   
        passos_bispo++;
    }

    printf("\n"); // Adiciona uma linha em branco para ficar mais legivel como anteriormente  

    // --- 3. Movimento da Rainha (usando loop 'do-while') ---   

    printf("--- Movimento da Rainha (%d casas para a Esquerda) ---\n", MOVIMENTOS_RAINHA);

    // A Rainha se move 8 casas para a esquerda. 
    int passos_rainha = 0; // Variável de controle. 

    do {
        // Imprime a direção a cada casa percorrida. 
        printf("Esquerda\n");

        passos_rainha++;

    } while (passos_rainha < MOVIMENTOS_RAINHA); // Condição verificada no final. 

    printf("\n=====================================================\n");
    printf("Simulação concluída com sucesso!\n");

    // indicou que terminou sem erros :D 
    return 0; 
}
