#include <stdio.h>

int main() {
    int volume[30], maior, menor, diaMaior, diaMenor;

    printf("Escreva o volume do dia 1: ");
    scanf("%d", &volume[0]);
    maior = menor = volume[0];
    diaMaior = diaMenor = 0;
    for(int a = 1; a < 30; a++) {
        printf("Escreva o volume do dia %d: ", a + 1);
        scanf("%d", &volume[a]);

        if (volume[a] > maior) {
            maior = volume[a];
            diaMaior = a;
        }

        if (volume[a] < menor) {
            menor = volume[a];
            diaMenor = a;
        }
    }

    printf("O maior volume ocorreu no dia %d e foi de %d carros.\n", diaMaior + 1, maior);
    printf("O menor volume ocorreu no dia %d e foi de %d carros.\n", diaMenor + 1, menor);

    return 0;
}