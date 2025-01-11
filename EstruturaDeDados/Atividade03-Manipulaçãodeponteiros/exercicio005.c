/*Crie um programa que contenha um procedimento que por parâmetro dois valores inteiros e um 
ponteiro. A função deve calcular a soma entre os números armazenados nas variáveis e armazenar 
o resultado na em uma variável local da rotina principal (main) através do uso do ponteiro.*/
#include <stdio.h>
void calculo(int *ponteiro){
    int numero1=1,numero2=5;
    *ponteiro=numero1+numero2;
}
int main(){
    int resultado;
    int *ponteiro=&resultado;
    calculo(ponteiro);
    printf("A soma é %i",*ponteiro);
}