#include <stdio.h>

int main() {

    // Movimento da Torre
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n"); // 5 casas para a direita
    }
    printf("\n");

    // Movimento do Bispo
    printf("Movimento do Bispo:\n");
    int contadorBispo = 0;
    while (contadorBispo < 5) {
        printf("Cima, Direita\n"); // 5 casas na diagonal para cima e à direita
        contadorBispo++;
    }
    printf("\n");

    // Movimento da Rainha
    printf("Movimento da Rainha:\n");
    int contadorRainha = 0;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < 8); // 8 casas para a esquerda
    
    return 0;
}
