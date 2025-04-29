#include <stdio.h>

#define TAMANHO 10

void inicializarTabuleiro(char tabuleiro[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = '~'; // símbolo para água
        }
    }
}

void mostrarTabuleiro(char tabuleiro[TAMANHO][TAMANHO]) {
    printf("\nBem Vindo ao Jogo Batalaha Naval\n");
    printf("\n  ");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", i);
    }
    printf("\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", i);
        for (int j = 0; j < TAMANHO; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    char tabuleiro[TAMANHO][TAMANHO];

    inicializarTabuleiro(tabuleiro);

    // Posicionando o navio na horizontal
    int linhaHorizontal = 2;
    int colunaHorizontalInicio = 3;
    int tamanhoNavio = 3;
    for (int j = colunaHorizontalInicio; j < colunaHorizontalInicio + tamanhoNavio; j++) {
        tabuleiro[linhaHorizontal][j] = 'N'; // símbolo para navio
    }

    // Posicionando o navio na vertical
    int colunaVertical = 5;
    int linhaVerticalInicio = 4;
    for (int i = linhaVerticalInicio; i < linhaVerticalInicio + tamanhoNavio; i++) {
        tabuleiro[i][colunaVertical] = 'N';
    }

    mostrarTabuleiro(tabuleiro);

    return 0;
}
