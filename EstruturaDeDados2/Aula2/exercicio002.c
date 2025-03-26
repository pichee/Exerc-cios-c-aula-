#include <stdio.h>
#include <string.h>
int main(){
    char nome[30],cpf[30],telefone[30],idade[3];
    printf("Digite seu nome completo");
    fgets(nome,sizeof(nome),stdin);
    printf("Digite seu cpf completo");
    fgets(cpf,sizeof(cpf),stdin);
    printf("Digite seu telefone completo");
    fgets(telefone,sizeof(telefone),stdin);
    printf("Digite sua idade completa");
    fgets(idade,sizeof(idade),stdin);
    FILE *resposta;
    resposta=fopen("resposta.csv", "w");
    fprintf(resposta,"%s;%s;%s;%s",nome,cpf,telefone,idade);
    fclose(resposta);
    
}
