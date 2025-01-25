/*Escreva um programa que implemente um sistema de fila com as seguintes operações:
1. Inicializar (criar uma fila vazia)
2. Enfileirar
3. Desenfileirar
4. Exibir elemento do início
5. Exibir a quantidade de elementos
6. Esvaziar fila*/
#include <stdio.h>
#include <stdlib.h>
typedef struct queue
{
    int val;
    struct queue *next;
}queue;

void PutValue(queue *head,int num){
    while (head->next != NULL)
    {
        head=head->next;
    }
    queue *tmp=(queue *)malloc(sizeof(queue));
    tmp->val=num;
    tmp->next=NULL;
    head->next=tmp;
}
void go_out(queue *head){
    queue *tmp=(queue *)malloc(sizeof(queue));
    tmp=head;
    head=head->next;
    free(tmp);
}
void freee(queue *head){
    while (head!=NULL)
    {
       queue *tmp =(queue *)malloc(sizeof(queue));
       tmp=head;
       head=head->next;
       free(tmp);
    }
    
}
int main(){
    int choice,boolean = 0,num = 0,quantity = 0;
    queue *head =(queue *)malloc(sizeof(queue));
    while (1)
    {
     
    
    printf("1. Inicializar (criar uma fila vazia)\n2. Enfileirar\n3. Desenfileirar\n4. Exibir elemento do início\n5. Exibir a quantidade de elementos\n6. Esvaziar fila");
    printf("\nescolha:");
    scanf("%i",&choice);
    switch (choice)
    {
    case 1:
        boolean = 1;
        printf("Your queue has been inicialized");
        break;
    case 2:
        if(boolean == 1){
            printf("What is the ticket the person?");
            scanf("%i",&num);
            quantity++;
            if (head==NULL)
            {
                head->val=num;
            }else{
                PutValue(head,num);

            }
            
            }
        else{
            printf("The queue has not been initialized");

        }
        break;
    case 3:
        if (boolean == 1){
            go_out(head);
            quantity--;
        }else{
             printf("Your queue has not been inicialized");
        }
        break;
    case 4:
        if (boolean == 1){
        printf("%i",head->val);
        }
        else{
            printf("Your queue has not been inicialized");
        }
        break;
    case 5:
        if (boolean == 1){
        printf("%i",quantity);
        }
        else{
            printf("Your queue has not been inicialized");
        }
        break;
    case 6:
        if (boolean == 1){
            freee(head);
            boolean = 0;
        }
        else{
            printf("Your queue has not been inicialized");
        }
        break;
    
    default:
        break;
    }

}
}