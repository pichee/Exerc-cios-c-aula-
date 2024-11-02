/* Faça um programa que leia do usuário o tamanho de um vetor (inteiros) a ser lido e faça a sua 
alocação dinâmica de memória. Depois, leia do usuário seus valores e imprima o vetor lido e 
mostre quantos dos números são pares e quantos são ímpares.*/
#include <stdio.h>
#include <stdlib.h>
void parOun(int nm,int *p,int *i){
    if (nm%2==0){
        (*p)++;
        return;    
    }
        (*i)++;
        return;
    
    
}
int main(){
    int num,contadorP=0,contadorM=0;
    printf("Qual o valor do vetor:");
    scanf("%i",&num);
    int *vetor=malloc(num*sizeof(int));
    for (int i = 0; i < num; i++)
    {
        printf("Digite o número %i do vetor:",i+1);
        scanf("%i",&vetor[i]);
        parOun(vetor[i],&contadorP,&contadorM);

    }
    printf("Quantidades de pares:%d\nQuantidade de impares%d",contadorP,contadorM);
    
}
