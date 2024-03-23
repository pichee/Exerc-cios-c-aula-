//Faça um algoritmo para calcular o volume de uma lata cilíndrica através da seguinte fórmula: 
//Vol = 3,14. r². h. O algoritmo deve receber o valor do raio (r) e da altura (h) e, após calcular o volume, 
//mostrar o resultado ao usuário. Procure empregar o conceito de constantes e variáveis neste problema.
#include <stdio.h>
#define pi 3.14
int main (void){
    float r,h,vol;
    printf("\\n informe a altura da sua lata cilíndrica");
    scanf("%f",&h);
    printf("\\n informe o raio do recipiente");
    scanf("%f",&r);
    vol =pi * r * r * h;
    printf("\n O volume desse recipiente é igual a: %.2f\n",vol);
    return(0);
}
