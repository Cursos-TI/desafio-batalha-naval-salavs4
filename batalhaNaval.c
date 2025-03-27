#include <stdio.h>

int main() {
    // Estabelece o tabuleiro com casas sendo o 0
    int tabuleiro[10][10] = {0};

    int navio_horizontal = 3; // Posicionando o navio na horizontal
    for (int coluna = 6; coluna <= 8; coluna++) {
        tabuleiro[navio_horizontal][coluna] = 3; // Marca que cada local ocupado pelo navio vai ser um 3
        printf("Navio Horizontal: Linha %d, Coluna %d\n", navio_horizontal, coluna);
    }

    int navio_vertical = 5;
    for (int linha = 2; linha <= 4; linha++) {
        tabuleiro[linha][navio_vertical] = 3;
        printf("Navio Vertical: Linha %d, Coluna %d\n", navio_vertical, linha);
    }

    //Exibe o tabuleiro
    printf("\nTabuleiro:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    return 0;
}
