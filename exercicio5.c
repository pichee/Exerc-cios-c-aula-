#include <stdio.h>

int main()
{
    int n,n1,a;
    printf("Digite o primeiro número inteiro");
    scanf("%i",&n);
    printf("Digite o segundo número inteiro");
    scanf("%i",&n1);
    printf("a seguir está o resultado das 4 operações básicas");
    a=n+n1;
    printf("\n %i+%i=%i",n,n1,a);
    a=n-n1;
    printf("\n %i-%i=%i",n,n1,a);
    a=n*n1;
    printf("\n %iX%i=%i",n,n1,a);
    a=n/n1;
    printf("\n %i/%i=%i",n,n1,a);
    return 0;
}
