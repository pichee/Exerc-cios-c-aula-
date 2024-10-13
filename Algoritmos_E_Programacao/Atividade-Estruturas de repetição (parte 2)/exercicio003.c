//Fazer um algoritmo que leia um número inteiro e mostre uma mensagem dizendo se é primo ou 
//não
#include <stdio.h>
int main(){
    int i=0,aux=2;
    printf("Digite um numero:");
    scanf("%i",&i);
    while (aux<i)
    {
        if (i%aux==0){
            printf("Esse numero não é primo");
            return 0;
            }
            aux++;
    }
    {
        
       
    }
    printf("Esse numero é primo");
}
