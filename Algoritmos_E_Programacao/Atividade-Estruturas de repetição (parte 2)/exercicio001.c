//Escreva um programa que calcule a soma dos números pares entre 1 e 100
#include <stdio.h>
int main(){
    int i=0,soma;
    printf("Numeros pares até 100:");
    for(i=0;i<=100;i++){
        if (i%2==0){
            printf("%i ",i);
            soma+=i;
        }
    }
    printf("A ssoma desses numeros é igual a %i",soma);
}
