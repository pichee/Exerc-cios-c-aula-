/*
Crie uma função recursiva que receba dois números inteiros positivos k e n e calcule kn
*/
#include <stdio.h>
#include <math.h>
//i vai ser utilizado também para a soma
int i=0,k=0;
int numero=0,soma=0;
int main(){
while(i==0){
      printf("Digite um numero:");
      scanf("%i",&k);
      soma=k;
      printf("Digite a potencia dele");
      scanf("%i",&numero);
      break;
}
i++;
if(i==numero){
 printf("A soma desse numero é %i",soma);
return 0;
}
soma=soma*k;
main();
}