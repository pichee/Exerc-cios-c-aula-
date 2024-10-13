/* Faça um programa que mostre uma tela com as seguintes opções:  
• 1 – Calcular Média,  
• 2 – Calcular Somatório,  
• 3 – Achar Maior Nota,  
• 4 – Achar Menor Nota,  
• 0 – Finalizar o programa.  
Cada uma das opções chamará um procedimento com a devida funcionalidade. Para fins de 
cálculo, estes testes se basearão em um vetor chamado notas de 10 posições que deve ser 
preenchido pelo usuário. */
#include <stdio.h>
#include <stdlib.h>
void media(int alunos[10]){
    int i=0,soma=0;
    for (i = 0; i < 10; i++)
        {
            soma+=alunos[i];
        }
    soma=soma/10;
    printf("\n A média  de todos os alunos é %i",soma);
}
void somatorio(int alunos[10]){
    int i=0,soma=0;
    for (i = 0; i < 10; i++)
        {
            soma+=alunos[i];
        }
    printf("\n A soma de todos os alunos é %i",soma);
}
void maior(int alunos[10]){
    int i=0,maior=alunos[0];
    for (i = 0; i < 10; i++)
        {
            if (maior<alunos[i])
            {
                maior=alunos[i];
            }
            
        }
    printf("\n A maior  de todos os alunos é %i",maior);
}
void menor(int alunos[10]){
    int i=0,menor=alunos[0];
    for (i = 0; i < 10; i++)
        {
            if (menor>alunos[i])
            {
                menor=alunos[i];
            }
            
        }
    printf("\n A menor de todos os alunos é %i",menor);
}

    int main(){
        int alunos[10];
        int i=0;
        for (i = 0; i < 10; i++)
        {
            alunos[i]=rand()%11;
            printf("%i ",alunos[i]);
        }
        while (1)
        {
        printf("\nSabendo as notas o que voce quer fazer:\n1-Calcular Média\n2-Calcular Somatório\n3-Achar Maior Nota\n4-Achar Menor Nota\n0-Finalizar o programa\n");
        int escolha;
        scanf("%i",&escolha);
        switch (escolha)
        {
        case 0:
        return 0;
            break;
        case 1:
            media(alunos);
            break;
        case 2:
            somatorio(alunos);
            break;
        case 3:
            maior(alunos);
            break;
        case 4:
            menor(alunos);
            break;
        default:
            break;
        }
                }
        
        


    }
