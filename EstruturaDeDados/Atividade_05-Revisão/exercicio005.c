/*5. Construa um procedimento que receba como parâmetro um vetor de inteiros com 10 valores 
aleatórios entre 0 e 6, preenchidos automaticamente. O procedimento deve determinar o maior 
elemento e o número de vezes que ele ocorre no vetor. Por exemplo, para o vetor [1, 3, 5, 5, 2, 4, 
5, 3, 1, 0] o procedimento deve determinar o valor 5 e indicar que ele ocorreu 3 vezes. Os 
elementos do vetor, bem como os resultados obtidos através do procedimento, devem ser 
apresentados pela rotina principal.*/
#include <stdio.h>
#include <stdlib.h>
void sortear(int *ponteiro){
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        ponteiro[i]=rand()%7;
        printf("%d ",ponteiro[i]);
    }
    return;
}
int maiorNumero(int *vetor,int *ponteiro){
    for (int i = 0; i < 10; i++)
    {
        switch(ponteiro[i]){
            case 0:
                vetor[0]++;
                break;
            case 1:
                vetor[1]++;
                break;
            case 2:
                vetor[2]++;
                break;
            case 3:
                vetor[3]++;
                break;
            case 4:
                vetor[4]++;
                break;
            case 5:
                vetor[5]++;
                break;
            case 6:
                vetor[6]++;
                break;                    
        }
    }
    int maior=vetor[0];
    for (int i = 0; i < 5; i++)
    {
        if (vetor[i+1]>vetor[i])
        {
            maior=vetor[i+1];
        }
        
    }
    return printf("\nO maior número aparece %i vezes",maior);
}
int main(){

    int *ponteiro=malloc(10*sizeof(int));
    int *vetor=calloc(7,sizeof(int));
    sortear(ponteiro);
    maiorNumero(vetor,ponteiro);

    
}
