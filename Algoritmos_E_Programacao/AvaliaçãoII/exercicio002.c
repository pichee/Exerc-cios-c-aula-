//autor gustavo pich
//(0,5) Um nÃºmero perfeito Ã© um nÃºmero que Ã© igual a soma dos seus divisores prÃ³prios (excluindo ele 
//mesmo). Exemplo: 
//â€¢ NÃºmero: 6
//â€¢ Divisores prÃ³prios do nÃºmero 6: 1, 2 e 3
//â€¢ Soma dos divisores: 6
//Escreva um programa em C que leia um nÃºmero inteiro positivo e mostre uma mensagem dizendo se 
//o nÃºmero informado Ã© perfeito ou nÃ£o
#include <stdio.h>
    int main(){
        int numero_escolhido,numeros=1,verificadornumeroperfeito=1;
        printf("Digite um numero positivo:");
        scanf("%i",&numero_escolhido);
        if (verificadornumeroperfeito<6)
        {
            printf("Esse numero nÃ£o Ã© perfeito");
            return 0;
        }
        
        while (numeros<numero_escolhido-1)
        {
            if (numero_escolhido%numeros==0)
            {
                verificadornumeroperfeito=verificadornumeroperfeito*numeros;
            }
            numeros++;
        }
        if (verificadornumeroperfeito==numero_escolhido)
        {
            printf("Esse numero Ã© perfeio");
        }
        else
        {
            printf("Esse numero nÃ£o Ã© perfeito");
        }
        
        
        

    }