#include <stdio.h>

int main() {
    int i;
    float altura, maior_altura = 0, menor_altura = 0;
    float soma_alturas = 0, soma_alturas_mulheres = 0;
    int count_mulheres = 0;
    char sexo;

    for (i = 1; i <= 10; i++) {
        printf("Digite a altura da pessoa %d: ", i);
        scanf("%f", &altura);
        printf("Digite o sexo da pessoa %d (M para mulher e H para homem): ", i);
        scanf(" %c", &sexo);  

        if (i == 1) { 
            maior_altura = altura;
            menor_altura = altura;
        } else {
            if (altura > maior_altura) {
                maior_altura = altura;
            }
            if (altura < menor_altura) {
                menor_altura = altura;
            }
        }


        soma_alturas += altura;

        if (sexo == 'M' || sexo == 'm') {
            soma_alturas_mulheres += altura;
            count_mulheres++;
        }
    }

    float media_alturas = soma_alturas / 10;
    float media_alturas_mulheres;
    if (count_mulheres > 0) {
        media_alturas_mulheres = soma_alturas_mulheres / count_mulheres;
    } else {
        media_alturas_mulheres = 0;
    }

    printf("Maior altura do grupo: %.2f\n", maior_altura);
    printf("Menor altura do grupo: %.2f\n", menor_altura);
    printf("Média das alturas das mulheres: %.2f\n", media_alturas_mulheres);
    printf("Média das alturas do grupo: %.2f\n", media_alturas);

    return 0;
}
