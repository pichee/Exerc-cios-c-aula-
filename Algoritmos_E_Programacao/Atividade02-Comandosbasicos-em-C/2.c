//Escreva um programa que leia dois valores para duas variáveis (x e y) do tipo float. O programa deve 
//conter uma variável (result) do tipo int para receber um valor booleano que deve ser apresentada no final 
//da execução. Utilize a expressão result = (x != y) e observe a saída do programa
#include <stdio.h>
    int main(){
        float x,y;
        int result;
        printf("valor de x:");
        scanf("%f",&x);
        printf("valor de y:");
        scanf("%f",&y);
        result=(x !=y);
        printf("O resultado é %i",result);
    }
