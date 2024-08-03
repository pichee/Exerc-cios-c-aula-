//Autor Gustavo Pich
//0,5) Faça um programa em C que leia um número inteiro N menor que 26. O programa deve apresentar 
//todos os números inteiros de 1 até 100, substituindo os múltiplos do número informado pelo usuário pela 
//palavra “pi”. Caso o número informado seja maior ou igual a 26, o programa deve apresentar uma 
//mensagem de erro.
//Exemplo: 
//Número informado: 3.
//Saída: 1 2 pi 4 5 pi 7 8 pi 10 11 pi 13 14 pi..
#include <stdio.h>
    int main(){
        int numero_escolhido;
        printf("Digite um número de de 1 a 26:");
        scanf("%i",&numero_escolhido);
        if (numero_escolhido>26 || numero_escolhido<1){
            printf("Voce digitou um numero invalido");
            return 0;
        }
        int multiplo=0;
        while(multiplo<100)
        {
            multiplo++;
         if (multiplo%numero_escolhido==0)
         {
            printf("pi ");
         
         }
         else
         {
            printf("%i ",multiplo);
         }
         
        }
        

    }