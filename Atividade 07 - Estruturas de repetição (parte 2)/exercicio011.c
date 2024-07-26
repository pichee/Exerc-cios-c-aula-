//Escreva um programa que calcule a média aritmética de um conjunto de números informados pelo 
//usuário. O programa deve solicitar ao usuário quantos números ele deseja informar e, em seguida, 
//solicitar cada um dos números
#include <stdio.h>
    int main(){
        float media=0,soma=0,i=0,c=0,cp=0;
        printf("Digite quantos valores voce quer digitar");
        scanf("%f",&i);
        while(c<i){
            printf("Digite o numero");
            scanf("%f",&cp);
            soma=soma+cp;
            c++;
        }
        media=soma/i;
        printf("positivos é %f e sua media é %f",soma,media);
    }
