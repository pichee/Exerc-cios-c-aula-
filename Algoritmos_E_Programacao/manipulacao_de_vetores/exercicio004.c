/*4. Construa um programa em C que leia valores reais para 2 vetores de 10 posições. O programa também 
deve conter um terceiro vetor cujo conteúdo de cada posição é: 1, se o número armazenado em uma 
posição do 1º vetor é o mesmo armazenado na posição respectiva do 2º, e 0, */
#include <stdio.h>
    int main(){
        int vetor1[10],vetor2[10],vetorfinali[10],i=0;
        for (i = 0; i <=9 ; i++)
        {
            printf("Digite o valor %i do vetor1:",i+1);
            scanf("%i",&vetor1[i]);
            printf("Digite o valor %i do vetor2:",i+1);
            scanf("%i",&vetor2[i]);
            if (vetor1[i]==vetor2[i])
            {
                vetorfinali[i]=1;
            }
            else{
                vetorfinali[i]=0;
            }
            
        }
        i=0;
        for (i = 0; i <=9; i++)
        {
            printf("%i ",vetorfinali[i]);
        }
        
        
    }
