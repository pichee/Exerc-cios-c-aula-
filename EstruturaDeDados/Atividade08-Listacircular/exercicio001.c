/*
Escreva um programa na linguagem C que implemente uma lista encadeada circular com suas
operações básicas:
1. Mostrar lista
2. Inserir no início
3. Inserir no final
4. Inserir por posição
5. Procurar elemento (tratar se há mais de um elemento com o mesmo valor)
6. Remover por valor

*/
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int val;
    struct node *next;
}node;

void mostrarLista(node *head){
    node *body=head->next;
    printf("%i",head->val);
    while (body!=NULL)
    {
        printf("->");
        printf("%i",body->val);
        body=body->next;
    }
    printf("->NULL");
    printf("\nLista mostrada com sucesso");
}

node *inserirInicio(node *head,int escolha){
    node *novo=(node*)malloc(sizeof(node));
    novo->val=escolha;
    novo->next=head;
    return novo;
    
}

void addFinal(node *head,int escolha){
    node *tail=(node*)malloc(sizeof(node));
    node *body=head;
    while(body->next!=NULL){
        body=body->next;
    }
    tail->val=escolha;
    tail->next=NULL;
    body->next=tail;
}

void posicao(node *head,int escolha,int pos){
    node *body=(node *)malloc(sizeof(node));
    node *aux=head;
    body->val=escolha;
    for (int i = 0; i>pos; i++)
    {
        aux=aux->next;
    }
    body->next=aux->next;
    aux->next=body;
}

void removervalor(node *head,int remover){
    node *body=head;
    node *aux=(node *)malloc(sizeof(node));

    while (body->next=NULL)
    {
    if (remover==body->next->val)
    {
        aux=body->next;
        body->next=aux->next;
        free(aux);

    }
    body=body->next;
       
    }
    
        
}
int main(){
    int cont=0,escolha,pos;
    int encontrar=0;
    int contadorencontrar=0;

    node *head=(node*)malloc(sizeof(node));
    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Mostrar lista\n");
        printf("2. Inserir no início\n");
        printf("3. Inserir no final\n");
        printf("4. Inserir por posição\n");
        printf("5. Procurar elemento\n");
        printf("6. Remover por valor\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &escolha);
        switch (escolha)
        {
        case 1:
            if (cont==0){
                printf("Não tem elementos na lista");}

            else{
                mostrarLista(head);}  
            break;
        case 2:
            printf("Digite o número que voce quer adicionar no inicio:");
            scanf("%i",&escolha);
            if (cont==0)
            {
                head->val=escolha;
                head->next=NULL;
                cont++;
            }else{
                cont++;
                node *novo=inserirInicio(head,escolha);
                head=novo;
            }
            break;
        case 3:
            printf("Digite o número que voce quer adicionar no Final:");
            scanf("%i",&escolha);
            
            if (cont==0){
                head->val=escolha;
                head->next=NULL;
                cont++;}
            else{
                cont++;
                addFinal(head,escolha);
            }
            break;
        case 4:
            while (1)
            {
                  printf("Digite a posição que voce quer adicionar a lista está com %i valores:\n",cont);
                  scanf("%i",&pos);
                  if (pos>cont){
                    printf("Insira um valor valido :/");}
                  
                  else{
                    break;}      }

            pos--;
            printf("Digite o número que voce quer adicionar na  posição %i:",pos+1);
            scanf("%i",&escolha);
            cont++;
            if (pos==0){
                head->val=escolha;
                head->next=NULL;
                }
            if (cont==pos)
            {
                addFinal(head,escolha);
            }
            
            else{
                posicao(head,escolha,pos);
            }
            break;
        case 5:
            encontrar=0;
            printf("Digite o número que voce quer encontrar");
            scanf("%i",&encontrar);
            contadorencontrar=0;
            node *body=head;
            while(body!=NULL){
                if (body->val==encontrar)
                {
                    contadorencontrar++;
                }
                body=body->next;   
            }            
            printf("O VALOR %i foi encontrado %i vezes",encontrar,contadorencontrar);
            break;
        case 6:
            printf("Digite o valor que voce quer remover:");
            int remover;
            scanf("%i",&remover);
            if (cont==1 && remover==head->val)
            {
                free(head);
                cont--;
            }
            removervalor(head,remover);
            break;
        case 7:
            return 0;



            
        
        default:
            break;
        } 
    }
    
    
    
}
