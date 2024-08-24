/*Faça um programa que concatene (junte) duas strings informadas pelo usuário. O programa deve 
conter duas opções: 1. Sem utilizar a função strcat; e 2. Utilizando a função strcat. Ao final da 
execução, as 3 strings devem ser apresentadas.*/
#include <stdio.h>
int contagem(char palavra[31],char outra_palavra[31]){
    char novastring[62];
    int quantidade_letras_palavra=0,i;
        for (i = 0; i < 31; i++)
        {
        if (palavra[i]!='\0')
        {
            novastring[i]=palavra[i];
            quantidade_letras_palavra++;
        }
        else{
            break;
        }
                    }   
    int aux=quantidade_letras_palavra;
    i=0;
    for (i=0; i < 31; i++)
        {
        if (outra_palavra[i]!='\0')
        {
            novastring[aux]=outra_palavra[i];
            aux++;
        }
        else{
            break;
        }
                    }
        novastring[aux] = '\0';  
        return printf("A junção das duas strings formaram a palavra %s",novastring);
}
    int main(){
        char palavra[31]={0},outra_palavra[31]={0};
        int ver;
        printf("Digite algo:");
        scanf("%30[^\n]",palavra);
        getchar();
        printf("Digite outra coisa:");
        scanf("%30[^\n]",outra_palavra);
        contagem(palavra,outra_palavra);
    }
