//Elaborar um programa que leia 15 valores numéricos inteiros positivos e apresente a soma dos fatoriais destes números
//fatoriais destes números.
#include <stdio.h>
    int main(){
        int c=0,soma=1,valor,fatorial,i=1;
      while(c<=15)
      {
        printf("Digite um valor:");
        scanf("%i",&valor);
        fatorial=0;
        while (i<=valor){
            fatorial=fatorial*i;
            i++;
        }
        soma=soma+fatorial;
        c++;
        }
        }
