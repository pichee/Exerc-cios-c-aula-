//Desenvolva um algoritmo para calcular a quantidade de litros de combustível que um automóvel que faz
//média de 12Km/L precisa para uma viagem. O usuário deve informar a distância do trajeto e o algoritmo
//deve calcular a quantidade de litros através da seguinte fórmula: LitrosUsados = distância / 12
#include <stdio.h>
int main(){
    float d,l;
    printf("qual é a distância do trajeto que o automóvel vai fazer?");
    scanf("%f",&d);
    l=d/12;
    printf("a quantidadede de litros necessarios é igual a  %2.f",l);
}
