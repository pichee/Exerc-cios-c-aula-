//Faça um programa que leia números inteiros até que o valor zero seja informado, o qual deve ser 
//desconsiderado. Após a leitura do valor zero, o programa deve mostrar quantos dos números 
//informados são negativos e a média aritmética dos números maiores que zero
#include <stdio.h>
    int main(){
        int media=0,soma=0,i=0,c=0,cp=0;
        while(1){
            printf("Digite um numero");
            scanf("%i",&i);
            if (i==0)
            {
                break;
            }
            if (i<0){
                c++;
            }
            if (i>0){
                soma=soma+i;
                cp++;
            }
            
            
        }
        media=soma/cp;
        printf("%i valores negativos e a soma dos positivos é %i e sua media é %i",c,soma,media);
    }
