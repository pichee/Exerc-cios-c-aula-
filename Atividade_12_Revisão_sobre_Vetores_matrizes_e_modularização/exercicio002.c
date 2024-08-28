/* Faça um programa que contenha uma matriz quadrada de ordem 4. O programa deve preencher os 
elementos da matriz com valores inteiros aleatórios. O programa também deve conter um vetor de 4 
elementos do tipo real. Cada elemento do vetor deve ser preenchido com o resultado da soma, diferença, 
produto e quociente das respectivas colunas da matriz.
Exemplo:
Matriz: 3 4 8 2
 2 2 2 2
 1 1 0 1
 1 3 5 7
Vetor: 7 -2 0 0.14
Observação: tratar a divisão por zero*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    int main(){
        int matrix[4][4];
        float vetor[4];
        srand(time(NULL));
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                matrix[i][j]=rand()%100;
                printf("%i ",matrix[i][j]);

                
            }
            
            printf("\n");
        }
        vetor[0]=((matrix[0][0]-matrix[0][1])*matrix[0][2])/matrix[0][3];
        vetor[1]=((matrix[1][0]-matrix[1][1])*matrix[1][2])/matrix[1][3];
        vetor[2]=((matrix[2][0]-matrix[2][1])*matrix[2][2])/matrix[2][3];
        vetor[3]=((matrix[3][0]-matrix[3][1])*matrix[3][2])/matrix[3][3];
        printf("Resultados:%.2f %.2f %.2f %.2f",vetor[0],vetor[1],vetor[2],vetor[3]);
        
    }
