/*Escreva um programa que contenha duas estruturas: a primeira dela deve se chamar ‘endereco’ e deve 
possuir os seguintes dados: rua, numero, complemento e bairro; a segunda estrutura deve conter os 
seguintes dados de ‘cliente’: nome, data de nascimento e endereço, sendo esta última a estrutura criada 
anteriormente. O programa deve ler os dados de um cliente e apresenta-los na tela*/
#include <stdio.h>
typedef struct 
{
    char rua[99],complemento[99],bairro[99];
    int numero;
}Endereco;
typedef struct 
{
    char nome[40];
    int dia,mes,ano;
}Cliente;
int main(){
    Endereco endereco;
    Cliente cliente;

    printf("Digite o nome do cliente: ");
    scanf("%s", cliente.nome);  

    printf("Digite a data de nascimento do cliente (dia mes ano): ");
    scanf("%d %d %d", &cliente.dia, &cliente.mes, &cliente.ano);

    printf("Digite a rua do cliente: ");
    scanf("%s", endereco.rua);  

    printf("Digite o complemento (se houver): ");
    scanf("%s", endereco.complemento); 

    printf("Digite o bairro do cliente: ");
    scanf("%s", endereco.bairro);  

    printf("Digite o número da residência: ");
    scanf("%d", &endereco.numero);

    printf("\n--- Dados do Cliente ---\n");
    printf("Nome: %s\n", cliente.nome);
    printf("Data de Nascimento: %02d/%02d/%d\n", cliente.dia, cliente.mes, cliente.ano);

    printf("\n--- Endereço ---\n");
    printf("Rua: %s\n", endereco.rua);
    printf("Complemento: %s\n", endereco.complemento);
    printf("Bairro: %s\n", endereco.bairro);
    printf("Número: %d\n", endereco.numero);
}