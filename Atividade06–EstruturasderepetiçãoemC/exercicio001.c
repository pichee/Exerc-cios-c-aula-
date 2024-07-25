//1. Escreva um programa em C que usa um laço do tipo for para imprimir a seguinte sequência de 
//números: 1 2 4 8 16 32 64 128 256 
#include <stdio.h>
    int main(){
         int i=0,num=1;
        for (i = 0; i <=8; i++)
        {
            printf("%i ",num);
            num=num*2;
        }
        
    }
