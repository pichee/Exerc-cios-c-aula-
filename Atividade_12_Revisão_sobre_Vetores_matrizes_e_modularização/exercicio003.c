/*Escreva um programa que contenha um vetor de 10 elementos de qualquer tipo de dado. O programa deve 
possuir um menu com as seguintes opções:
 1. Preencher o vetor com valores aleatórios
 2. Apresentar o vetor
 3. Inverter valores
 0. Encerrar programa
O programa deve conter uma estrutura de caso para cada opção e uma sub-rotina (função ou procedimento) 
para executar cada uma das tarefas*/
#include <stdio.h>
#include <stdlib.h>
int prenchimento(){
    int i=0;
    for (i = 0; i < 10; i++)
    {
        vetor[i]=rand()%100+1;
        printf("%i ",vetor[i]);
    }
    
}
    int main(){
        int escolha=0,vetor[10];
        printf("===============PROGRAMA===============\n1. Preencher o vetor com valores aleatórios\n2. Apresentar o vetor\n3. Inverter valores\n0. Encerrar programa\n");
        scanf("%i",&escolha);
        switch (escolha)
        {
        case 1:
            prenchimento(vetor[10]);
            break;
        
        default:
            break;
        }
    }
