/*Escreva um programa que contenha duas variáveis do tipo inteiro. Compare seus endereços e 
mostre o maior deles.*/
#include <stdio.h>
    int main(){
        int adress1=989,adress2=98;
        if (&adress1>&adress2)
        {
            printf("O Maior endereço é do endereço 1 que é %p\nO menor endereço é do endereço 2 que é %p",&adress1,&adress2);
            return 0;
        }
            printf("O Maior endereço é do endereço 2 que é %p\nO menor endereço é do endereço 1 que é %p",&adress2,&adress1);
        
    }