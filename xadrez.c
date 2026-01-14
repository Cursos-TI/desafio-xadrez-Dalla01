#include <stdio.h>

int main() {

    /* ================================
       MOVIMENTO DA TORRE (for)
       ================================ */
    
    int casas_torre = 5;

    printf("Movimento da Torre:\n");

    for (int i = 1; i <= casas_torre; i++) {
        printf("Direita\n");
    }

    printf("\n");


    /* ================================
       MOVIMENTO DO BISPO (while)
       ================================ */

    int casas_bispo = 5;
    int contador_bispo = 1;

    printf("Movimento do Bispo:\n");

    while (contador_bispo <= casas_bispo) {
        printf("Cima, Direita\n");
        contador_bispo++;
    }

    printf("\n");


    /* ================================
       MOVIMENTO DA RAINHA (do-while)
       ================================ */

    int casas_rainha = 8;
    int contador_rainha = 1;

    printf("Movimento da Rainha:\n");

    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha <= casas_rainha);

    printf("\n");


    /* ================================
       MOVIMENTO DO CAVALO
       Loop aninhado (for + while)
       2 casas para baixo
       1 casa para a esquerda
       ================================ */

    int casas_baixo = 2;
    int casas_esquerda = 1;

    printf("Movimento do Cavalo:\n");

    /* Primeiro movimento: 2 casas para baixo */
    for (int i = 1; i <= casas_baixo; i++) {
        printf("Baixo\n");
    }

    /* Segundo movimento: 1 casa para a esquerda */
    int contador_esquerda = 1;
    while (contador_esquerda <= casas_esquerda) {
        printf("Esquerda\n");
        contador_esquerda++;
    }

    return 0;
}
