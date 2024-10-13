#include <stdio.h>
int main(){
    float dol,re,conv;
    printf("informe a cotação do dollar ");
    scanf("%f",&dol);
    printf("informe a quantidade de reais a serem convertidos ");
    scanf("%f",&re);
    printf("\n-------------------------\n");
    printf("Cotaçao do dollar,%2.f",dol);
    printf("\nQuantidade de reais,%2.f",re);
    conv=re/dol;
    printf("\nVoce pode converter %2.f reias em %2.f dollares",re,conv);
}
