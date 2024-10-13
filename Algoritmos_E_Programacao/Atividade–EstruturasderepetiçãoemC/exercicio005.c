//Escreva um programa em C que apresente os resultados das potências de 3, variando do expoente
//0 até o expoente 15
#include <stdio.h>
    int main(){
        int i=0,aux;
        printf("Potencias de 3 até 15:");
        for (i = 0; i <= 15; i++)
        {
          aux=i;
          aux=aux*aux*aux;
        printf("%i ",aux);
        }
    }
