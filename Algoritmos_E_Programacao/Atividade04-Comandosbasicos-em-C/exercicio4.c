/*Faça um programa que leia uma letra que represente o estado civil de uma pessoa e mostre uma 
mensagem com a sua descrição (Solteiro(a), Casado(a), Viúvo(a), Divorciado(a)). O programa 
deve apresentar uma mensagem de adequada caso uma letra diferente seja informada.? */
#include <stdio.h>
    int main(){
        char estado;
        printf("Voce está como:\nSolteiro[S]\nCasado[C]\nViúvo[V]\nDivorciado[D]");
        scanf("%c",&estado);
        if (estado=='s' || estado=='S')
        {
            printf("Então voce está solteiro");
        }
        if (estado=='c' || estado=='C')
        {
            printf("voce está casado que pena");
        }
         if (estado=='v' || estado=='V')
        {
            printf("Opa parece que está denovo na pista");
        }
        if (estado=='D' || estado=='d')
        {
            printf("Opa voce está divorciado ksks");
        }

        
    }
