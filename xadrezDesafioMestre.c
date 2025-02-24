#include <stdio.h>

void Torre(int t) {
    if (t > 0) {
    printf("Direita\n");
    Torre(t - 1);
    }
}

void Bispo(int b) {
    if (b > 0) {
    printf("Cima, Direita\n");
    Bispo(b - 1);
    }
}

void Rainha(int r) {
    if (r > 0) {
    printf("Esquerda\n");
    Rainha(r - 1);
    }
}

void BispoLoops(int b) {
    printf("Movimento do Bispo (Loops Aninhados):\n");
    for (int d = 0; d < b; d++) {
        for (int c = 0; c < 1; c++) {
            printf("Direita\n");
        }
        printf("Cima\n");
    }
}

void Cavalo() {
    printf("Movimento do Cavalo:\n");
    for (int c = 0; c < 1; c++) {
        for (int d = 0; d < 2; d++) {
            printf("Cima\n");
        }
        printf("Direita\n");
    }
}


int main() {
    printf("Movimento da Torre:\n");
    Torre(5);

    printf("Movimento do Bispo (Recursão):\n");
    Bispo(5);

    printf("Movimento da Rainha:\n");
    Rainha(8);

    BispoLoops(5);
    Cavalo();

    return 0;
}