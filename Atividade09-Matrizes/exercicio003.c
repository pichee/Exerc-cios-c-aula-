/*Faça um algoritmo que receba os valores para uma matriz 2 x 3. O programa deve gerar a matriz 





transposta e apresenta-la na tela. Uma matriz transposta é gerada trocando a linha pela coluna. 

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int mostrarmatrix(int mostrar[3][2]){
int coluna=0;
int linha=0,pula_pula=1;
printf("\n=====\n");
for (coluna=0;coluna<3;coluna++){
  for (linha=0;linha<2;linha++){
  printf("%i ",mostrar[coluna][linha]);
  }printf("\n");
    
}}

int main(){
srand(time(NULL));
int matrix[2][3], linha=0,coluna=0,pula_pula=1;
int matrixtransposta[3][2];
for(coluna=0;coluna<2;coluna++){
    for(linha=0;linha<3;linha++){
       matrix[coluna][linha]=rand()%101;
       matrixtransposta[linha][coluna]=matrix[coluna][linha];
    printf("%i ",matrix[coluna][linha]);
    if (pula_pula>2){
    pula_pula=1;
    printf("\n");
    }
    else{
    pula_pula++;}
    
    
    }}
    mostrarmatrix(matrixtransposta);
}
    