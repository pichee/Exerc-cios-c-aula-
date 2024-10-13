/*Faça um programa para ler dois vetores A e B de 7 elementos cada. Depois construa uma matriz com 
7 linhas e 2 colunas. A primeira coluna deve ser formada pelos elementos do vetor A e a segunda 
coluna formada pelos elementos do vetor B. Apresentar a matriz C.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
int vetor_a[8]={0},vetor_b[8]={0};
printf("Vetor a:");
for (int i=0;i<7;i++){
vetor_a[i]=rand()%100;
printf("%i ",vetor_a[i]);
}
printf("\nVetor b:");
for (int i=0;i<7;i++){
vetor_b[i]=rand()%100;
printf("%i ",vetor_b[i]);
}
int linhas=0,colunas=0,matrix[7][2];
printf("\n");
int pula_pula=0;
for(colunas=0;colunas<2;colunas++){
for(linhas=0;linhas<7;linhas++){
if (colunas==0){
matrix[linhas][colunas]=vetor_a[linhas];
printf("%i  ",matrix[linhas][colunas]);
}
else{
 if (pula_pula==0){
 printf("\n");
 pula_pula++;
 }
matrix[linhas][colunas]=vetor_b[linhas];
printf("%i  ",matrix[linhas][colunas]);
}}}}