/*4.Escreva um programa em C que contenha uma função que recebe dois números inteiros I e J, e 
calcule a expressão I!/J!*(I-J)!. Esta função deve invocar outra função para calcular o fatorial de 
cada número individualmente. Dica: use a mesma função desenvolvida no exercício anterior.  */
#include <stdio.h>
int fatorial(int numero){
 int i=1,fatorar=1;
    for (i = 1; i <= numero; i++)
    {
      fatorar=fatorar*i;
    }
    return fatorar;
}
    int main(){
        int i=0,j=0;
        printf("Digite o valor de I:");
        scanf("%i",&i);
        printf("Digite o valor de J:");
        scanf("%i",&j);
        int segunda=i-j;
        if (i<j)
        {
            int aux=0;
            aux=i;
            i=j;
            j=aux;
        }
        
        i=fatorial(i);
        j=fatorial(j);
        
        segunda=fatorial(segunda);
        float soma=i/j*segunda;
        printf("O calculo de I!/J!*(I-J)! é %f",soma);
        
    }
