//Faça um programa em C que leia dois números reais e indique se são iguais ou diferentes. Mostre 
//o Maior e o menor respectivamente
#include <stdio.h>
    int main(){
        float numero,numero1;
        printf("Coloque um numero:");
        scanf("%f",&numero);
        printf("Coloque outro numero:");
        scanf("%f",&numero1);
        if (numero1==numero)
        {
            printf("Os dois numeros sao iguais");
        }
        else if (numero1>numero)
        {
            printf("Os numeros sao diferentes e %.2f e maior que %.2f",numero1,numero);
        }
        else
        {
            printf("Os numeros sao diferentes e %.2f e maior que %.2f",numero,numero1);
        }
        
        
    }
