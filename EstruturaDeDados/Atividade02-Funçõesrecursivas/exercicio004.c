/*
Faça um programa em C que contenha uma função recursiva para calcular o N-ésimo elemento da 
sequência da Fibonacci.
*/
#include <stdio.h>
//i vai ser utilizado também para a soma
int i=0,k=0;
int numero=0,penultimo=1,ultimo=1,aux;
int main(){
while(i==0){
      printf("Digite qual número da sequen de fibonati que você vai calcular:");
      scanf("%i",&numero);
      numero--;
      numero--;
      break;
}
i++;
if(numero==0){
printf("O valor é igual a zero");
return 0;
}
if(numero==1){
printf("O valor é igual a 1");
return 0;
}
if(i==numero){
 printf("O valor é igual a  %i",ultimo);
return 0;
}
aux=ultimo;
ultimo=penultimo+ultimo;
penultimo=aux;
main();
}
