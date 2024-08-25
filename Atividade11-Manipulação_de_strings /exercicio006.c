/*Escreva um programa que leia uma string e informe se ela é um palíndromo ou não.*/
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
    c=c-1;
    int i=0;
    int palindromo=0;
    while(c>0){
        if (palavra[c]==palavra[i])
        {
            palindromo=1;
            
        }
        else{
            palindromo=0;
            break;
        }
        c--;
        i++;
    }
    if (palindromo==1)
    {
        printf("Essa palavra é um palindromo");
    }
    else{
        printf("Essa palavra não é um palindromo");
    }
    
}
int main(){
    char palavra[100];
    printf("Digite a sua palavra:");
    scanf("%99[^\n]",palavra);
    int contador=caracteres(palavra);
    outrolado(contador,palavra);
    }
