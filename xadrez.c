#include <stdio.h>

// funcao para torre com a recursao 
void moverTorreRecursiva(int passoAtual, int totalPassos) {
    if (passoAtual > totalPassos) return;
    printf("Direita (%d)\n", passoAtual);
    moverTorreRecursiva(passoAtual + 1, totalPassos);
}

// funcao para bispocom recursao e loops
void moverBispoRecursivo(int passoAtual, int totalPassos) {
    if (passoAtual > totalPassos) return;
    //movimentando cima e direita
    for (int linha = 1; linha <= 1; linha++) {
        for (int coluna = 1; coluna <= 1; coluna++) {
            printf("Cima Direita (%d)\n", passoAtual);
        }
    }

    moverBispoRecursivo(passoAtual + 1, totalPassos);
}

//funcao para RAINHA com Recursão
void moverRainhaRecursiva(int passoAtual, int totalPassos) {
    if (passoAtual > totalPassos) return;
    printf("Esquerda (%d)\n", passoAtual);
    moverRainhaRecursiva(passoAtual + 1, totalPassos);
}

// funcao para CAVALO com Loops
void moveCavalo() {
    int casasCima = 2;
    int casasDireita = 1;

    printf("Movimento do Cavalo (Loops Aninhados com múltiplas condições):\n");

    for (int i = 1; i <= casasCima; i++) {
        if (i == 2) {
            // interrompe em caso de movimentacao de duas casas
            break;
        }
        printf("Cima (%d)\n", i);
    }

    for (int j = 1; j <= casasDireita; j++) {
        if (j != 1) {
            continue;
        }
        printf("Direita (%d)\n", j);
    }
}

int main() {
    //Funcoes da torre
    int passosTorre = 4;
    printf("Movimento da Torre (Recursão):\n");
    moverTorreRecursiva(1, passosTorre);
    printf("\n");

    // Funcoes do bispo
    int passosBispo = 5;
    printf("Movimento do Bispo (Recursão + Loops):\n");
    moverBispoRecursivo(1, passosBispo);
    printf("\n");

    // Funcoes da Raina
    int passosRainha = 8;
    printf("Movimento da Rainha (Recursão):\n");
    moverRainhaRecursiva(1, passosRainha);
    printf("\n");

    // Funcoes cavalo
    moveCavalo();

    return 0;
}
