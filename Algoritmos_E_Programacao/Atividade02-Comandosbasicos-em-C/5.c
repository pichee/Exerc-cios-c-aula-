// Faça um programa que:
//a) Obtenha o valor para a variável HT (horas trabalhadas no mês);
//b) Obtenha o valor para a variável VH (valor da hora trabalhada);
//c) Obtenha o valor para a variável PD (percentual de desconto);
//d) Calcule o salário bruto [SB = HT * VH];
//e) Calcule o total de desconto [TD = (PD / 100) * SB];
//f) Calcule o salário líquido [SL = SB - TD];
//Apresente os valores de horas trabalhadas, salário bruto, desconto e salário líquido.
#include <stdio.h>
    int main(){
        int ht;
        float vh,pd,salariobruto,totaldesconto,salarioliquui;
        printf("Quantas horas voce gtrabalhou no mes?");
        scanf("%i",&ht);
        printf("Qual o valor da hora:");
        scanf("%f",&vh);
        printf("Qual o Valor do desconto percentual:");
        scanf("%f",&pd);
        salariobruto=ht*vh;
        totaldesconto=(pd/100)*salariobruto;
        salarioliquui=(salariobruto - totaldesconto);
        printf("Horas trabalhadas:%i\nsalario bruto:%2.f\ndesconto:%2.f\nsalario liquido:%2.f",ht,salariobruto,totaldesconto,salarioliquui);
        
        
        
    }
