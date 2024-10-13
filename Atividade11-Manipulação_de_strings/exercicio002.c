/*
Crie um programa que leia uma string e conte quantas vogais ela possui. 
*/
#include <stdio.h>
int contagem(char algo[100]){
    int c=0,i;
        for (i = 0; i < 100; i++)
    {
        if (algo[i]=='A'||algo[i]=='a'||algo[i]=='E'||algo[i]=='e'||algo[i]=='I'||algo[i]=='i'||algo[i]=='O'||algo[i]=='o'||algo[i]=='u'||algo[i]=='U')
        {
            c++;
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
        printf("Essa palavra tem %i vogais",contador);
    }
