
#include <stdio.h>

/* Constantes para movimentos */ 
#define BISPO_MOV 5
#define TORRE_MOV 5
#define RAINHA_MOV 8

int main() {
    int i; /* variável de controle */ 

    /* Movimentação do Bispo (Diagonal Superior Direita) */ 
    printf("Movimento do Bispo:\n");
    for (i = 0; i < BISPO_MOV; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    printf("\n");

    /* Movimentação da Torre (Somente para a Direita) */
    printf("Movimento da Torre:\n");
    i = 0;
    while (i < TORRE_MOV) {
        printf("Direita\n");
        i++;
    }

    printf("\n");

    /* Movimentação da Rainha (Somente para a Esquerda) */
    printf("Movimento da Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < RAINHA_MOV);
 
    return 0;
}