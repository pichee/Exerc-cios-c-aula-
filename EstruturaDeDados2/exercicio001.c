/*
Desenvolver programa em C que implemente uma função simples para escrever um texto na tela.
*/
#include <stdio.h>
void funcao(char mensagem[],FILE *arquivo){
    fprintf(arquivo,"Voce digitou:\n%s\n",mensagem);
}
int main(){
        FILE *arquivo=fopen("exercicio1.txt","w");
        if(arquivo==NULL){
            printf("Algo deu errado");
            return 1;
        }
        char texto[1000];
        printf("Digite aqui o seu texto:\n");
        scanf("%999[^\n]", texto);
        funcao(texto,arquivo);
        fclose(arquivo);
        printf("O arquivo foi salvo em: ");
        system("cd"); 
        return 0;
    }