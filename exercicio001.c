#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que implemente as funções básicas para manipulação de uma lista duplamente
encadeada.
*/
typedef struct node
{
    int val;
    struct node *next;
    struct node *back;
    
}node;
void final(node *head,int cont){
    node *tmp=head;
    while (tmp->next!=NULL)
    {
        
        tmp=tmp->next;
    }
    node *newPointer=(node *)malloc(sizeof(node));
    newPointer->val=cont;
    newPointer->back=tmp;
    tmp->next=newPointer;
    newPointer->next=NULL;
}
void show(node *head){
    node *tmp=head;
    while (tmp!=NULL)
    {
        printf("%i",tmp->val);
        tmp=tmp->next;
    }
    
}
void removeAlist(node *head){
    node *tmp=head;
    while (tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    free(tmp);
    
}
int main(){
    int choice;
    int number;
    node *head=NULL;
    while (1)
    {
        printf("\nMenu de Lista Duplamente Encadeada\n");
        printf("1. Inserir no final\n");
        printf("2. Inserir no início\n");
        printf("3. Remover do início\n");
        printf("4. Remover do final\n");
        printf("5. Exibir lista\n");
        printf("6. Sair\n");
        scanf("%i",&choice);
        switch (choice)
        {
        case 1:
            printf("Add a number to put in  the end of list");
      
            scanf("%i",&number);
            
            if (head==NULL)
            {
                head=(node *)malloc(sizeof(node));
                head->val=number;
                head->next=NULL;
                head->back=NULL;
                }
            else{
                final(head,number);}
            break;
        case 2:
            printf("Add a number to put in  the end of list");
            scanf("%i",&number);
             if (head==NULL)
            {
                head=(node *)malloc(sizeof(node));
                head->val=number;
                head->next=NULL;
                head->back=NULL;
                }
            else{
                node *tmp=(node *)malloc(sizeof(node*));
                tmp->val=number;
                tmp->next=head;
                tmp->back=NULL;
                head=tmp;
            }
            break;
        case 3:
            if (head==NULL)
            {
                printf("you don't eraser a list null");
            }
            else{
                node *tmp=head;
                head=head->next;
                free(tmp);
            }
            break;
        case 4:
             if (head==NULL)
            {
                printf("you don't eraser a list null");
            }
            else{
                removeAlist(head);
            }
            break;
        case 5:
            show(head);
            break;
        case 6:
            return 0;
            break;
        default:
            break;
        }    
    }
    
    }