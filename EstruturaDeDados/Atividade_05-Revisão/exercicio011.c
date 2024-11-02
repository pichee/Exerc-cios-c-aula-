/*Crie um programa que receba do usuário dois números N e M e crie uma matriz de inteiros N x 
M. A seguir a matriz deve ser preenchida com valores aleatórios de forma automática. Por fim, o 
programa deve localizar os três maiores números contidos na matriz e exibir os índices da linha e 
coluna onde se encontra cada um deles.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_TAMANHO 100 

void preencherMatriz(int matriz[MAX_TAMANHO][MAX_TAMANHO], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matriz[i][j] = rand() % 100; 
        }
    }
}

void encontrarMaiores(int matriz[MAX_TAMANHO][MAX_TAMANHO], int n, int m) {
    int maiores[3] = {-1, -1, -1}; 
    int indices[3][2] = {{-1, -1}, {-1, -1}, {-1, -1}}; 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int numAtual = matriz[i][j];
            for (int k = 0; k < 3; k++) {
                if (numAtual > maiores[k]) {

                    for (int l = 2; l > k; l--) {
                        maiores[l] = maiores[l - 1];
                        indices[l][0] = indices[l - 1][0];
                        indices[l][1] = indices[l - 1][1];
                    }

                    maiores[k] = numAtual;
                    indices[k][0] = i; 
                    indices[k][1] = j; 
                    break;
                }
            }
        }
    }
    printf("Os três maiores números na matriz são:\n");
    for (int k = 0; k < 3; k++) {
        if (maiores[k] != -1) {
            printf("Número: %d na posição (%d, %d)\n", maiores[k], indices[k][0], indices[k][1]);
        }
    }
}

int main() {
    int n, m;
    int matriz[MAX_TAMANHO][MAX_TAMANHO];

    srand(time(NULL));

    printf("Digite o número de linhas (N): ");
    scanf("%d", &n);
    printf("Digite o número de colunas (M): ");
    scanf("%d", &m);
    preencherMatriz(matriz, n, m)
}
