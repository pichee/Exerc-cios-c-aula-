/*Crie um programa que leia uma string e substitua todas as ocorrências de um caractere por outro,
conforme a escolha do usuário.*/
#include <stdio.h>

#include <stdio.h>

int main() {
    char palavra[100];
    int i = 0;

    printf("Digite uma palavra ou frase: ");
    fgets(palavra, 100, stdin);  
    while (1) {
        if (palavra[i] != '\0') {
            if (palavra[i] != ' ') {  
                printf("%c", palavra[i]);
            }
        } else {
            break;
        }
        i++;
    }

    return 0;
}
