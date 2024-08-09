/*Faça um algoritmo que contenha um vetor de 20 elementos inteiros. As 10 primeiras posições do 
vetor devem ser preenchidas por valores informados pelo usuário. As 10 últimas posições do vetor 
devem ser preenchidas de maneira que, os elementos de índice par tenham o valor do índice + 2%, e 
os elementos de índice ímpar devem conter o valor do índice + 5%. 
Exemplo: vet[11] = 11 + 2%; vet[12] = 12 + 5%*/
    
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    int main(){
    srand(time(NULL));
    int elementos[20];
    int auxiliar=0;
    for (auxiliar = 0; auxiliar <20; auxiliar++)
    {
        elementos[auxiliar]=rand()%101;
        
        if (auxiliar>9)
        {
            if (auxiliar%2==0)
            {
            elementos[auxiliar]=elementos[auxiliar]+elementos[auxiliar]*0.02;
            }
            else
            {
              elementos[auxiliar]=elementos[auxiliar]+elementos[auxiliar]*0.05;   
            }
            
            
        }
       printf("%i ",elementos[auxiliar]); 
    }

    }
