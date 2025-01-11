/*. Escreva um programa que contenha um vetor para armazenar 15 valores inteiros. O vetor pode 
ser preenchido de forma automática ou manualmente. O programa deve apresentar os valores do 
vetor e invocar uma função recursiva para encontrar o menor valor no vetor. Use o seguinte 
protótipo de função: int menorValor (int vet[], int tam, int menor);*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menorvalor(int *po,int tmd,int menor){
    printf("%d ",po[tmd]);
    if (menor>po[tmd])
    {
        menor=po[tmd];
    }
    if (tmd==14)
    {
        printf("TERMINADO\n");
        printf("MENOR VALOR ENCONTRADO\n %d",menor);
        free(po);
        return;
    }
    menorvalor(po,tmd+1,menor);
    
}
int main(){
    int *ponteiro=malloc(15*sizeof(int));
    srand(time(NULL));
    if (ponteiro==NULL){
        printf("Algo deu errado");
        return 0;
    }    
    for (int i = 0; i < 15; i++){
        ponteiro[i]=rand()%99;
    }
    int tmd=0,menor=100;
    menorvalor(ponteiro,tmd,menor);

    
}
