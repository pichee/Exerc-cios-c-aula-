/*1. Faça um programa que gere valores aleatórios para um vetor de 20 elementos do tipo inteiro. O 
programa deve conter uma função recursiva para apresentar os valores do vetor, separados por 
pipes (“ | ”).*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void mostrarValores(int *ponteiro,int i){
        if (i>=20)
        {
            printf("\nACABOU :)");
            return;
        }
        printf("%d|",ponteiro[i]);
        mostrarValores(ponteiro,i+1);}
int main(){
    int vetor[20],i=0;
    srand(time(NULL));
    for (int i = 0; i < 20; i++)
    {
        vetor[i]=rand()%20;
    }
    mostrarValores(vetor,i);

    

}
