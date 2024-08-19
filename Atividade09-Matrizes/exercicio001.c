/*1. Faça um programa que leia os elementos inteiros para uma matriz quadrada de ordem 4 e imprima na 

tela a soma dos elementos abaixo da diagonal principal e a própria matriz.*/

#include <stdio.h>
#include<stdlib.h>
#include <time.h>
int verificar_diagonal(int matrix[4][4]){



int coluna=0;
int linha=0;
int soma=0;
for (coluna=0;coluna<4;coluna++){
  for(linha=0;linha<4;linha++){
  if(linha<coluna){
  soma+=matrix[coluna][linha];
}}}
return soma;}


int main(){
int matrix[4][4],linhas=0,colunas=0,soma_abaixo_diagonal=0,soma_matrix=0,pula_pula=1;
srand(time(NULL));
for (colunas=0;colunas<4;colunas++){
 linhas=0;
for (linhas=0;linhas<4;linhas++){
matrix[colunas][linhas]=rand()%101;
soma_matrix+=matrix[colunas][linhas];
printf("%i ",matrix[colunas][linhas]);
if(pula_pula>3){
pula_pula=1;
printf("\n");
}
else{
pula_pula++;
}}}
printf("Soma de todos os elementos da Matrix %i\n:",soma_matrix);
soma_abaixo_diagonal=verificar_diagonal(matrix);
printf("Soma dos elementos abaixo da diagonal principal %i:",soma_abaixo_diagonal);
    
}

