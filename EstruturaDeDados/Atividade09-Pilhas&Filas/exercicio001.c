/*1. Escreva um programa que implemente um sistema de pilha com as operações:
1. Inicializar (criar uma pilha vazia)
2. Empilhar
3. Desempilhar
4. Exibir elemento do topo
5. Exibir a quantidade de elementos
6. Esvaziar pilha*/
#include <stdio.h>
#include <stdlib.h>
typedef struct stack
{
    int val;
    struct stack *next;}stack;

void primeiro(stack *head){
    int valor;
    printf("Digite o valor que voce vai adicionar:");
    scanf("%i",&valor);
    head->val=valor;
    printf("Valor adicionado na pilha");
    }
stack* initialize(stack *head){
        int valor;
        printf("Digite o valor que voce vai adicionar:");
        scanf("%i",&valor);
        stack *aux=(stack *)malloc(sizeof(stack));
        aux->val=valor;
        aux->next=head;
        head=aux;
       printf("Valor adicionado na pilha");
       return aux; 
    }
    
stack* eraser(stack *head){
    if (head!=NULL)
    {
        stack *aux=head;
        head=head->next;
        free(aux);
    }
    printf("Apágado com sucesso");
    return(head);
}
stack* esvaziar(stack *head){
    while (head!=NULL)
    {
        stack *aux=head;
        head=head->next;
        free(aux);
   
    }
 printf("APágado com sucesso");
 return head;
}
int main(){
    int quantity=0,choice;
    stack *head=(stack *)malloc(sizeof(stack));
    while (1)
    {
        printf("\n----- MENU -----\n");
        printf("1. Inicializar pilha\n");
        printf("2. Empilhar\n");
        printf("3. Desempilhar\n");
        printf("4. Exibir elemento do topo\n");
        printf("5. Exibir quantidade de elementos\n");
        printf("6. Esvaziar pilha\n");
        printf("7. Sair\n");
        printf("----------------\n");
        printf("Escolha:");
        scanf("%i",&choice);
        switch (choice)
        {
        case 1:
            if (quantity==0)
            {
                primeiro(head);
                quantity++;
            }else{
                printf("A Pilha já foi inicializada");
            }
            
            break;
        case 2:
            if (quantity>0)
            {
                 quantity++;
                 stack *newHead=initialize(head);
                 head=newHead;
                
                }
            else{
                printf("A Pilha não foi inicializada");
            }
            break;
        case 3:
           if (quantity>0)
            {
                quantity--;
                head=eraser(head);}
            else{
                printf("A Pilha não foi inicializada");
            }
            break;
                     case 4:
           if (quantity>0)
            {
                printf("Primeiro elemento %d\n",head->val);
                }
            else{
                printf("\nA Pilha não foi inicializada");
            }
            break;
         case 5:
            printf("A Pilha possui %i Elementos",quantity);
            break;
         case 6:
            head=esvaziar(head);
            quantity=0;
            break;
        case 7:
            return 0;
            break;
        }

    }
    
}
