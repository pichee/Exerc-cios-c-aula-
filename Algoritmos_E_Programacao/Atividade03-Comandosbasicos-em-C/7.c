// Uma lanchonete em FW deseja informatizar o seu sistema de pedidos. Escreva um programa que 
//leia o código do item pedido, calcule o valor a ser pago e apresente o valor total do lanche. 
//Considere que apenas um tipo de lanche pode ser pedido por vez. Use uma estrutura de caso para 
//apresentar o menu. 
//Código Lanche Preço
//10 Xis Completo R$ 12,00
//11 Xis Bacon R$ 16,50
//12 Xis de Coração de boi R$ 14,00
//13 Xis de Charque R$ 14,50
//14 Xis de Ovelha R$ 20,90
//15 Xis de linguiça campeira R$ 18,00
#include <stdio.h>
    int main(){
        float calculo=1;
        int decision=1,escolha=1;
        float conta=0;
        while (decision!=2)
        {
           printf("MENU\nCODIGO:10-XisCompleto-R$12,00\nCODIGO:11-Xis-Bacon-R$ 16,50\nCODIGO:12-Xis-de-Coração-de-boi-R$ 14,00\nCODIGO:13-Xis-de-Charque-R$ 14,50\nCODIGO:14-Xis-de-Ovelha-R$ 20,90\nCODIGO:15-Xis-de-linguiça-campeira R$ 18,00\n\n[1]digitar o codigo do xis\n[2]Ver o total a pagar\n");
            scanf("%i",&decision);
            if (decision==2)
            {
                break;
            }
            
            if (decision>2)
            {
                printf("Voce digitou algo errado");
            }
            else
            {
                printf("Escolha o xis que voce quer comer [coloque o codigo]:");
                scanf("%i",&escolha);
            }
            if (escolha<10 || escolha>15)
            {
                printf("Voce digitou o codigo errado por favor tente novamente\n");
                decision=0;
            }
            else
            {
                printf("Quantas quantidades desse X voce vai querer?");
                scanf("%f",&calculo);
            }
            switch (escolha)
            {
            case 10:
                conta=conta+calculo*12;
                break;
            case 11:
                conta+=calculo*16.50;
                break;
            case 12:
                conta+=calculo*14;
                break;
            case 13:
                conta+=calculo*14.5;
                break;
            case 14:
                conta+=calculo*20.9;
                break;
            case 15:
                conta+=calculo*18;
                break;
            }           
            } 
        printf("O total a pagar é igual a %.2f",conta);
        }
        
       
