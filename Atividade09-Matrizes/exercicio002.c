//Escreva um programa em C que leia elementos reais para uma matriz quadrada de ordem 5. O 
//programa deve conter uma estrutura de caso para apresentar as seguintes opções: 
//a) A soma dos elementos de uma linha informada pelo usuário;  X
//b) A soma dos elementos de uma coluna informada pelo usuário; X
//c) A soma da diagonal principal;  X
//d) A soma da diagonal secundária; X
//e) A soma de todos os elementos da matriz;
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int diagonal_secondaria(int matrix[5][5]){
    int soma=matrix[4][4]+matrix[3][2]+matrix[3][3]+matrix[1][3]+matrix[0][4];
    return soma;
}
int diagonal_principal(int matrix[5][5]){
    int soma=matrix[0][0]+matrix[1][1]+matrix[2][2]+matrix[3][3]+matrix[4][4];
    return soma;
}
int soma_coluna(int matrix[5][5]){
    int coluna=0;
    scanf("%i",&coluna);
    coluna=coluna-1;
    int aux=coluna;
    int soma=matrix[aux][0]+matrix[aux][1]+matrix[aux][2]+matrix[aux][3]+matrix[aux][4];
    return soma;
    }
int soma_linha(int matrix[5][5]){

    int linha=0;
    scanf("%i",&linha);
    linha=linha-1;
    int aux=linha;
    int soma=matrix[0][aux]+matrix[1][aux]+matrix[2][aux]+matrix[3][aux]+matrix[4][aux];
    return soma;
    }
int main(){
    int matrix[5][5],linha=0,coluna=0,pula_pula=1,soma=0;
    srand(time(NULL));
    printf("==============Matrix==============\n");
    for ( linha = 0; linha < 5; linha++)
    {
        for ( coluna = 0; coluna < 5; coluna++)
    {
        matrix[coluna][linha]=rand()%100;
        printf("%i ",matrix[coluna][linha]);
        soma+=matrix[coluna][linha];
        if (pula_pula>4)
        {
            printf("\n");
            pula_pula=1;
        }
        else{
            pula_pula++;
        }
        
    }
    }
    printf("==================================\nInforme uma coluna para somar:");
    int colunasoma=soma_coluna(matrix);
    printf("%i\n",colunasoma);
    printf("informe uma linha para somar:");
    int linhasoma=soma_linha(matrix);
    printf("%i",linhasoma);
    int diagonalprincipal=diagonal_principal(matrix);
    int diagonalsecundaria=diagonal_secondaria(matrix);
    printf("\n==================================\nSoma diagonal principal:%i\ndiagonal secundaria:%i\n e a soma é %i.",diagonalprincipal,diagonalsecundaria,soma);
   
}
