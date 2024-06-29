 //Escreva um programa em C que receba um número inteiro e imprima na tela “F1”, “F2” ou “F3”, 
//conforme as condições abaixo
//a) F1 se n <= 10
//b) F2 se n > 10 e n <= 100
//c) F3 se n > 100
#include <stdio.h>
int main(){
int n;
printf("Digite um número:");
scanf("%i",&n);

if(n<=10){
printf("F1");
}
else if(n > 10 & n <= 100){
printf("F2");
}
else if(n>100){
printf("F3");
}
else{
printf("Nenhuma condição foi atendida");
}}
