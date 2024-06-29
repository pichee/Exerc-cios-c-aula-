//Suponha que o conceito de um aluno seja determinado em função de sua nota. Crie um algoritmo 
//que receba duas notas de um aluno, calcule e apresente a média e o conceito conforme a tabela 
//abaixo:
//Nota 0 a 4,9 Insuficiente
//Nota 5,0 a 6,4 Regular
//Nota 6,5 a 8,4 Bom 
//Nota 8,5 a 10,0 Ótimo
#include <stdio.h>
    int main(){
        float nota1,nota2;
        printf("Qual foi sua primeira nota:");
        scanf("%f",&nota1);
        printf("Qual foi sua segunda nota:");
        scanf("%f",&nota2);
        float media=(nota1+nota2)/2;
        if (media<=4.9)
        {
            printf("Sua nota foi insuficiente");
        }
        else if (media>=5 && media<=6.4)
        {
            printf("Sua nota foi regular");
        }
        else if (media>=6.5 && media<=8.4)
        {
            printf("Sua nota foi Boa");
        }
        else if (media>=8.5 && media<=10)
        {
            printf("Sua nota foi otima");
        }
        else
        {
            printf("Voce digitou algum numero errado");
        }
        
    }
