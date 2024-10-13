/*Faça um programa que contenha uma função que verifique se uma data é válida ou não, 
retornando os valores VERDADEIRO (1) para data válida ou FALSO (0) para data inválida. Os 
parâmetros da função são três números inteiros, correspondentes a dia, mês e ano da data a ser 
verificada.*/
#include <stdio.h>
int verificador(int dia,int mes,int ano){
    if (dia>31 || dia<=0 || mes>12 ||mes<=0 || ano<=0)
    {
        return printf("Data invalida");
    }
    else{
        return printf("Data valida");
    }
}
    int main(){
        int dia,mes,ano;
        printf("Digite um dia:");
        scanf("%i",&dia);
        printf("Digite um mes:");
        scanf("%i",&mes);
        printf("Digite um ano:");
        scanf("%i",&ano);
        verificador(dia,mes,ano);
    }
