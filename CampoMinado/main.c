//Codigo feito com a ajuda do chat gpt pois tive muita dificuldade de fazer.Obs espero voltar no futuro e conseguir sem ajuda

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char **dificuldade(int escolha) {
    char **ponteiro = NULL;
    int tamanho;
    switch (escolha) {
        case 1: tamanho = 5; break;
        case 2: tamanho = 8; break;
        case 3: tamanho = 12; break;
        case 4: tamanho = 16; break;
        case 5: tamanho = 24; break;
        default: tamanho = 0; break;
    }

    ponteiro = malloc(tamanho * sizeof(char *));
    if (ponteiro == NULL) {
        printf("Falha na alocação de memória para ponteiro principal.\n");
        exit(1);
    }

    for (int i = 0; i < tamanho; i++) {
        ponteiro[i] = malloc(tamanho * sizeof(char));
        if (ponteiro[i] == NULL) {
            printf("Falha na alocação de memória para linha %d.\n", i);
            exit(1);
        }
    }

    return ponteiro;
}

int **sorteador(int tmd) {
    srand(time(NULL));
    int total = 0;

    switch (tmd) {
        case 1: total = 5; break;
        case 2: total = 8; break;
        case 3: total = 12; break;
        case 4: total = 16; break;
        case 5: total = 24; break;
        default: total = 0; break;
    }

    if (total == 0) {
        return NULL;
    }

    int **bombas = malloc(total * sizeof(int *));
    if (bombas == NULL) {
        printf("Falha em criar as bombas\n");
        exit(1);
    }

    for (int i = 0; i < total; i++) {
        bombas[i] = malloc(total * sizeof(int));
        if (bombas[i] == NULL) {
            printf("Falha em criar a bomba[%i]\n", i);
            exit(1);
        }
    }

    for (int i = 0; i < total; i++) {
        for (int j = 0; j < total; j++) {
            bombas[i][j] = rand() % 2;
        }
    }

    return bombas;
}

int vtamanho(int escolha) {
    switch (escolha) {
        case 1: return 5;
        case 2: return 8;
        case 3: return 12;
        case 4: return 16;
        default: return 24;
    }
}

int main() {
    int escolha;
    int linha, coluna;

   
    while (1) {
        printf("Escolher Dificuldade:\n1-Facil\n2-Medio\n3-Dificil\n4-Lenda\n5-Mestre\nDificuldade: ");
        scanf("%i", &escolha);
        if (escolha >= 1 && escolha <= 5) break;
        printf("Número inválido\n");
    }

    int tamanho = vtamanho(escolha);
    char **matrixDoJogo = dificuldade(escolha);
    int **bombas = sorteador(escolha);

  
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            matrixDoJogo[i][j] = '-';
        }
    }

    while (1) {
   
        for (int i = 0; i < tamanho; i++) {
            for (int j = 0; j < tamanho; j++) {
                printf("%c ", matrixDoJogo[i][j]);
            }
            printf("\n");
        }

        printf("Digite a linha: ");
        scanf("%i", &linha);
        linha -= 1;

        printf("Digite a coluna: ");
        scanf("%i", &coluna);
        coluna -= 1;

        if (linha < 0 || linha >= tamanho || coluna < 0 || coluna >= tamanho) {
            printf("Posição inválida. Tente novamente.\n");
            continue;
        }

        if (bombas[linha][coluna] == 1) {
            printf("Bomba! Fim de jogo.\n");
            break;
        } else {
            int contagemBombasAdjacentes = 0;

            for (int i = -1; i <= 1; i++) {
                for (int j = -1; j <= 1; j++) {
                    int novaLinha = linha + i;
                    int novaColuna = coluna + j;

                    
                    if (novaLinha >= 0 && novaLinha < tamanho && novaColuna >= 0 && novaColuna < tamanho) {
                        if (bombas[novaLinha][novaColuna] == 1) {
                             contagemBombasAdjacentes++;
                        }
                    }
                }
            }
            if (contagemBombasAdjacentes > 0) {
                matrixDoJogo[linha][coluna] = '0' + contagemBombasAdjacentes;  
                printf("Cuidado! Há %d bombas nas células adjacentes.\n", contagemBombasAdjacentes);
            } else {
                matrixDoJogo[linha][coluna] = '0';  
                printf("Seguro! Nenhuma bomba nas células adjacentes.\n");
            }
        }
    }
    for (int i = 0; i < tamanho; i++) {
        free(matrixDoJogo[i]);
        free(bombas[i]);
    }
    free(matrixDoJogo);
    free(bombas);

    return 0;
}
