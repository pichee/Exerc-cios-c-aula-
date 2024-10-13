/*Crie um algoritmo que preencha os elementos de uma matriz 7 x 8, onde o valor de cada elemento é 
a soma dos seus índices.*/
#include <stdio.h>
int main(){
int matrix[7][8],linha,coluna;
for (linha=0;linha<7;linha++){
for (coluna=0;coluna<8;coluna++){
matrix[linha][coluna]=linha+coluna;
printf("%i ",matrix[linha][coluna]);
}
printf("\n");
}
}