/*Crie uma sub-rotina que receba por parâmetro um vetor de inteiros e os endereços de duas 
variáveis inteiras (min e max). Ao passar essas variáveis para a sub-rotina, o programa deve 
identificar o maior e o menor elementos do vetor e armazená-los nas variáveis recebidas como 
parâmetro.*/
#include <stdio.h>
#include <stdlib.h>
void MinMax(int *vetor,int **maior,int **menor){
    for (int i = 0; i < 5; i++)
    {
        if (vetor[i]>**maior) {
            *maior=&vetor[i];
            }
        if (vetor[i]<**menor){
            *menor=&vetor[i];
        }
            
        
    }
    
}
int main(){
    int *vetor=malloc(5*sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        vetor[i]=i;
    }
    int *maior=&vetor[0],*menor=&vetor[4];
    MinMax(vetor,&maior,&menor);
    printf("O maior valor é %d e o menor valor é %d",*maior,*menor);
}
