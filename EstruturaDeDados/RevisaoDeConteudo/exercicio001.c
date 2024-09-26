/*Desenvolva um programa em C que contenha uma função que receba uma string e retorne a quantidade de 
vogais presentes nela. No programa principal, solicite ao usuário que insira a string e exiba o resultado da 
função*/
#include <stdio.h>
void vogais(char texto[999]){
    int i=0,contador=0;
    while(texto[i]!='\0'){
        if(texto[i]=='A' ||texto[i]=='a' ||texto[i]=='E' ||texto[i]=='e' ||texto[i]=='I' ||texto[i]=='i' ||texto[i]=='O' ||texto[i]=='o' ||texto[i]=='U' ||texto[i]=='u'){
            contador++;
        }
        i++;
    }
    printf("O Numero de vogais na frase é igual a %i",contador);

}
    int main(){
        char texto[999];
        printf("Digite algo:");
        scanf("%998[^\n]",texto);
        vogais(texto);
    }
