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
int prenchimento(int *vetor){
    int i=0;
    for (i = 0; i < 10; i++)
    {
        vetor[i]=rand()%100+1;
    }
}
int mostrar(int *vetor){
    int i=0;
    for (i = 0; i < 10; i++)
    {
        printf("%i ",vetor[i]);
    }
    printf("\n");
}
int inverter(int *vetor){
    int i=0;
    int aux;
    
    for (i =0; i<9; i++)
    {
    aux=vetor[i];
        vetor[i]=vetor[i+1];
        vetor[i+1]=aux;
    }
    printf("\n");
}


    int main(){
    int vetor[10]={0};
    while(1){
        int escolha=0;
        printf("===============PROGRAMA===============\n1. Preencher o vetor com valores aleatórios\n2. Apresentar o vetor\n3. Inverter valores\n4. Encerrar programa\n");
        scanf("%i",&escolha);
        switch (escolha)
        {
        case 1:
            prenchimento(vetor);
            break;
        case 2:
         mostrar(vetor);
         break;
         case 3:
         inverter(vetor);
         break;
        case 4:
        return 0;
         break;
        }
    }}