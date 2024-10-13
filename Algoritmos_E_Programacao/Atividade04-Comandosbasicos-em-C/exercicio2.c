/*Um clube de futebol pretende classificar seus atletas em categorias. Para isso ele contratou um 
programador para criar um programa para executar essa tarefa. O programa deve solicitar o nome 
e a idade de um atleta e imprimir os seus dados juntamente com a sua categoria. Utilize a tabela 
abaixo para determinar a categoria de cada atleta.
Idade Categoria
05 a 10 Infantil
11 a 15 Juvenil
16 a 20 Junior
21 a 25 Profissional
Desafio: faça este programa utilizando uma estrutura de caso (switch-case)

*/
#include <stdio.h>
    int main(){
        char nome[100];
        int idade;
        int cat;
        printf("Digite seu nome:");
        scanf("%99[^\n]",nome);
        printf("Qual é a idade de %s",nome);
        scanf("%i",&idade);
        if (idade<5)
        {
            cat=1;
        }
        else if(idade>=5 && idade<=10)
        {
           cat=2;
        }
        else if(idade>=11 && idade<=15)
        {
            cat=3;
        }
        else if(idade>=16 && idade<=20)
        {
            cat=4;
        }
        else
        {
            cat=5;
        }
        switch (cat)
        {
        case 1:
            printf("Categoria invalida");
            break;
        case 2:
            printf("%s participa da categoria Infantil",nome);
            break;
        case 3:
            printf("%s participa da categoria Juvenil",nome);
        break;
        case 4:
            printf("%s participa da categoria Junior",nome);
        break;
        case 5:
            printf("%s participa da categoria Profissional",nome);
        }
        printf("Algo deu errado tente novamente");
        return 0;

    }
