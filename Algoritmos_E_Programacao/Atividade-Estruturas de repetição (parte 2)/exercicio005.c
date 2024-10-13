//Elaborar um programa que efetue a leitura sucessiva de valores numéricos e apresente no final o 
//somatório, a média e o total de valores lidos. O programa deve fazer as leituras dos valores 
//enquanto o usuário estiver fornecendo valores positivos. Ou seja, o programa deve parar quando 
//o usuário entrar com um valor negativo
#include <stdio.h>
    int main(){
        int c=0,soma=0,valor;
        float media;
      while(1)
      {
        printf("Digite um valor:");
        scanf("%i",&valor);
        if (valor<0){
            break;
        }
        else{
            c++;
            soma+=valor;
        }
                }
        media=soma/c;
        printf("Foram contados %i valores soma igual a %i media igual a %.2f",c,soma,media);
    }
