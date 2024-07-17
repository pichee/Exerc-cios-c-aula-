/*Autor: Gustavo Pich Carvalho 2
Triângulos são figuras geométricas formadas por três segmentos de reta que se encontram nas 
extremidades. Assim, são polígonos com três lados, três ângulos e três vértices. Um triângulo é um 
polígono que possui, necessariamente, três lados. 
Faça um programa em C que receba 3 números inteiros digitados pelo usuário e verifique se são valores 
válidos para os lados de um triângulo (cada lado deve ser menor que a soma dos outros dois lados). Se 
forem, o programa deverá informar se o triângulo é equilátero, isósceles ou escaleno*/
#include <stdio.h>
    int main(){
        int lado1,lado2,lado3;
        printf("Digite o comprimento do primeiro segmento:");
        scanf("%i",&lado1);
        printf("Digite o comprimento do segundo segmento:");
        scanf("%i",&lado2);
        printf("Digite o comprimento do terceiro segmento:");
        scanf("%i",&lado3);
        if (lado1!=lado2 && lado2!=lado3 && lado3!=lado1)
        {
            printf("isso forma um triangulo escaleno");
        }
        else if (lado1==lado2 && lado2==lado3)
        {
            printf("isso forma um triangulo equilatero");
        }
        else
        {
            printf("isso forma um triangulo isosceles");
        }
        }
