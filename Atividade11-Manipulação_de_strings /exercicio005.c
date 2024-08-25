/*Faça um programa que leia uma string e faça a sua inversão e apresente o resultado na tela.*/
#include <stdio.h>
int caracteres(char palavra[100]){
    int c=0,i;
    for (i = 0; i < 100; i++)
    {
        if (palavra[i]!='\0')
        {
            c++;
        }
        else{
            break;
        }
        
    }
    return c;
}
void outrolado(int c,char palavra[c]){
    while(c>=0){
        printf("%c",palavra[c]);
        c--;
    }
}
int main(){
    char palavra[100];
    printf("Digite a sua palavra:");
    scanf("%99[^\n]",palavra);
    int contador=caracteres(palavra);
    outrolado(contador,palavra);
    }
