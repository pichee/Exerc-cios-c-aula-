/*Crie um programa que leia uma string e substitua todas as ocorrências de um caractere por outro,
conforme a escolha do usuário.*/
#include <stdio.h>
int contagem(char algo[100]){
        int c=0,i;
        for (i = 0; i < 100; i++)
    {
        if (algo[i]!='\0')
        {
            c++;
        }
        else{
            break;
        }
        
    }
    return c;
    }    
void substituir(int contador,char palavra[contador],char car,char carmudado){
    int i=0;
    for (i = 0; i < contador; i++)
    {
        if (palavra[i]==car)
        {
            palavra[i]=carmudado;
            
        }
        
    }
    printf("%s",palavra);
}
    int main(){
        char caractere,palavra[100],caractere_mudado;
        printf("Digite algo:");
        scanf("%99[^\n]",palavra);
        getchar();
        printf("qual caractere voce quer trocar:");
        scanf("%c",&caractere);
        getchar();
        printf("qual caractere voce quer:");
        scanf("%c",&caractere_mudado);   
        int cont=contagem(palavra);
        substituir(cont,palavra,caractere,caractere_mudado);
        
    }
        
