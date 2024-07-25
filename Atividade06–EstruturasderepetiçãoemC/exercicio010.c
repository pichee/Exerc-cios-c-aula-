#include <stdio.h>

int main() {
    int numero, soma = 0, count = 0;
    float media;
    printf("Digite uma sequência de números inteiros:\n");
    while (1) {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero < 0) {
            break;
        }

        soma += numero;
        count++;
    }

    if (count > 0) {
        media = (float)soma / count;
        printf("A média dos números digitados é: %.2f\n", media);
    }
