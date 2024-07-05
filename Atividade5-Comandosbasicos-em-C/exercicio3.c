/*Escreva um programa que leia um número inteiro entre 1 e 10 e mostre-o escrito por extenso. 
Caso seja inserido um número fora deste intervalo, o programa deve apresentar a mensagem 
“Número inválido”
*/
#include <stdio.h>
    int main(){
        int numero;
        printf("Digite um número de 1 até 10:\n");
        scanf("%i",&numero);
        if (numero==1)
        {
            printf("Um");
        }
        if (numero==2)
        {
            printf("Dois");
        }
         if (numero==3)
        {
            printf("Tres");
        }
         if (numero==4)
        {9
            printf("Quatro");
        }
         if (numero==5)
        {
            printf("Cinco");
        }
         if (numero==6)
        {
            printf("Seis");
        }
         if (numero==7)
        {
            printf("Sete");
        }
         if (numero==8)
        {
            printf("Oito");
        }
         if (numero==9)
        {
            printf("Nove");
        }
         if (numero==10)
        {
            printf("Dez");
        }
        if (numero>10 || numero<=0)
        {
            printf("Opa parece qque alguem não digitou o numero no intervalo correto");
        }
        
        
    }
