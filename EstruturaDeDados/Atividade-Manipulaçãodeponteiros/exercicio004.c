/*Elabore um programa que leia dois valores inteiros (A e B). Em seguida desenvolva uma função 
que retorne a soma do dobro dos dois números lidos. A função deverá armazenar o dobro de A na 
própria variável A e o dobro de B na própria variável B. */
#include <stdio.h>
int foda(int *a,int *b){
    *a=2*(*a);
    *b=2*(*b);
    return (*a)+(*b);
}
    int main(){
        int a=2,b=5;
        int *ponteiroA=&a,*ponteiroB=&b;
        int soma=foda(ponteiroA,ponteiroB);
        printf("A SOMA É %i",soma);
    }