//Construa um programa em C que receba 3 valores X, Y e Z reais e mostre uma mensagem na tela 
//informando se a soma entre X e Y é menor, maior ou igual a Z
#include <stdio.h>
    int main(){
        float x,y,z;
        printf("Qual o valor de x:");
        scanf("%f",&x);
        printf("Qual o valor de y:");
        scanf("%f",&y);
        printf("Qual o valor de z:");
        scanf("%f",&z);
        float result=x+y;
        if (result>z)
        {
            printf("A Soma de x+y e maior que z");
        }
        else if(result==z){
            printf("A Soma de x+y e igual a  z");
        }
        else{
            printf("A Soma de x+y e menor que z");
        } 
    }
        
        
       
