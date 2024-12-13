/*. Considerando o programa exemplo desenvolvido em aula, adapte o código para incluir as seguintes 
operações para manipulação da lista:
a. Inserir no final da lista
b. Buscar por valor
c. Buscar por posição
d. Remover do final
e. Remover por posição
f. Remover por valor
g. Imprimir apenas elementos pares (ou ímpares)
Importante: para cada opção selecionada, verifique a possibilidade de sua execução, informando caso 
alguma solicitação não possa ser atendida (ex: tentar excluir um elemento de uma lista vazia).
Desafio: implemente uma função recursiva e uma função não recursiva para contar a quantidade de 
elementos na lista*/
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int valor;
    struct Node *pPonteiro;
}Node;

Node * adcfinal(Node *lista,int numero){
    Node *ponteiroAux=malloc(sizeof(Node));
    ponteiroAux->valor=numero;
    ponteiroAux->pPonteiro = NULL;
    Node * l = lista;
    if (!l) return ponteiroAux;
    
    while (l->pPonteiro != NULL)
    {
        l=l->pPonteiro;
    }

    l->pPonteiro=ponteiroAux;
    return lista;
}

void printar(Node *lista){
    Node * l = lista;
    while (l!=NULL)
    {
        printf("%d->",l->valor);
        l = l->pPonteiro;
    }
    printf("Null");
    printf("\nLista imprimida");    
}

void encontrar(Node *lista,int escolha){
    Node *l=lista;
    while (l!=NULL)
    {
        if (l->valor==escolha)
        {
            printf("EXISTE NA LISTA");
            return;
        }
        l=l->pPonteiro;
        
    }
    printf("NÃO EXISTE NA LISTA");
    
}

void valor(Node *lista,int num){
    Node *aux=lista;
    int cont=1;
    while (aux!=NULL)
    {
        if (num==cont)
        {
            printf("O número localizado na posição %i é %i",cont,aux->valor);
            return;
        }
        aux=aux->pPonteiro;
        cont++;
    }
    printf("Numero não localizado");
    
}

void removerFinal(Node *lista){
    Node *aux=lista;
    Node *penultimo=aux;
    while (aux->pPonteiro!=NULL)
    {
        penultimo=aux;
        aux=aux->pPonteiro;
    }
    penultimo->pPonteiro=NULL;
    free(aux);
}

void removerV(Node *lista,int num){
    Node *penultimo=lista;
    Node *aux=lista;
    while (aux->pPonteiro!=NULL)
    {
       penultimo=aux;
       aux=aux->pPonteiro;
       if (num==aux->valor)
       {
        break;
       }
    }
    penultimo->pPonteiro=aux->pPonteiro;
    free(aux);
    
}

void removerP(Node *lista,int num){
    Node *penultimo=lista;
    Node *aux=lista;
    int contador=1;
    while (aux->pPonteiro!=NULL)
    {
       penultimo=aux;
       aux=aux->pPonteiro;
       if (num==contador)
       {
        break;
       }
    }
    penultimo->pPonteiro=aux->pPonteiro;
    free(aux);
}

void printarP(Node *lista){
    Node * l = lista;
    while (l!=NULL)
    {
        if (l->valor%2==0)
        {
            printf("%d->",l->valor);
        }
        
        
        l = l->pPonteiro;
    }
    printf("Null");
    printf("\nLista imprimida");    
}

void printarI(Node *lista){
    Node * l = lista;
    while (l!=NULL)
    {
        if (l->valor%2!=0)
        {
            printf("%d->",l->valor);
        }
        
        
        l = l->pPonteiro;
    }
    printf("Null");
    printf("\nLista imprimida");    
}
int main(){
    Node *cabeca=NULL;
    char opcao;
    int numero;
    while (opcao!='j')
    {
        printf("\nMENU\na. Inserir no final da lista\nb. Buscar por valor\nc. Buscar por posição\nd. Remover do final\ne. Remover por posição\nf. Remover por valor\ng. Imprimir apenas elementos pares (ou ímpares)\nESCOLHER:");
        scanf(" %c",&opcao);
        getchar();
        switch (opcao)
        {
        case 'a':
            printf("\nDigite o número que voce quer adicionar:");
            scanf("%i",&numero);
            cabeca = adcfinal(cabeca,numero);
            break;
        
        case 'b':
            printf("\nDigite o número que voce quer encontrar");
            scanf("%i",&numero);
            encontrar(cabeca,numero);
            break;
        case 'c':
            printf("Digite a posição que voce quer ver:");
            scanf("%i",&numero);
            valor(cabeca,numero);
            break;
        case 'd':
            removerFinal(cabeca);
            break;
        case 'e':
            printf("Digite a posição que voce quer remover:");
            scanf("%i",&numero);
            removerP(cabeca,numero);
            break;

        case 'f':
            printf("Digite o número que voce quer remover:");
            scanf("%i",&numero);
            removerV(cabeca,numero);
            break;
        case 'g':
            printf("Digite 1 pára imprimir números pares da lista e 2 para imprimir numeros impares");
            scanf("%i",&numero);
            if(numero==1)
            {
                printarP(cabeca);
            }else{
                printarI(cabeca);
            }
            break;
            
                
        case 'z':
            printar(cabeca);
            break;
        
        default:
            break;
        }
    }
    
}
