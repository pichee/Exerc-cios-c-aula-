/*Escreva um programa em C que leia uma letra e indique se ela é uma vogal ou consoante. Utilize 
uma estrutura de caso para resolver este problema*/
#include <stdio.h>
    int main(){
        char algo;
        int aux=0;
        printf("Digite algo:");
        scanf("%c",&algo);
        if (algo=='a' || algo=='A' )
        {
            aux=1;
        }
        if (algo=='e' || algo=='E' )
        {
            aux=1;
        }
        if (algo=='i' || algo=='I' )
        {
            aux=1;
        }
        if (algo=='o' || algo=='O' )
        {
            aux=1;
        }
        if (algo=='u' || algo=='U' )
        {
            aux=1;
        }
        switch (aux)
        {
        case 1:
            printf("O que voce digitou é uma Consoante");
            return 0;
            break;
        }
        printf("O que voce digitou não é uma consoante");
        
    }
