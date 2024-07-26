//Escreva um programa que apresente os números da série Fibonacci até o décimo quinto termo. A 
//série Fibonacci é iniciada por 0, 1. Os próximos termos são resultados das somas de seus 2 
//antecessores.
#include <stdio.h>
    int main(){
        int fi=2,aux,pen=1,i=3;
        printf("0 1 1 ");
        while(i<=15){
            printf("%i ",fi);
            aux=pen;
            pen=fi;
            fi=fi+aux;
            i++;
            
            
        }
    }
