/*Desenvolva um programa que armazene na memória dois vetores do tipo inteiro contendo 1000 
posições cada um. O primeiro deve ser criado utilizando MALLOC, e o segundo utilizando 
CALLOC. Após isso, percorra os vetores com uma função que retorne a quantidade de zeros 
existentes em cada um deles. */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ponteiroMalloc=malloc(1000*sizeof(int));
    int *ponteiroCalloc=calloc(1000,sizeof(int)),coC=0,coM=0;
    for (int i = 0; i < 1000; i++)
    {
        if (ponteiroCalloc[i]==0)
        {
            coC++;
        }
        if (ponteiroMalloc[i]==0)
        {
            coM++;
        }
    }
    printf("O Malloc possui %i zeros\n",coM);
    printf("O Calloc possui %i zeros",coC);
    
}
