//Desenvolva um programa em C que peça ao usuário para digitar um número inteiro positivo e 
//imprima todos os números pares entre 0 (zero) e o número digitado. Use um laço do-while. 
#include <stdio.h>
    int main(){
        int i=0,aux=0;
        printf("Coloque um numero posivo:");
        scanf("%i",&aux);
        do
        {
            printf("%i ",i);
            i++;
        } while (i<=aux);
        
    }
