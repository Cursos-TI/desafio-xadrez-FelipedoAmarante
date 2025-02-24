#include <stdio.h>

int main() {
    printf("Movimento da Torre:\n");
    for (int t = 0; t < 5; t++) {
        printf("Direita\n");
    }

    printf("Movimento do Bispo:\n");
    int b = 0;
    while (b < 5) {
        printf("Cima, Direita\n");
        b++;
    }

    printf("Movimento da Rainha:\n");
    int r = 0;
    do {
        printf("Esquerda\n");
        r++;
    } while (r < 8);

    return 0;
}