/*Autor Gustavo Pich Carvalho
 Um lojista contratou você para desenvolver um programa que calcule o valor final de uma compra, 
considerando possíveis descontos. Após pesquisar, você descobriu as seguintes informações sobre os 
descontos que ele oferece:
• Os descontos são aplicados de acordo com a forma de pagamento escolhida:
o Pagamento à vista em dinheiro: 10% de desconto.
o Pagamento à vista no cartão de débito: 5% de desconto.
o Pagamento parcelado em até 3 vezes no cartão de crédito: sem desconto.
o Pagamento parcelado em 4 vezes ou mais no cartão de crédito: acréscimo de 5% sobre o 
valor total.
Além disso, o lojista oferece um desconto especial para clientes frequentes:
• Se o cliente realizou mais de 10 compras no último ano, ele recebe um desconto adicional de 
5%.
Desenvolva um programa em C que calcule o valor final da compra de um cliente. O programa deve 
solicitar ao usuário os seguintes dados:
• Nome do cliente;
• Valor da compra;
• Forma de pagamento (1 para dinheiro, 2 para cartão de débito, 3 para cartão de crédito);
• Número de parcelas (se a forma de pagamento for cartão de crédito);
• Número de compras realizadas pelo cliente no último ano.
O programa deve calcular e apresentar ao usuário:
• O valor total da compra, considerando os descontos ou acréscimos aplicáveis;
• O valor de cada parcela (se aplicável);
• O percentual de desconto ou acréscimo aplicado.*/
#include <stdio.h>
    int main(){
        char nome[100];
        float compra;
        int parcela,ano,pagamento;
        int totalpagar;
        printf("Qual o seu nome:");
        scanf("%99[^\n]",nome);
        getchar();
        printf("Qual foi o valor da compra:");
        scanf("%f",&compra);
        if (compra<=0)
        {
            printf("O valor da compra tem que ser no minimo R$1,00\nTente novamente");
            return 0;
        }
         printf("FORMAS DE PAGAMENTO:\n[1]Dinheiro\n[2]Cartão de débito\n[3]Cartão de credito\nDigite aqui:");
         scanf("%i",&pagamento);
        if(pagamento<=0 || pagamento>3)
        {
           printf("Forma de pagamento invalida tente novamente");

        }
        if (pagamento==3)
        {
            printf("Qual o numero de parcelas que voce quer:");
            scanf("%i",&parcela);
            if (parcela<=0)
            {
                printf("O numero de parcelas tem que ser no minimo 1 tente novamente");
                return 0;
            }
            
        }
        printf("Compras realizadas pelo cliente %s no ultimo ano:",nome);
        scanf("%i",&ano);
        //Pagamento
        if (pagamento==1 && ano>=10)
        {
            totalpagar=compra-(compra*0.15);
            printf("O valor total a pagar sera %i",totalpagar);
            return 0;

        }
        else if (pagamento==1)
        {
            totalpagar=compra-(compra*0.10);
            printf("O valor total a pagar sera %i",totalpagar);
            return 0;
        }
        else if (pagamento==2 && ano>=10)
        {
            totalpagar=compra-(compra*0.10);
            printf("O valor total a pagar sera %i",totalpagar);
            return 0;

        }
        else if (pagamento==2)
        {
            totalpagar=compra-(compra*0.5);
            printf("O valor total a pagar sera %i",totalpagar);
            return 0;
        }
        if (pagamento==3 && parcela<=3)
        {
            totalpagar=compra;
            printf("O valor total a pagar sera %i",totalpagar);
            return 0;

        }
        else
        {
            totalpagar=compra+(compra*0.05);
            printf("O valor total a pagar sera %i",totalpagar);
            return 0;
        }
    }
