/*Autor: Gustavo Pich Carvalho 1
Faça um programa Escreva um programa em C que leia o sexo, o peso e a altura de uma pessoa. O programa deve 
calcular o Índice de Massa Corporal (IMC) com base nos dados inseridos e apresentar a classificação 
conforme o quadro abaixo:
Homem Mulher IMC
Abaixo de 20 Abaixo de 19 Abaixo do peso
Entre 20 a 24,9 Entre 19 e 23,9 Normal
Entre 25 e 29,9 Entre 24 e 28,9 Obesidade leve
Entre 30 e 39,9 Entre 29 e 38,9 Obesidade Moderada
Acima de 40 Acima de 39 Obesidade mórbida*/
#include <stdio.h>
    int main(){
        char genero;
        float peso,altura;
        printf("Qual é seu genero:\nMasculino[m]\nFeminino[f]\nDigite aqui:");
        scanf("%c",&genero);
        getchar();
            if (genero=='M' || genero=='F')
            {
            printf("Por favor não utilize letras em capslock");
            return 0;
            }
            if (genero!='m' && genero!='f')
            {
            printf("Genero invalido tente novamente\n");
            return 0;
            }
        printf("Qual o seu peso:");
        scanf("%f",&peso);
            if (peso<=0)
            {
            printf("Peso invalido tente novamente\n");
            return 0;
            }
        printf("Qual o sua altura:");
        scanf("%f",&altura);
            if (altura<=0)
            {
            printf("Altura invalida tente novamente\n");
            return 0;
            }
        float imc=peso/(altura*altura);
        //Gurizes
            if (imc<20 && genero=='m')
            {
                printf("Abaixo do peso");
            }
            if (imc>=20 && imc<=24.9 && genero=='m')
            {
                printf("Normal");
            }
            if (imc>=25 && imc<=29.9 && genero=='m')
            {
                printf("Obesidade leve");
            }
            if (imc>=30 && imc<=39.9 && genero=='m')
            {
                printf("Obesidade Moderada");
            }
            if (imc>40 && genero=='m')
            {
                printf("Obesidade Mórbida");
            }
        //Gurias
            if (imc<19 && genero=='f')
            {
                printf("Abaixo do peso");
            }
            if (imc>=19 && imc<=23.9 && genero=='f')
            {
                printf("Normal");
            }
            if (imc>=24 && imc<=28.9 && genero=='f')
            {
                printf("Obesidade leve");
            }
            if (imc>=29 && imc<=38.9 && genero=='f')
            {
                printf("Obesidade Moderada");
            }
            if (imc>39 && genero=='f')
            {
                printf("Obesidade Mórbida");
            }

        
        
    }
