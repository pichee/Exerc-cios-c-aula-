/*Escreva um programa que receba do usuário o tamanho de um vetor de inteiros a ser lido e 
efetue a alocação dinâmica de memória. A seguir, leia as entradas do usuário para preencher o 
vetor e exiba o vetor resultante*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int tmdVetor;
    printf("Digite o tamanho do vetor:\n");
    scanf("%i",&tmdVetor);
    int *ponteiro=malloc(tmdVetor*sizeof(int));
    for (int i = 0; i < tmdVetor; i++)
    {
        printf("Digite o número do vetor na posição %i\n",i+1);
        scanf("%d",&ponteiro[i]);
    }
    printf("Novo vetor:\n");
    for (int i = 0; i < tmdVetor; i++)
    {
        printf("%i\n",ponteiro[i]);
    }
    free(ponteiro);
}
