#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para inverter o vetor
void inverterVetor(int *vetor, int inicio, int fim) {
    if (inicio >= fim) {
        return; 
    }

    int aux = vetor[inicio];
    vetor[inicio] = vetor[fim];
    vetor[fim] = aux;
    inverterVetor(vetor, inicio + 1, fim - 1);
}

int main() {
    int *ponteiro = malloc(20 * sizeof(int));
    srand(time(NULL));

    if (ponteiro == NULL) {
        printf("Algo deu errado na alocação de memória.\n");
        return 0;
    }
    printf("ANTES:\n");
    for (int i = 0; i < 20; i++) {
        ponteiro[i] = rand() % 99;
        printf("%i ", ponteiro[i]);
    }
    printf("\n");

    inverterVetor(ponteiro, 0, 19);

    printf("DEPOIS:\n");
    for (int i = 0; i < 20; i++) {
        printf("%i ", ponteiro[i]);
    }
    printf("\n");

  
    free(ponteiro);

    return 0;
}
