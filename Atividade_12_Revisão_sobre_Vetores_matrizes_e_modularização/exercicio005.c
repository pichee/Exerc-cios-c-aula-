/*Escreva um programa em C que contenha uma matriz quadrada de ordem 5. O programa deve apresentar 
um menu, com as seguintes opções: 
    1. Preencher a matriz com números aleatórios X
    2. Preencher a matriz manualmente X
    3. Apresentar a matriz X
    4. Trocar valores de duas linhas X
    5. Trocar valores de duas colunas X
    6. Trocar valores de uma linha pelos valores de uma coluna X
    7. Trocar valores de uma coluna pelos valores de uma linha X
    0. Encerrar programa 
Nas opções de troca, o programa deve solicitar ao usuário dois índices (de linhas/colunas) para fazer a 
substituição dos valores. O programa deve conter uma estrutura de caso para cada opção e uma sub-rotina 
(função ou procedimento) para executar cada uma das tarefas.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void aleatorio(int matrix[5][5]){
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matrix[i][j]=rand()%100;
        }
    }
}
void apresentar(int matrix[5][5]){
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%i ",matrix[i][j]);
        }
        printf("\n");
    }
}
void inserir(int matrix[5][5]){
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Digite o numero da matrix[%i][%i]",i+1,j+1);
            scanf("%i",&matrix[i][j]);
        }
    }
}
void troca_linha(int matrix[5][5]){
    int linha1,linha2,aux;
    printf("Qual é a primeira linha que voce vai trocar:");
    scanf("%i",&linha1);
    linha1=linha1-1;
    printf("Qual é a segunda linha que voce vai trocar:");
    scanf("%i",&linha2);
    linha2=linha2-1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i==linha1)
            {
                aux=matrix[i][j];
                matrix[i][j]=matrix[linha2][j];
                matrix[linha2][j]=aux;
            }
            
        }
    }
} 
void troca_coluna(int matrix[5][5]){
    int linha1,linha2,aux;
    printf("Qual é a primeira coluna que voce vai trocar:");
    scanf("%i",&linha1);
    linha1=linha1-1;
    printf("Qual é a segunda coluna que voce vai trocar:");
    scanf("%i",&linha2);
    linha2=linha2-1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j==linha1)
            {
                aux=matrix[i][j];
                matrix[i][j]=matrix[i][linha2];
                matrix[i][linha2]=aux;
            }
            
        }
    }
}     
void troca_linha_coluna(int matrix[5][5]){
    int linha1,coluna,aux;
    printf("Qual é a linha que voce vai trocar:");
    scanf("%i",&linha1);
    linha1=linha1-1;
    printf("Qual é a coluna que voce vai trocar:");
    scanf("%i",&coluna);
    coluna=coluna-1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i==linha1)
            {
                aux=matrix[i][j];
                matrix[i][j]=matrix[i][coluna];
                matrix[i][coluna]=aux;
            }
            
        }
    }
}     
void troca_coluna_linha(int matrix[5][5]){
    int linha1,coluna,aux;
    printf("Qual é a linha que voce vai trocar:");
    scanf("%i",&linha1);
    linha1=linha1-1;
    printf("Qual é a coluna que voce vai trocar:");
    scanf("%i",&coluna);
    coluna=coluna-1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i==linha1)
            {
                aux=matrix[i][j];
                matrix[i][j]=matrix[i][coluna];
                matrix[i][coluna]=aux;
            }
            
        }
    }
}    
    int main(){
        srand(time(NULL));
        int matrix[5][5]={0};
        while (1)
        {
         int escolha;
         printf("1. Preencher a matriz com números aleatórios\n2. Preencher a matriz manualmente\n3. Apresentar a matriz\n4. Trocar valores de duas linhas\n5. Trocar valores de duas colunas\n6. Trocar valores de uma linha pelos valores de uma coluna\n7. Trocar valores de uma coluna pelos valores de uma linha\n0. Encerrar programa\n");  
         scanf("%i",&escolha);
         switch (escolha)
         {
        case 0:
           return 0;
            break;
         case 1:
           aleatorio(matrix);
            break;
         case 2:
           inserir(matrix);
            break;
        case 3:
           apresentar(matrix);
            break;
        case 4:
           troca_linha(matrix);
            break;
        case 5:
           troca_coluna(matrix);
            break;
        case 6:
           troca_linha_coluna(matrix);
            break;
        case 7:
           troca_coluna_linha(matrix);
            break;
         default:
            break;
         }
        
        }
        
        
    }
