#include <stdio.h>

int main() {

    // ================================
    // DESAFIO NÍVEL NOVATO
    // BATALHA NAVAL - POSICIONAMENTO
    // ================================

    // Tamanho fixo do tabuleiro
    int tabuleiro[10][10];

    // Variáveis auxiliares
    int linha, coluna;

    // ================================
    // 1️⃣ INICIALIZAR TABULEIRO COM 0 (ÁGUA)
    // ================================

    for(linha = 0; linha < 10; linha++) {
        for(coluna = 0; coluna < 10; coluna++) {
            tabuleiro[linha][coluna] = 0;
        }
    }

    // ================================
    // 2️⃣ DEFINIR NAVIOS (TAMANHO 3)
    // ================================

    int navioHorizontal[3] = {3,3,3};
    int navioVertical[3]   = {3,3,3};

    // Coordenadas iniciais (definidas no código)
    int linhaH = 2;   // linha navio horizontal
    int colunaH = 4;  // coluna navio horizontal

    int linhaV = 5;   // linha navio vertical
    int colunaV = 1;  // coluna navio vertical

    int valido = 1; // controle de validação

    // ================================
    // 3️⃣ VALIDAR LIMITES - NAVIO HORIZONTAL
    // ================================

    if(colunaH + 3 > 10) {
        valido = 0;
    }

    // ================================
    // 4️⃣ VALIDAR LIMITES - NAVIO VERTICAL
    // ================================

    if(linhaV + 3 > 10) {
        valido = 0;
    }

    // ================================
    // 5️⃣ POSICIONAR NAVIOS (SEM SOBREPOR)
    // ================================

    if(valido == 1) {

        // Posicionar navio horizontal
        for(coluna = 0; coluna < 3; coluna++) {
            tabuleiro[linhaH][colunaH + coluna] = navioHorizontal[coluna];
        }

        // Verificar sobreposição antes de posicionar vertical
        for(linha = 0; linha < 3; linha++) {
            if(tabuleiro[linhaV + linha][colunaV] == 3) {
                valido = 0;
            }
        }

        // Se não houver sobreposição, posiciona
        if(valido == 1) {
            for(linha = 0; linha < 3; linha++) {
                tabuleiro[linhaV + linha][colunaV] = navioVertical[linha];
            }
        }
    }

    // ================================
    // 6️⃣ EXIBIR TABULEIRO
    // ================================

    printf("TABULEIRO BATALHA NAVAL:\n\n");

    for(linha = 0; linha < 10; linha++) {
        for(coluna = 0; coluna < 10; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}
