/*Escreva um programa que contenha um vetor para armazenar 10 elementos do tipo float. Usando 
um ponteiro, imprima na tela o conteúdo e o endereço de cada posição deste vetor.*/
#include <stdio.h>
    int main(){
        int vetor[9]={0};
        int *ponteiro=vetor;
        for (int i = 0; i < 9; i++)
        {
            printf("Valor:%i Endereço:%p\n",ponteiro[i],&ponteiro[i]);
        }
        
    }