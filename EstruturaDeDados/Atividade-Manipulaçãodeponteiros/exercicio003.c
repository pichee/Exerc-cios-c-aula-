/*Faça um programa que leia dois valores inteiros para variáveis declaradas na rotina principal e 
chame uma função que receba dois ponteiros para essas variáveis. A função deve fazer a troca 
dos valores das variáveis. Os valores devem ser apresentados após a troca.*/
void trocador(int **ponteiro1,int **ponteiro2){
    int *aux;
    aux=*ponteiro1;
    *ponteiro1=*ponteiro2;
    *ponteiro2=aux;
}
#include <stdio.h>
    int main(){
        int numero1=1,numero2=2;
        int *ponteiro1=&numero1,*ponteiro2=&numero2;
        trocador(&ponteiro1,&ponteiro2);
        printf("Valores trocados numero1=%i numero2=%i",*ponteiro1,*ponteiro2);
    }