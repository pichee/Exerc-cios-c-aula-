/*Implemente uma struct chamada Aluno com os campos: nome (string de até 40 caracteres), matrícula 
(inteiro) e nota1, nota 2 e média (float). Escreva um programa que contenha um vetor de N alunos. O 
programa deve permitir a entrada do nome e das duas notas para cada aluno e calcular a média 
aritmética. O campo ‘matrícula’ deve ser gerado automaticamente, contendo o número do ano e uma 
sequência numérica de 3 dígitos (exemplo: 2024001). Ao final da execução, os dados dos alunos devem 
ser apresentados, junto com uma situação conforme o valor da sua média (aprovado ou em exame*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct 
{
    char nome[40];
    int matricula;
    float nota1;
    float nota2;
    float media;
}Aluno;

int main(){
    srand(time(NULL));
    int qtd;
    printf("Digite a quantidade de alunos:\n");
    scanf("%d",&qtd);
    Aluno alunos[qtd];

    for (int i = 0; i < qtd; i++){
        alunos[i].matricula=rand()%101;
        alunos[i].matricula=alunos[i].matricula+2024000;
        printf("Digite a primeira nota do aluno %i:",alunos[i].matricula);
        scanf("%f",&alunos[i].nota1);
        printf("Digite a segunda nota do aluno %i:",alunos[i].matricula);
        scanf("%f",&alunos[i].nota2);
        alunos[i].media=(alunos[i].nota1+alunos[i].nota2)/2;
    }
    
    for (int i = 0; i < qtd; i++){
        printf("O aluno %i teve media %.2f\n",alunos[i].matricula,alunos[i].media);
       2;
    }
    

    
}
   