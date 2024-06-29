//Escreva um programa em C que leia uma temperatura em Fahrenheit e a apresente convertida em graus 
//Celsius. Fórmula de conversão: C = (F - 32) * (5 / 9)
#include <stdio.h>
int main(){
    float f,c;
    printf("Fale a temperatura em Fahrenheit:");
    scanf("%f",&f);
    f=5*(f-32)/9;
    printf("A temperatura Corresponde a  graus em Celsius %.2f",f);
}
