//Escreva um programa que receba dois números reais, faça uma divisão entre eles e mostre na tela o divisor, 
//o dividendo, o quociente e o resto da divisão
#include <stdio.h>
    int main(){
        int n1,n2;
        printf("Qual o divedendo:");
        scanf("%i",&n1);
        printf("Qual o quociente:");
        scanf("%i",&n2);
        int n = n1 % n2;
        printf("O divedendo é %i o quociente é %i e o resto da divisao entre eles é %i",n1,n2,n);
        
    }
