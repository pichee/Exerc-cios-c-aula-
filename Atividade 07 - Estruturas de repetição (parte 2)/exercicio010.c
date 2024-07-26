//Escreva um programa que solicite ao usuário um número inteiro e, em seguida, exiba todos os 
//números primos até esse número
#include <stdio.h>
int main(){
    int i=0,aux=3,auxjr=2,c=0;
    printf("Digite um numero:");
    scanf("%i",&i);
    if(i>=2){
        printf("1 2 ");
    }
    while (aux<=i)
    {
        auxjr=2;
        c=0;
        while (auxjr!=aux)
        {
           if (aux%auxjr==0){
            c++;
           }
           auxjr++;
        }
        if (c!=0)
        {
            
        }
        else
        {
          printf("%i ",aux);
        }
        
        
        aux++;
            }
}
       
    

}
