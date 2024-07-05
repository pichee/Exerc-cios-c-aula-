//Crie um programa em C que receba o valor do salário e calcule o aumento salarial conforme as 
//regras abaixo:
//a. Se salário < R$ 1.500,00: aumento de 15%
//b. Se R$ 1.500,00 <= salário < R$ 1.750,00: aumento de 12%
//c. Se R$ 1.750,00 <= salário < R$ 2.000,00: aumento de 10%
//d. Se R$ 2.000,00 <= salário < R$ 3.000,00: aumento de 7%
//e. Se salário > R$ 3.000,00: aumento de 5%
#include <stdio.h>
    int main(){
        float salario;
        printf("Qual o seu salário:");
        scanf("%f",&salario);
        if (salario<1500)
        {
            salario=(salario*0.15)+salario;
            printf("Seu novo salario é igual  a %.2f",salario);
        }
        if (salario>=1500 && salario<1750)
        {
            salario=(salario*0.12)+salario;
            printf("Seu novo salario é igual a %.2f",salario);
        }
        if (salario>=1750 && salario<2000)
        {
            salario=(salario*0.10)+salario;
            printf("Seu novo salario é igual a %.2f",salario);
        }
        if (salario>=2000 && salario<3000)
        {
            salario=(salario*0.7)+salario;
            printf("Seu novo salario é igual a %.2f",salario);
        }
        if (salario>3000)
        {
            salario=(salario*0.5)+salario;
            printf("Seu novo salario é igual a %.2f",salario);
        }
        
    }
