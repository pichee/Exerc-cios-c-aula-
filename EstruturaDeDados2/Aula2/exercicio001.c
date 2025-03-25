#include <stdio.h>
#include <string.h>
int main(){
    FILE *resposta;
    resposta=fopen("C:\\Users\\Exerc-cios-c-aula-\\EstruturaDeDados2\\Aula2\\Dados\\superFW_Jan.csv", "r+");

    if (resposta == 0)
    {
        printf("Algo deu errado");
    }
    char caracteres[300];
    int linha=0;
    char escolha[30];
    printf("Digite o que voce quer procurar em MAISCULA:");
    fgets(escolha,sizeof(escolha),stdin);
    while (fgets(caracteres,sizeof(caracteres),resposta))
    {
        linha++;
        if (strstr(caracteres,escolha) != NULL)
        {
            printf("%s na linha: %i\n",escolha,linha);
        }
        
    }
}
