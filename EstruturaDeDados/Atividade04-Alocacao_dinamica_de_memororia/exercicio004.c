/*Faça um programa que leia uma quantidade qualquer de números armazenando-os na memória e 
pare a leitura quando o usuário entrar um valor negativo. Em seguida, imprima o vetor lido. Use 
a função REALLOC como achar mais conveniente para realocar memória sempre que 
necessário.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ponteiro=NULL,nm,tmd=0,*alocamento;
    while (1)
    {
        
        printf("Digite um número:");
        scanf("%i",&nm);
        if (nm<0)
        {
            break;
        }
        tmd++;
        alocamento=realloc(ponteiro,(tmd*sizeof(int)));
        if (alocamento == NULL)
        {
            printf("Erro ao alocar memória!\n");
            free(ponteiro); 
            return 1;
        }
        ponteiro=alocamento;
        ponteiro[tmd-1]=nm;
    }
    printf("VETOR:\n");
    for (int i = 0; i < tmd; i++)
    {
        printf("%i ",ponteiro[i]);
    }
    
    
}
