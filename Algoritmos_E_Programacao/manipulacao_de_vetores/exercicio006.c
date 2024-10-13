#include <stdio.h>

int main() {
    int numeros[10] = {12, 35, 25, 14, 1, 85, 10, 110, 44, 996};
    int tamanho = 10; // Tamanho fixo do vetor
    int primeiro = numeros[0];

    for (int i = 1; i < tamanho; i++) {
        numeros[i - 1] = numeros[i];
    }

    numeros[tamanho - 1] = primeiro;

    for (int i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }
    
    printf("\n");

    return 0;
}