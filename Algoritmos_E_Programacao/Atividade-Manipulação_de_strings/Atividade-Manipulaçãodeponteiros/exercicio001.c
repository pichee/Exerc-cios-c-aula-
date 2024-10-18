/*Escreva um programa que declare variáveis do tipo inteiro, real e caractere. O programa deve 
possuir 3 ponteiros, cada um associado à uma das variáveis. Modifique os valores de cada variável 
usando os ponteiros. Os valores devem ser apresentados na tela antes e depois das modificações.*/
#include <stdio.h>
    int main(){
        int inteiro=9;
        float numeroComVirgula=9.99;
        char nome='G';
        int *ponteiroDeInteiro=&inteiro;
        float *ponteiroDeFloat=&numeroComVirgula;
        char *ponteiroDeNome=&nome;
        printf("Valor atual dos ponteiros:\ninteiro-%i\nfloat-%.2f\ncaractere-%c",*ponteiroDeInteiro,*ponteiroDeFloat,*ponteiroDeNome);
        inteiro=90;
        numeroComVirgula=19.87;
        nome='D';
        printf("\nValores novos dos ponteiros:\ninteiro-%i\nfloat-%.2f\ncaractere-%c",*ponteiroDeInteiro,*ponteiroDeFloat,*ponteiroDeNome);
        
    }
