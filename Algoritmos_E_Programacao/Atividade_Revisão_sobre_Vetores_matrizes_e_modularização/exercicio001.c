/*.Escreva um programa em C que contenha uma matriz quadrada de ordem 10. O programa deve gerar 
números inteiros aleatórios distintos (não repetidos) para a matriz, apresentar seus elementos na tela e 
indicar os índices de linha e coluna onde está o maior valor*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    int main()
    {
        int minha_matrix[3][3],linha=0,coluna=0,maiorvalor=0,linhamaior=0,colunamaior=0,vetornumerosrepetidos[9]={0,0,0,0,0,0,0,0,0},indicevetor=0;
        for (linha = 0; linha < 3; linha++)
        {
            for (coluna = 0; coluna < 3; coluna++)
            {
                    minha_matrix[linha][coluna]=rand()%100+1;
                    indicevetor=0;
                    while (indicevetor<9)
                    {
                        if (minha_matrix[linha][coluna]==vetornumerosrepetidos[indicevetor])
                        {
                         linha=0;
                        coluna=0;
                        }
                        indicevetor++;
                    }
                if (maiorvalor<minha_matrix[linha][coluna])
                {
                    maiorvalor=minha_matrix[linha][coluna];
                    linhamaior=linha;
                    colunamaior=coluna;
                }
             }
             } 
             linha=0;
             coluna=0;
            for(linha = 0; linha < 3; linha++)
        {
            for (coluna = 0; coluna < 3; coluna++)
            {
                printf("%i ",minha_matrix[linha][coluna]);
             }
             printf("\n");
             }
            
        printf("O maior número dessa matrix é %i localizado na linha %i e coluna %i",maiorvalor,linhamaior+1,colunamaior+1);
    }
