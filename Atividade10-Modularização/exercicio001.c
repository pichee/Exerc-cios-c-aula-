/*Faça um programa que mostre o resultado do cálculo das áreas do triângulo, quadrado e círculo. 
O programa deve apresentar um menu onde o usuário possa escolher o tipo de área que deseja 
calcular. Desenvolva uma sub-rotina (procedimento ou função) para cada opção. */
#include <stdio.h>
void triagulo(){
    float base,altura,area;
    printf("Digite a base do triangulo:");
    scanf("%f",&base);
    printf("Digite a altura do triangulo:");
    scanf("%f",&altura);
    area=base*altura/2;
    printf("A area do triangulo é %.2f",area);
}
void quadrado(){

float lado,area;
    printf("Digite o lado do quadrado:");
    scanf("%f",&lado);
    area=lado*lado;
    printf("A area do quadrado é %.2f",area);
}
void circulo(){
    
float raio,area;
    printf("Digite o raio do circulo:");
    scanf("%f",&raio);
    area=(raio*raio)*3.14;
    printf("A area do circulo é %.2f",area);
}

int main(){
    printf("==========================\nDigite qual area voce quer calcular\ntriangulo[1]\nquadrado[2]\ncirculo[3]\n==========================\nEscolha:");
    int escolha;
    scanf("%i",&escolha);
    switch (escolha)
    {
    case 1:
        triagulo();
        return 0;
    case 2:
        quadrado();
        break;
    case 3:
        circulo();
        break;
    default:
        break;
    }
}
