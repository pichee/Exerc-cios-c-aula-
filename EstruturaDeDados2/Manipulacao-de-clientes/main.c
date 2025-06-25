#include <stdio.h>
#include <stdlib.h>

int lerArquivo(int vetor[]) {
    FILE *arquivo = fopen("clientes.csv", "r");
    if (arquivo == NULL) {
        printf("erro ao abrir\n");
        return -1;
    }

    int i = 0;
    char linha[100];
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        vetor[i] = atoi(linha);
        i++;
    }

    fclose(arquivo);
    return i;
}

void buscaSimples(int v[], int tam, int valor) {
    for (int i = 0; i < tam; i++) {
        if (v[i] == valor) {
            printf("achou na posicao %d\n", i);
            return;
        }
    }
    printf("nao achou\n");
}

void ordenar(int v[], int tam) {
    for (int i = 0; i < tam - 1; i++) {
        for (int j = 0; j < tam - 1 - i; j++) {
            if (v[j] > v[j+1]) {
                int aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}

void buscaComOrdenacao(int v[], int tam, int valor) {
    ordenar(v, tam);

    for (int i = 0; i < tam; i++) {
        if (v[i] == valor) {
            printf("achou na ordenada na posicao %d\n", i);
            return;
        }
    }

    printf("nao achou na ordenada\n");
}

void buscaBinaria(int v[], int tam, int valor) {
    ordenar(v, tam);
    int inicio = 0;
    int fim = tam - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        if (v[meio] == valor) {
            printf("achou na binaria na posicao %d\n", meio);
            return;
        } else if (valor < v[meio]) {
            fim = meio - 1;
        } else {
            inicio = meio + 1;
        }
    }

    printf("nao achou na binaria\n");
}

int main() {
    int vetor[1000];
    int tam = lerArquivo(vetor);

    if (tam <= 0) {
        return 1;
    }

    int op;
    int valor;

    while (1) {
        printf("\n1 - busca simples\n");
        printf("2 - busca ordenada\n");
        printf("3 - busca binaria\n");
        printf("4 - sair\n");
        printf("opcao: ");
        scanf("%d", &op);

        if (op == 4) {
            break;
        }

        printf("valor: ");
        scanf("%d", &valor);

        int copia[1000];
        for (int i = 0; i < tam; i++) {
            copia[i] = vetor[i];
        }

        if (op == 1) {
            buscaSimples(copia, tam, valor);
        } else if (op == 2) {
            buscaComOrdenacao(copia, tam, valor);
        } else if (op == 3) {
            buscaBinaria(copia, tam, valor);
        } else {
            printf("opcao invalida\n");
        }
    }

    return 0;
}