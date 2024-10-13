#include <stdio.h>
#include <math.h>

void dobro(int n) {
    printf("O dobro de %d é %d\n", n, 2 * n);
}

void triplo(int n) {
    printf("O triplo de %d é %d\n", n, 3 * n);
}

void metade(int n) {
    printf("A metade de %d é %.2f\n", n, n / 2.0);
}

void quadrado(int n) {
    printf("O quadrado de %d é %d\n", n, n * n);
}

void cubo(int n) {
    printf("O cubo de %d é %d\n", n, n * n * n);
}

void raizQuadrada(int n) {
    printf("A raiz quadrada de %d é %.2f\n", n, sqrt(n));
}

void raizCubica(int n) {
    printf("A raiz cúbica de %d é %.2f\n", n, cbrt(n));
}

void modulo(int n) {
    printf("O módulo de %d é %d\n", n, abs(n));
}

void inverso(int n) {
    if (n != 0) {
        printf("O inverso de %d é %.2f\n", n, 1.0 / n);
    } else {
        printf("Não é possível calcular o inverso de 0\n");
    }
}

int main() {
    int opcao, n;

    do {
        printf("1-Dobro\n2–Triplo\n3–Metade\n4–Quadrado\n5-Cubo\n6–Raiz Quadrada\n7–Raiz Cúbica\n8–Módulo\n9 – Inverso\n0 – Sair do Programa.\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao != 0) {
            printf("Informe um número: ");
            scanf("%d", &n);
        }

        switch (opcao) {
            case 1: dobro(n); 
              break;
          
            case 2: triplo(n); 
              break;
            case 3: metade(n); 
              break;
            case 4: quadrado(n); 
              break;
            case 5: cubo(n); 
              break;
            case 6: raizQuadrada(n); 
              break;
            case 7: raizCubica(n); 
              break;
            case 8: modulo(n); 
              break;
            case 9: inverso(n); 
              break;
            case 0: printf("Saindo do programa...\n");
              break;
            default: printf("Opção inválida!\n");
        }
    } while (opcao != 0);
}
