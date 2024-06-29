// Escreva um programa que receba dois valores inteiros e mostre uma mensagem na tela 
//informando se os números são múltiplos ou não.
#include <stdio.h>
    int main(){
        int numero,numero1; 
        printf("Digite um numero");
        scanf("%i",&numero);
        printf("Digite um outro numero");
        scanf("%i",&numero1);
        int resultado=numero1*numero;
        if (resultado%numero==0 && resultado%numero1==0)
        {
            printf("Os numeros sao multiplos");
        }
        else
        {
            printf("Os numeros nao sao multiplos");
        }
    }
