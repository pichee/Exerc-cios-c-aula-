/*
Desenvolva um programa em C que contenha uma função recursiva que recebe um número positivo inteiro 
N e calcule o somatório dos números de 1 a N.
*/
#include <stdio.h>
//i vai ser utilizado também para a soma:
int i=0;
int numero=0,soma=0;
int main(){
while(i==0){
      printf("Digite um numero:");
      scanf("%i",&numero);
      break;
}
if(i>=numero){
 printf("A soma dos números é %i",soma);
return 0;
}
i++;
soma=soma+i;
main();
}