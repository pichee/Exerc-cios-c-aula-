/*4. Faça um programa que receba elementos inteiros para uma matriz quadrada de ordem 4, e contenha 
uma estrutura de caso com as opções abaixo:
a) Apresentar a matriz completa;X
b) Apresentar a diagonal principal;X
c) Apresentar a diagonal secundária;Xa
d) Apresentar os elementos abaixo da diagonal principal;X
e) Apresentar os elementos acima da diagonal principal;*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void elementos_abaixodiagonal(matrix[5][5]){
int coluna=0,linha=0;
printf("\nElementos acima da diagonal principal:");
for (coluna=0;coluna<5;coluna++){
   for (linha=0;linha<5;linha++){
   if (linha>coluna){
   printf("%i ",matrix[coluna][linha]);
}}}}
void elementos_cimadiagonal(matrix[5][5]){
int coluna=0,linha=0;
printf("\nElementos abaixo da diagonal principal:");
for (coluna=0;coluna<5;coluna++){
   for (linha=0;linha<5;linha++){
   if (linha<coluna){
   printf("%i ",matrix[coluna][linha]);
}}}}
void diagonal_principal(matrix[5][5]){
int soma=0;
soma+=matrix[0][0]+matrix[1][1]+matrix[2][2]+matrix[3][3]+matrix[4][4];
printf("A soma da diagonal_principal é %i",soma);}


void diagonal_secundaria(matrix[5][5]){
int soma=0;
 soma+=matrix[4][0]+matrix[3][1]+matrix[2][2]+matrix[0][4]+matrix[1][3];
printf("\nA soma da diagonal_secundaria é %i",soma);}

int main(){
srand(time(NULL));
int linha=0,coluna=0,matrix[5][5];
for(coluna=0;coluna<5;coluna++){
 for(linha=0;linha<5;linha++){
 matrix[coluna][linha]=rand()%100;
 printf("%i ",matrix[coluna][linha]);
 }
 printf("\n");}
 diagonal_principal(matrix);
 diagonal_secundaria(matrix);
 elementos_abaixodiagonal(matrix);
 elementos_cimadiagonal(matrix);
 }