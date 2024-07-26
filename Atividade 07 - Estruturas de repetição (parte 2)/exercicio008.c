//Elaborar um programa que efetue a leitura de valores positivos inteiros até que um valor negativo 
//seja informado. No final da execução do programa, devem ser apresentados o maior e o menor 
//valor lido.
#include <stdio.h>
    int main(){
        int maior=0,menor=99999999,i=0;
        while(i>0){
            printf("Digte um numero");
            scanf("%i",&i);
            if (i>maior){
                maior=i;
            }
            if (i<menor){
                menor=i;
            }
            
            
        }
        printf("%i maior numero,menor numero %i",maior,menor);
    }
