// Escrever um programa em C que apresente uma função que recebe parâmetros e retora um valor a main.
// Por exemplo: ler 2 inteiros e passar para função que retorna a soma dos valores.

#include <stdio.h>
int Soma(int a, int b){
    return a+b;
}

int main () {
    int a, b;
    printf ("informe um valor : ");
    scanf ("%d", &a);

    printf ("informe outro valor : ");
    scanf ("%d", &b);

    printf ("a soma é : %d", Soma(a, b));
    scanf ("%d", &a);
}
