//Autor Gustavo Pich
//Escreva um programa que leia um número inteiro e positivo. O programa deve calcular e apresentar 
//a soma dos números primos entre 1 e o número informado pelo usuário
#include <stdio.h>
    int main(){
        int numero_escolhido;
        printf("Informe um número positivo:");
        scanf("%i",&numero_escolhido);
        if (numero_escolhido<0)

        {
            printf("Número invalido");
        }
        int loopdenumeros=2;
        int numerosprimosnocaminho=2;
        int somadenumerosprimos=0;
        int boleano=0;
        while (numerosprimosnocaminho<numero_escolhido)
        {
            boleano=0;
            loopdenumeros=2;
            while (loopdenumeros<numerosprimosnocaminho)
            {
                if (numerosprimosnocaminho%loopdenumeros==0)
                {
                    boleano=1;
                }
                loopdenumeros++;
                
            }
            if (boleano==0)
            {
                somadenumerosprimos=somadenumerosprimos+numerosprimosnocaminho;
            }
            numerosprimosnocaminho++;

        }
        printf("A soma dos numeros primos de 1 a %i é igual a %i",numero_escolhido,somadenumerosprimos);
    } 