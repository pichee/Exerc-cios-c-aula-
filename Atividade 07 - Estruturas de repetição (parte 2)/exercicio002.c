//Escreva um programa em C que informe quais números inteiros que divididos por 11 tem resto 
//igual a 5, no intervalo de 1000 a 1999.
#include <stdio.h>
int main(){
    int i=1000;
    printf("Numeros diviseveis por 11 no intervalo 1000 a 1999");
    for(i=1000;i<1999;i++){
        if (i%11==0){
            printf("%i ",i);

        }
    }
}
