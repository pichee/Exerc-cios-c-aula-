#include <stdio.h>

int main() {
    float b, r = 1;
    int expoente, i;
    printf("Digite a base: ");
    scanf("%f", &b);
    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    for (i = 0; i < expoente; i++) {
        r *= b;
    }
    printf("%.2f elevado a %d é %.2f\n", b, expoente, r);

    return 0;
}
