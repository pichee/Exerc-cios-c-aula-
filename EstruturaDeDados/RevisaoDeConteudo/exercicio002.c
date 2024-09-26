/*Escreva um programa em C que gere números aleatórios para uma matriz quadrada de ordem 9. O 
programa deve conter um menu com as seguintes opções:
a. Gerar elementos para a matriz
b. Apresentar os elementos da matriz
c. Apresentar a média dos valores de uma linha (informada pelo usuário)
d. Apresentar a média dos valores de uma coluna (informada pelo usuário)
e. Apresentar a média dos valores da diagonal principal
f. Apresentar a média dos valores abaixo da diagonal principal
g. Apresentar a média dos valores acima da diagonal principal
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int fazerMatriz(){
        int numeroSorteado=rand()%100+1;
        return numeroSorteado;

}
void mostrarMatriz(int matriz[3][3]){
    int i=0,j=0;
    printf("MATRIX:\n");
    for ( i = 0; i < 3; i++)
    {
          for (j = 0; j < 3; j++)
          {
            printf("%i ",matriz[i][j]);
          }
          printf("\n");
     }
}
void escolhaLinha(int matrix[3][3]){
    printf("\nEscolha uma linha para somar:");
    int escolha=0,soma=0;
    scanf("%i",&escolha);
    escolha--;
    switch (escolha)
    {
    case 0:
         soma=matrix[0][0]+matrix[0][1]+matrix[0][2];
        printf("A soma dessas linhas é %i",soma);
        break;
     case 1:
         soma=matrix[1][0]+matrix[1][1]+matrix[1][2];
        printf("A soma dessas linhas é %i",soma);
        break;
     case 2:
         soma=matrix[2][0]+matrix[2][1]+matrix[2][2];
        printf("A soma dessas linhas é %i",soma);
        break;
     default:
        printf("Numero invalido tente novamente");
    }

}
void escolhaColuna(int matrix[3][3]){
    printf("\nEscolha uma coluna para somar:");
    int escolha=0,soma=0;
    scanf("%i",&escolha);
    escolha--;
    switch (escolha)
    {
    case 0:
         soma=matrix[0][0]+matrix[1][0]+matrix[2][0];
        printf("A soma dessas linhas é %i",soma);
        break;
     case 1:
         soma=matrix[0][1]+matrix[1][1]+matrix[2][1];
        printf("A soma dessas linhas é %i",soma);
        break;
     case 2:
         soma=matrix[0][2]+matrix[1][2]+matrix[2][2];
        printf("A soma dessas linhas é %i",soma);
        break;
     default:
        printf("Numero invalido tente novamente");
    }

}
void diagonalPrincipal(int matrix[3][3]){
    int soma=matrix[0][0]+matrix[1][1]+matrix[2][2];
    printf("\nA soma da Diagonal Principal é %i",soma);
}
void diagonalAbaixo(int matrix[3][3]){
    int soma=0,i=0,j=0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i>j)
            {
                soma=matrix[i][j]+soma;
            }
            
        }
        
    }
    printf("A soma dos elementos abaixo da diagonal principal é %i",soma);
    
}
int diagonalAcima(int matrix[3][3]){
    int soma=0,i=0,j=0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i>j)
            {
                soma=matrix[i][j]+soma;
            }
            
        }
        
    }
    printf("A soma dos elementos acima da diagonal principal é %i",soma);
    return soma;
    
}
int main(){
   srand(time(NULL));
   int matrix[3][3],i=0,j=0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            matrix[i][j]=fazerMatriz();
        }
    }
    mostrarMatriz(matrix);
    escolhaLinha(matrix);
    escolhaColuna(matrix);
    diagonalPrincipal(matrix);
    int soma=diagonalAcima(matrix);
    diagonalAbaixo(matrix);
    printf("A média doa valores acima da diagonal é %2f",soma/3);

   
   
   

}
