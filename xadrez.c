#include <stdio.h>

//Este código cria um tabuleiro de xadrez de 8x8 usando caracteres de espaço e # para representar as casas brancas e pretas, respectivamente. O tabuleiro é impresso no console.

void printChessBoard() {
    int i, j;
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            if ((i + j) % 2 == 0) {
                printf("  ");
            } else {
                printf("##");
            }
        }
        printf("\n");
    }
}

int main() {
    //Declaração de Variáveis
    int i ;
    char TORRE, BISPO, RAINHA;

    printChessBoard();

    //Torre
    for ("int i = 1"; i < 5; i++) {
                printf("Torre:\n", TORRE);
                printf("Direita\n", i);
            }

    //Bispo
    i = 1;
    while (i <= 5) {
                printf("Bispo:\n");
                printf ("Para cima e a direita\n");
                i++;
           }

    //Rainha
        i = 1;
       do {
                printf("Rainha:\n");
                printf(("Para cima e para esquerda\n"));
                 i++;
            } while (i <= 8);

    return 0;
}
