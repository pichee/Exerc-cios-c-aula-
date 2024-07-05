/*Crie um programa que contenha uma estrutura de caso para apresentar um menu com as opções 
descritas abaixo. O programa deve receber um número real e apresentar o resultado da operação 
no final da execução.
a. Raiz quadrada
b. Metade do valor
c. 10% do valor
d. Dobro do valo
*/
#include <stdio.h>
#include <math.h>
    int main(){
        float numero;
        printf("Digite o valor que voce quer:");
        scanf("%f",&numero);
        printf("O que voce quer fazer com ele:\nraiz quadrada[1]\nPegar metade do valor[2]\npegar 10 porcento dele[3]\nDobrar ele[4]");
        if (numero==1)
        {
            pow(numero,2);
            printf("%f",numero);
        }
        if (numero==2)
        {
            numero=numero/2
            printf("%f",numero);
        }
        if (numero==3)
        {
            numero=(numero*0.10)+numero;
            printf("%f",numero);
        }
        if (numero==4)
        {
            numero=numero*2;
            printf("%f",numero);
        }
        
        }
