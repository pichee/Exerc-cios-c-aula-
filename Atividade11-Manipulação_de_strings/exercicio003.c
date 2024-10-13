/*3.Escreva um programa em C que leia duas strings com no máximo 30 caracteres. O programa deve 
informar se as strings são iguais ou diferentes, utilizando duas técnicas: comparação de caracteres, 
um a um, e a função strcmp. Mostre um menu ao usuário perguntando qual o método de 
comparação desejado. Procure empregar o uso de sub-rotinas.*/
#include <stdio.h>
int contagem(char palavra[31],char outra_palavra[31]){
    int quantidade_letras_palavra=0,i;
        for (i = 0; i < 100; i++)
        {
        if (palavra[i]!='\0')
        {
            quantidade_letras_palavra++;
        }
        else{
            break;
        }
                    }   
    i=0;
    int checagem=0;
        for (i = 0; i < quantidade_letras_palavra; i++)
        {
        if (palavra[i]==outra_palavra[i])
        {
            checagem=1;
        }
        else{
            checagem=0;
            break;
        }
                    }   
    
    return checagem;
}
    int main(){
        char palavra[31]={0},outra_palavra[31]={0};
        int ver;
        printf("Digite algo:");
        scanf("%30[^\n]",palavra);
        getchar();
        printf("Digite outra coisa:");
        scanf("%30[^\n]",outra_palavra);
        ver=contagem(palavra,outra_palavra);
        if(ver==0){
            printf("Essas palavras são diferentes");
        }
        else{
        printf("Essa palavra são iguais");
        }    
    }
