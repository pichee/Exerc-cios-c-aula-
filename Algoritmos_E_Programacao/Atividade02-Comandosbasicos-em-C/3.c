//Faça um programa que leia a velocidade de um veículo em Km/H e calcule e imprima a velocidade em 
//m/s.
#include <stdio.h>
    int main(){
        float km,ms;
        printf("Qual a velocide do carro em km/h:");
        scanf("%f",&km);
        ms=km/3.6;
        printf("Em metros por segund corresponde a %.2f",ms);
    }
