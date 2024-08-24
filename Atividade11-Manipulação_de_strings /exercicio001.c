/* Faça um programa que leia uma string e conte quantos caracteres ela possui, sem utilizar a função 
strlen:*/
#include <stdio.h>
int contagem(char algo[100]){
    int c=0,i;
        for (i = 0; i < 100; i++)
    {
        if (algo[i]!='\0')
        {
            c++;
        }
        else{
            break;
        }
        
    }
    return c;
}
    int main(){
        char algo[100]={0};
        int contador;
        printf("Digite algo:");
        scanf("%99[^\n]",algo);
        contador=contagem(algo);
        printf("Essa palavra tem %i caracteres",contador);
    }
