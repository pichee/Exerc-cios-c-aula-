/*
Escreva um programa que contenha uma função que calcule a soma dos primeiros N cubos: ?(?) = 1! +
2! + ⋯ + ?!
*/
#include <stdio.h>
//i vai ser utilizado também para a soma
int numeronaterceira=0;
int i=0;
int numero=0,soma=0;
int main(){
while(i==0){
      printf("Digite um numero:");
      scanf("%i",&numero);
      break;
}
numeronaterceira=i*i*i;
if(i>numero){
 printf("A soma dos números é %i",soma);
return 0;
}
i++;
soma=soma+numeronaterceira;
main();
}