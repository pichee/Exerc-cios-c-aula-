#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void acharValor(int valor){
    FILE *arquivo;
    arquivo = fopen("clientes.csv", "r");
    char linha[10];
    fgets(linha, sizeof(linha), arquivo);
    printf("%s",linha);
}
int main(){
    
    int escolha;
    while (1)
    {
        printf("1 - Busca Sequencial (sem ordenação)\n");
        printf("2 - Busca Sequencial (com ordenação)\n");
        printf("3 - Busca Binária\n");
        printf("4 - Sair\nEscolha");
        scanf("%d", &escolha);

        switch(escolha){
        case 1:
            int procurarvalor;
            printf("Você escolheu: Busca Sequencial (sem ordenação)\n");
            printf("Digite o valor:");
            scanf("%i",&procurarvalor);
            acharValor(procurarvalor);
            break;

        case 2:
            printf("Você escolheu: Busca Sequencial (com ordenação)\n");
            
            break;

        case 3:
            printf("Você escolheu: Busca Binária\n");
            
            break;

        case 4:
            printf("Saindo do programa...\n");
            return 0;
            break;

        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
        }
    }
    
}