#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroGerado, tentativa, numeroTentativas = 0;

    
    srand(time(NULL));

    
    numeroGerado = (rand() % 50) + 1;

    printf("Tente adivinhar o número gerado entre 1 e 50.\n");

    do {
        printf("Digite o seu palpite: ");
        scanf("%d", &tentativa);

        numeroTentativas++;

        if (tentativa > numeroGerado) {
            printf("O número escolhido é menor.\n");
        } else if (tentativa < numeroGerado) {
            printf("O número escolhido é maior.\n");
        } else {
            printf("Parabéns! Você acertou o número %d em %d tentativas.\n", numeroGerado, numeroTentativas);
        }
    } while (tentativa != numeroGerado);

    return 0;
}
