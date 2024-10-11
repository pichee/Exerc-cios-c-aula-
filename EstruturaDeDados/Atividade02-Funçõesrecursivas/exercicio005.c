/*
Escreva uma função recursiva que receba um número inteiro positivo N e imprima todos os números 
naturais de 0 (zero) até N em ordem crescente.
*/
#include <stdio.h>
int i=0,k=0;
int numero=0,penultimo=1,ultimo=1,aux;
int main(){
while(i==0){
      printf("Digite um numero");
      scanf("%i",&numero);
      break;
}
printf("%i ",i);
i++;
if (i>numero){
return 0;
}
main();
}
