#include <stdio.h>

int main() {
    int c = 0;
    int soma = 0;
    int valor, fatorial, i;

    while (c < 15) {
        printf("Digite um valor: ");
        scanf("%d", &valor);


        fatorial = 1;
        i = 1;

        while (i <= valor) {
            fatorial *= i;
            i++;
        }


        soma += fatorial;

        c++;
    }

    printf("A soma dos fatoriais é: %d\n", soma);

    return 0;
}
