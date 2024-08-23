/*Faça uma função que receba um número inteiro N, maior ou igual a 0, e retorne o valor de seu 
fatorial (N!). O fatorial de um número N é calculado por 1 * 2 * 3 *...* N.*/
#include <stdio.h>
void fatoracao(int numero){
    int i=1,fatorar=1;
    for (i = 1; i <= numero; i++)
    {
      fatorar=fatorar*i;
    }
    printf("%i",fatorar);
    
}
    int main(){
        int fatorial=0;
        while (1)
        {
            printf("Digite o numero que voce quer fatorial:");
            scanf("%i",&fatorial);
            if (fatorial<0){
                printf("Tente novamente");
            }
            else{
                break;
            }
        }
        fatoracao(fatorial);
        
        

    }
