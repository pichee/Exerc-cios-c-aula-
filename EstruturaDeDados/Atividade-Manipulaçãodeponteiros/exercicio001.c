/*Escreva um programa que declare variáveis do tipo inteiro, real e caractere. O programa deve 
possuir 3 ponteiros, cada um associado à uma das variáveis. Modifique os valores de cada variável 
usando os ponteiros. Os valores devem ser apresentados na tela antes e depois das modificações.*/
#include <stdio.h>
    int main(){
        int inteiro=18;
        float pontoflutuante=18.746;
        char letra='g';
        int *ponteiroInteiro=&inteiro;
        float *ponteiropontoflutuante=&pontoflutuante;
        char *ponteiroLetra=&letra;
        printf("VALORES DOS PONTEIROS:\n1-Int:%i\n2-Float:%.2f\n3-Char:%c\n",*ponteiroInteiro,*ponteiropontoflutuante,*ponteiroLetra);
        inteiro=989;
        pontoflutuante=14.54;
        letra='l';
        printf("VALORES DOS PONTEIROS:\n1-Int:%i\n2-Float:%.2f\n3-Char:%c",*ponteiroInteiro,*ponteiropontoflutuante,*ponteiroLetra);
    }