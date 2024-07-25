//Faça um programa que leia três notas para cada um dos vinte alunos de uma turma e escreva a 
//média aritmética de cada aluno
#include <stdio.h>
    int main(){
int i=0;
float soma,aux;
while(i<20){
    printf("Digite a primeira nota do %i aluno:",i+1);
    scanf("%f",&soma);
    aux=soma;
    printf("Digite a segunda nota do %i aluno:",i+1);
    scanf("%f",&soma);
    aux=soma+aux;
    printf("Digite a terceira nota do %i aluno:",i+1);
    scanf("%f",&soma);
    aux=soma+aux;
    aux=aux/3;
    printf("A media do primeiro aluno é %.2f\n",aux);
    aux=0;
    i++;
}}
