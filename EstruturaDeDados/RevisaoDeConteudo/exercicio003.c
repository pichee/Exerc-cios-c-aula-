/*Faça um programa em C para ler ou gerar (aleatoriamente) 10 números e armazená-los em um vetor. O
programa deve conter um procedimento para ordenar os números no vetor em ordem crescente. Ao final 
da execução, o programa deve apresentar o vetor ordenado.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int gera() {
    return rand() % 100 + 1;
}
void trocador(int *vetor) {
    int aux;
    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}
void mostrar(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%i ", vetor[i]);
    }
    printf("\n");
}
int main() {
    srand(time(NULL)); 
    int armazenadorDeNumeros[10];
    for (int i = 0; i < 10; i++) {
        armazenadorDeNumeros[i] = gera();
    }
    printf("Números iniciais:\n");
    mostrar(armazenadorDeNumeros, 10);
    trocador(armazenadorDeNumeros);
    printf("Números ordenados:\n");
    mostrar(armazenadorDeNumeros, 10);
}
