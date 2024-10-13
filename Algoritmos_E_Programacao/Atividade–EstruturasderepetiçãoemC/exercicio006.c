//Faça um programa em C que leia diversos números e mostrar quantos deles são ímpares. O
//programa deve encerrar a leitura de valores após o valor -999 ser registrado.
#include <stdio.h>
    int main(){
        int i=0,aux=0;
        while (i!=-999)
        {
        printf("Digite um numero:");
        scanf("%i",&i);
        if (i%2==1){
            aux++;
        }
        }
        printf("Foram registrados %i numeros impares",aux);
    }
