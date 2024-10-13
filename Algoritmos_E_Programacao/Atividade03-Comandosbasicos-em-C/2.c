//Faça um programa que leia 3 números inteiros, verifique se e eles são diferentes e os imprima em 
//ordem crescente. Caso dois ou mais números sejam iguais, apresente uma mensagem adequada 
//ao usuário.
#include <stdio.h>
    int main(){
        int numero[3],i=0;

        for (i = 0; i < 3; i++)
        {
            printf("Coloque um numero:");
            scanf("%i",&numero[i]);
        }
        if (numero[0]==numero[1]||numero[1]==numero[2]||numero[2]==numero[0])
        {
           printf("Por favor não coloque numeros iguais");
           return 0;
        }
        i=0;
        int aux,trocador;
        printf("A ordem crescente é igual a:");
        for ( i = 0; i < 2; i++)
        {  
            for (aux = 0; aux < 3; aux++)
            {
                if (numero[aux]>numero[aux+1])
                {
                    trocador=numero[aux];
                    numero[aux]=numero[aux+1];
                    numero[aux+1]=trocador;
                }
                
            }
            
        }
            
            
        printf("A ordem crescente é igual a:%i,%i,%i",numero[0],numero[1],numero[2]);    
        }
        
        
    
