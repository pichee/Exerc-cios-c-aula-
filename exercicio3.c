#include <stdio.h>
int main()
{
    int n,n1,n2,a,a1,a2,a3;
    printf("digite um número inteiro");
    scanf("%i",&n);
    printf("digite outro número inteiro");
    scanf("%i",&n1);
    printf("digite outro número inteiro");
    scanf("%i",&n2);
    a=n*n;
    a1=n1*n1;
    a2=n2*n2;
    a3=a+a1+a2;
    printf("a soma desses números ao quadrado é igual a %i",a3);
    

    return 0;
}
