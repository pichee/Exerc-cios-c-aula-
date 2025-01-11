/*Defina uma struct chamada Pessoa que contenha os seguintes campos: nome (string de até 50 
caracteres), idade (inteiro) e altura (float). Depois, crie um programa que leia os dados de uma pessoa e 
os exiba na tela*/
#include <stdio.h>
typedef struct{
    char nome[50];
    int idade;
    float altura;
}Pessoa;
int main(){
    Pessoa pessoa;
    printf("Digite seu nome:\n");
    scanf("%49[^\n]",pessoa.nome);

    printf("Digite sua idade:\n");
    scanf("%d",&pessoa.idade);

    printf("Digite sua altura");
    scanf("%f",&pessoa.altura);

    printf("Nome:%s\nIdade:%d\nAltura:%.2f",pessoa.nome,pessoa.idade,pessoa.altura);
    
}