/*Faça um algoritmo que leia uma matriz de inteiros de tamanho 8 x 6. Depois, construir um vetor para 
armazenar a soma de cada linha da matriz. Ao final apresentar o somatório dos elementos do vetor.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
srand(time(NULL));
int matrix[8][6],coluna=0,linha=0,vetor_linha[8]={0};
for (linha=0;linha<8;linha++){
for (coluna=0;coluna<6;coluna++){
matrix[linha][coluna]=rand()%100;
printf("%i ",matrix[linha][coluna]);
vetor_linha[linha]+=matrix[linha][coluna];
}
printf("\n");
}
printf("====================\n");
printf("A soma das linhas são\n %i-%i-%i-%i-%i-%i",vetor_linha[0],vetor_linha[1],vetor_linha[2],vetor_linha[3],vetor_linha[4],vetor_linha[5],vetor_linha[6],vetor_linha[7]);
}