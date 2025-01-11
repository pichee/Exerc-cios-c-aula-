/*Escreva um programa que solicite ao usuário um número inteiro N. O programa deve alocar 
dinamicamente um vetor de N posições para armazenar números inteiros, no qual seus elementos 
devem ser gerados de forma aleatoriamente. O programa deve conter duas sub-rotinas para 
imprimir na tela apenas os números pares e ímpares, respectivamente. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void par(int *ponteiro,int tmd){
    printf("NUMEROS PARES\n");
    for (int i = 0; i < tmd; i++){
        if (ponteiro[i]%2==0){
            printf("%i ",ponteiro[i]);
        }
    }
}
void impar(int *ponteiro,int tmd){
    printf("\nNUMEROS Impares\n");
    for (int i = 0; i < tmd; i++){
        if (ponteiro[i]%2!=0){
            printf("%i ",ponteiro[i]);
        }
    }
}
int main(){
    int n;
    printf("Digite quantos números voce quer no vetor");
    scanf("%i",&n);
    int *ponteiro=malloc(n*sizeof(int));
    for (int i = 0; i < n; i++){
        ponteiro[i]=rand()%12;
    }
    par(ponteiro,n);
    impar(ponteiro,n);
}
    

    
