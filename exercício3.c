#include <stdio.h>
int main()
{
    int n,n1,n2,a;
    printf("digite um número inteiro");
    scanf("%i",&n);
    printf("digite outro número inteiro");
    scanf("%i",&n1);
    printf("digite outro número inteiro");
    scanf("%i",&n2);
    a=n*n;
    printf("O quadrado de %i é igual á %i",n,a);
    a=n1*n1;
    printf("\nO quadrado de %i é igual á %i",n1,a);
    a=n2*n2;
    printf("\nO quadrado de %i é igual á %i",n2,a);
    

    return 0;
}
