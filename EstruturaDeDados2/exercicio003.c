/* Escrever um programa que leia o arquivo dados.txt, escreva os valores na tela.
Contar a quantidade de valores
Identificar a quantidade de números pares, impares, positivos, negativos e zero.
Contar a quantidade de vezes que cada inteiro está presente no arquivo.*/

#include <stdio.h>
#include <stdlib.h>

int main () {
    FILE *arquivo;
    int numeros[1000];
    int contagem[1000];
    int total = 0, pares = 0, impares = 0, positivos = 0, negativos = 0, zeros = 0;
    int num, i, j, encontrado;
    
    arquivo = fopen("C:\\Users\\05110281050\\Desktop\\dados.txt", "r");


    if (arquivo == NULL){
        printf ("Erro ao abrir arquivo !\n");
        return 1;
    }

    while (fscanf(arquivo, "%d", &num) != EOF) {
        if (num == 0){
            zeros++;
        }
        if (num > 0){
            positivos++;
        }
        if (num < 0){
            negativos++;
        }
        if (num % 2 == 0){
            pares++;
        }else{
            impares++;
        }
    }    

    encontrado = 0;
    for (i = 0; i < total; i++) {
        if (numeros[i] == num) {
            contagem[i]++;
            encontrado = 1;
            break;
        }
    }
    if (!encontrado) {
        numeros[total] = num;
        contagem[total] = 1;
        total++;
    }
    fclose (arquivo);

    printf("\n\nTotal de números: %d\n", total);
    printf("Pares: %d\n", pares);
    printf("Ímpares: %d\n", impares);
    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Zeros: %d\n", zeros);

    printf("\nFrequência dos números:\n");
    for (j = 0; j < total; j++) {
        printf("Número %d aparece %d vezes\n", numeros[j], contagem[j]);
    }
    return 0;
}
