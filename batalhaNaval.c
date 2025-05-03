#include <stdio.h>

#define TAM 10

void inicializarTabuleiro(int tabuleiro[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }
}

int podeColocar(int tabuleiro[TAM][TAM], int x, int y, int tamanho, int dx, int dy) {
    for (int i = 0; i < tamanho; i++) {
        int nx = x + dx * i;
        int ny = y + dy * i;
        if (nx < 0 || ny < 0 || nx >= TAM || ny >= TAM || tabuleiro[nx][ny] != 0) {
            return 0; // Fora dos limites ou posição ocupada
        }
    }
    return 1;
}

void colocarNavio(int tabuleiro[TAM][TAM], int x, int y, int tamanho, int dx, int dy) {
    for (int i = 0; i < tamanho; i++) {
        int nx = x + dx * i;
        int ny = y + dy * i;
        tabuleiro[nx][ny] = 3;
    }
}

void exibirTabuleiro(int tabuleiro[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    printf("\nBEM VINDO AO BATALHA NAVAL\n");
    printf("\n");

    int tabuleiro[TAM][TAM];
    inicializarTabuleiro(tabuleiro);

    // Coloca dois navios horizontais/verticais
    if (podeColocar(tabuleiro, 0, 0, 4, 0, 1)) // horizontal
        colocarNavio(tabuleiro, 0, 0, 4, 0, 1);

    if (podeColocar(tabuleiro, 2, 2, 3, 1, 0)) // vertical
        colocarNavio(tabuleiro, 2, 2, 3, 1, 0);

    // Coloca dois navios diagonais
    if (podeColocar(tabuleiro, 5, 5, 3, 1, 1)) // diagonal principal
        colocarNavio(tabuleiro, 5, 5, 3, 1, 1);

    if (podeColocar(tabuleiro, 2, 7, 3, 1, -1)) // diagonal secundária
        colocarNavio(tabuleiro, 2, 7, 3, 1, -1);

    // Exibe o tabuleiro
    exibirTabuleiro(tabuleiro);
    
printf("\n");

    return 0;
}
