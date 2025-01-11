/*Crie uma struct chamada Produto, contendo os campos: nome (string de até 30 caracteres), quantidade 
(inteiro) e preço (float). Faça um programa que leia os dados de 5 produtos e calcule o valor total em 
estoque de cada produto (quantidade * preço) e apresente na tela os dados dos produtos e o valor total*/
#include <stdio.h>
typedef struct 
{
    char nome[30];
    int qtd;
    float price;
}Produto;

int main(){
    Produto produtos[5];
    float valorTotal=0;
    for (int i = 0; i < 5; i++){
    
    printf("Digite o nome do produto:\n");
    getchar();
    scanf("%29[^\n]",produtos[i].nome);

    printf("Digite a quantidade:\n");
    scanf("%d",&produtos[i].qtd);

    printf("Digite o preço:");
    scanf("%f",&produtos[i].price);

    
}

    for (int i = 0; i < 5; i++)
    {
        valorTotal=produtos[i].price*produtos[i].qtd;
        printf("%i.%s.Valor total:%f\n",i+1,produtos[i].nome,valorTotal);
    }
    
    }
