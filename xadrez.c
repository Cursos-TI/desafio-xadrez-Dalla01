#include <stdio.h>

int main() {

    /* ================================
       MOVIMENTO DA TORRE (for)
       Torre anda em linha reta.
       Simulando 5 casas para a direita
       ================================ */
    
    int casas_torre = 5;

    printf("Movimento da Torre:\n");

    for (int i = 1; i <= casas_torre; i++) {
        printf("Direita\n");
    }

    printf("\n");


    /* ================================
       MOVIMENTO DO BISPO (while)
       Bispo anda na diagonal.
       Simulando 5 casas para cima e direita
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
       Rainha anda em todas as direções.
       Simulando 8 casas para a esquerda
       ================================ */

    int casas_rainha = 8;
    int contador_rainha = 1;

    printf("Movimento da Rainha:\n");

    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha <= casas_rainha);

    return 0;
}
