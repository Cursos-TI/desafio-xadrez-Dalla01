#include <stdio.h>

/* =========================================================
   FUNÇÕES RECURSIVAS (Torre, Rainha e Bispo)
   ========================================================= */

/* Torre: 5 casas para a direita (recursivo) */
void mover_torre_direita_rec(int casas) {
    if (casas <= 0) return;          // caso base
    printf("Direita\n");             // imprime 1 passo
    mover_torre_direita_rec(casas - 1); // recursão
}

/* Rainha: 8 casas para a esquerda (recursivo) */
void mover_rainha_esquerda_rec(int casas) {
    if (casas <= 0) return;          
    printf("Esquerda\n");
    mover_rainha_esquerda_rec(casas - 1);
}

/*
  Bispo: recursivo + loops aninhados
  - movimento diagonal "Cima + Direita"
  - requisito: loop externo = vertical, interno = horizontal
  Ideia:
    Para cada "nível" da recursão, fazemos 1 passo vertical (externo)
    e 1 passo horizontal (interno), imprimindo Cima e Direita em linhas separadas.
*/
void mover_bispo_diag_rec_com_loops(int casas) {
    if (casas <= 0) return; // caso base

    /* Loop externo: vertical (1 passo "Cima") */
    for (int v = 0; v < 1; v++) {
        printf("Cima\n");

        /* Loop interno: horizontal (1 passo "Direita") */
        for (int h = 0; h < 1; h++) {
            printf("Direita\n");
        }
    }

    mover_bispo_diag_rec_com_loops(casas - 1);
}

/* =========================================================
   MAIN
   ========================================================= */
int main() {

    /* Valores definidos diretamente no código (requisito) */
    const int CASAS_TORRE  = 5;
    const int CASAS_BISPO  = 5;
    const int CASAS_RAINHA = 8;

    /* ================================
       TORRE (recursividade)
       ================================ */
    printf("Movimento da Torre:\n");
    mover_torre_direita_rec(CASAS_TORRE);
    printf("\n");


    /* ================================
       BISPO (recursividade + loops aninhados)
       Externo vertical, interno horizontal
       ================================ */
    printf("Movimento do Bispo:\n");
    mover_bispo_diag_rec_com_loops(CASAS_BISPO);
    printf("\n");


    /* ================================
       RAINHA (recursividade)
       ================================ */
    printf("Movimento da Rainha:\n");
    mover_rainha_esquerda_rec(CASAS_RAINHA);
    printf("\n");


    /* ================================
       CAVALO (loops complexos)
       Agora: 2 para Cima e 1 para Direita (em "L")
       - loops aninhados
       - múltiplas variáveis/condições
       - usando continue e break
       ================================ */

    printf("Movimento do Cavalo:\n");

    const int CIMA = 2;
    const int DIREITA = 1;

    /*
      Vamos controlar o "L" em duas fases:
        Fase 1: subir 2 casas
        Fase 2: ir 1 casa à direita
      Para deixar "complexo" como pedido:
        - loop externo controla a fase (0 = vertical, 1 = horizontal)
        - loop interno controla o passo dentro da fase
        - usamos break/continue para controlar fluxo
    */
    for (int fase = 0; fase < 2; fase++) {

        int passos = (fase == 0) ? CIMA : DIREITA;

        /* Loop interno com múltiplas variáveis/condições */
        for (int i = 0, feitos = 0; i < 10; i++) {
            /* i é um "contador de tentativa", feitos é o que realmente executamos */

            if (feitos >= passos) {
                break; // já fizemos os passos necessários nesta fase
            }

            /* Exemplo de condição para demonstrar continue:
               - se i for ímpar, "pula" esta iteração (não executa passo)
               Isso não muda o resultado final, só deixa o loop mais "controlado".
            */
            if (i % 2 == 1) {
                continue;
            }

            /* Executa o passo da fase */
            if (fase == 0) {
                printf("Cima\n");
            } else {
                printf("Direita\n");
            }

            feitos++; // conta um passo real
        }
    }

    return 0;
}
