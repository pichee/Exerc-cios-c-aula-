//Escreva um programa em C que leia diversos números e mostre quantas vezes o número 10 foi
//digitado. O valor 0 (zero) é o código de fim de entrada.
#include <stdio.h>
    int main(){
        int i=1,aux=0;
        while (i!=0)
        {
        printf("Digite um numero:");
        scanf("%i",&i);
        if (i==10){
            aux++;
        }
        }
        printf("Foram registrados %i numeros 10",aux);
    }
