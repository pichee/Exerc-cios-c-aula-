/*Elabore um programa que simule a memória de um computador. O usuário irá especificar o 
tamanho da memória, ou seja, quantos bytes serão alocados do tipo inteiro (a memória deve ser 
inicializada com todos os dados zerados). Assim, a memória solicitada deve ser um valor 
múltiplo do tamanho do tipo inteiro. A seguir, o usuário terá duas possibilidades mediante um 
menu: inserir um valor em uma determinada posição ou consultar o valor contido em uma 
determinada posição.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int tmd,escolha,valor;
    printf("Digite um número para o tamanho da memória:");
    scanf("%i",&tmd);
    int *ponteiro=calloc(tmd,(sizeof(int))),consulta=0;
    while (1)
    {
        printf("\nMenu\n1-Consultar um valor.\n2-Mudar um valor\nEscolha:");
        scanf("%i",&escolha);
        switch(escolha){
            case(1):{
                printf("Digite o valor que voce quer ver:");
                scanf("%i",&consulta);
                printf("O valor encontrado nessa posição é %d\n",ponteiro[consulta]);
                break;
            }
            case(2):{
                printf("Digite a posição que voce quer colocar:");
                scanf("%i",&consulta);
                printf("Digite o valor que voce quer colocar:");
                scanf("%i",&valor);
                ponteiro[consulta]=valor;
            }
        }
    }
    free(ponteiro);
}
