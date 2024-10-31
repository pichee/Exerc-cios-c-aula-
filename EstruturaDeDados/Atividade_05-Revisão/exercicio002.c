/*Escreva um programa que leia um número inteiro N. A seguir, o programa deve apresentar duas 
opções para o usuário:
a. Ordem crescente
b. Ordem decrescente
O programa deve apresentar todos os números naturais de zero até N de acordo com a opção 
escolhida pelo usuário. Utilize funções recursivas para realizar as operações*/
#include <stdio.h>
void ordemC(int n,int comeco){
    
    printf("%i ",comeco);
    if (comeco==n)
    {
        printf("\nACABOU");
        return;
    }
    ordemC(n,comeco+1);
    
}
void ordemD(int n,int comeco){
    
    printf("%i ",n);
    if (n==comeco)
    {
        printf("\nACABOU");
        return;
    }
    ordemD(n-1,comeco);
    
}
int main(){
    int n,c=0;
    printf("Digite um número");
    scanf("%i",&n);
    int escolha;
    printf("O que voce quer\n 1-ordem crescente\n2-ordem decrescente");
    scanf("%i",&escolha);
    switch (escolha)
    {
    case 1:{
        ordemC(n,c);
        return 0;
        break;}
    case 2:{
        ordemD(n,c);
        return 0;}
    default:
        break;
    }
    
    
    
    
}
