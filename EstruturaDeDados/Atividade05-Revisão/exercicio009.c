/*9. Faça um programa que receba do usuário o tamanho de uma string e aloque dinamicamente essa 
string. Em seguida, o usuário deverá informar o conteúdo dessa string. O programa deve imprimir 
a string sem suas vogais. */
#include <stdio.h>
#include <stdlib.h>
void mostrar(char *letra){
    int i=0;
     while (letra[i] != '\0'){ 
        if (letra[i] != 'a' && letra[i] != 'e' && letra[i] != 'i' &&
            letra[i] != 'o' && letra[i] != 'u' &&
            letra[i] != 'A' && letra[i] != 'E' && letra[i] != 'I' &&
            letra[i] != 'O' && letra[i] != 'U'){
                printf("%c",letra[i]);}
     i++;
     }
}
int main(){
    int n;
    printf("Digite quantos caracteres tera a String:");
    scanf("%i",&n);
    char *ponteiro=malloc(n*sizeof(char));
    printf("Digite a palavra a ser digitada:");
    getchar();
    scanf("%[^\n]", ponteiro);
    mostrar(ponteiro);
}
