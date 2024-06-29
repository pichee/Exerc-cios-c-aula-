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
    a=n+n1+n2;
    a1=a*a;
    printf("a soma desses números  é igual a %i e seu quadrado é %i",a,a1);
    

    return 0;
}
