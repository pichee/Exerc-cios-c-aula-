//Desenvolver um programa que apresente todos os números divisíveis por 4 que sejam menores
//que 200.
#include <stdio.h>
    int main(){
        int i=0;
        printf("Numeros ate 200 diviseveis por 4:");
        for (i = 0; i <= 200; i++)
        {
            if (i%4==0)
            {
                printf("%i ",i);
            }
            
        }
    }
