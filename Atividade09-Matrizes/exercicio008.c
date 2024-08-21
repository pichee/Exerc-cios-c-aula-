/*Crie um programa que receba valores para uma matriz 5 x 7 de elementos reais. O programa também 
deve ler dois números inteiros (Linha e Coluna) e apresentar o valor contido naquela posição da 
matriz.*/ 
#include <stdio.h>
#include <stdlib.h>
int main(){
int matrix[5][7],linha=0,coluna=0;
for (linha=0;linha<5;linha++){
for (coluna=0;coluna<7;coluna++){
matrix[linha][coluna]=rand()%100;
printf("%i ",matrix[linha][coluna]);}
printf("\n");
}
printf("Escolha uma linha:");
scanf("%i",&linha);
linha=linha-1;
printf("Escolha uma coluna:");
scanf("%i",&coluna);
coluna=coluna-1;
printf("O item na Matrix escolhido foi :%i",matrix[linha][coluna]);
}