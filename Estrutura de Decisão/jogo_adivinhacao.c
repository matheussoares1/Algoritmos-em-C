#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_TENTATIVAS 10

int main() {
    int numeroSecreto, tentativa, i;
    int acertou = 0;

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Gera um número secreto entre 1 e 100
    numeroSecreto = rand() % 100 + 1;

    printf("Bem-vindo ao Jogo da Adivinhação!\n");
    printf("Tente adivinhar o número secreto entre 1 e 100.\n");

    // Loop para tentativas
    for (i = 0; i < MAX_TENTATIVAS; i++) {
        printf("Tentativa %d de %d: ", i + 1, MAX_TENTATIVAS);
        scanf("%d", &tentativa);

        if (tentativa < 1 || tentativa > 100) {
            printf("Número fora do intervalo! Tente novamente.\n");
            i--; // Permite que o jogador tente novamente sem usar uma tentativa
            continue;
        }

        if (tentativa == numeroSecreto) {
            acertou = 1;
            break;
        } else if (tentativa < numeroSecreto) {
            printf("O número secreto é maior.\n");
        } else {
            printf("O número secreto é menor.\n");
        }
    }

    // Verifica se o jogador acertou
    if (acertou) {
        printf("Parabéns! Você acertou o número secreto!\n");
    } else {
        printf("Que pena! Você não conseguiu adivinhar o número secreto. Era %d.\n", numeroSecreto);
    }

    return 0;
}
