/*Crie um programa que contenha vetor de 100 elementos. Cada posição deve armazenar a letra ‘X’ ou 
‘O’, conforme o valor do seu índice. Caso o índice seja par, a posição deve armazenar a letra ‘X’.
Caso o índice seja ímpar, aquela posição deve armazenar o valor ‘O’. Feito isso, o programa deve
apresentar o resultado na tela.*/
#include <stdio.h>
    int main(){
        char x_ou_o[100];
        int verificador=0,contador=1;
        for (verificador = 0; verificador < 100; verificador++)
        {
            if (verificador%2==0)
            {
                x_ou_o[verificador]='X';
            }
            else
            {
                x_ou_o[verificador]='Y';
            }
            
        }
        printf("%s\n",x_ou_o);
    }
