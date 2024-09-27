/*A prefeitura de uma pequena cidade do interior contratou você para desenvolver um software para 
armazenar e processar alguns dados de amostra de uma consulta municipal. O programa deve registrar os 
seguintes dados para 200 famílias:
• Renda familiar
• Número de filhos
• Número de animais de estimação
Escreva um programa em C que contenha uma matriz de tamanho 200 x 3 para armazenar os dados 
descritos acima, onde a primeira coluna representa a renda familiar, a segunda coluna representa o número 
de filhos e a terceira coluna representa o número de animais de estimação. Para fins de teste, estes dados 
devem ser gerados de forma aleatória, onde:
• O salário deve variar entre R$ 500 e R$ 20.000;
• O número de filhos deve variar entre 0 e 12;
• O número de animais de estimação deve variar entre 0 a 5.
O programa deve conter um menu de opções para apresentar os seguintes dados:
a. A média de salário da população;
b. A maior e a menor renda familiar e a quais famílias respectivamente pertencem;
c. O percentual de famílias com salário menor de R$ 2.000,00;
d. A média de número de filhos;
e. A média de número de animais de estimação
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
    int main()
    {
      srand(time(NULL));
      float FamiliaFeliz[200][3];
      float mediaSalarial=0,mediaCriancas=0,mediaPets=0;
      for (int i = 0; i < 5; i++)
      {
        for (int j = 0; j < 3; j++)
        {
            switch (j)
            {
            case 0:
                FamiliaFeliz[i][j]=(rand()%19501)+500;
                mediaSalarial+=FamiliaFeliz[i][j];
                break;
            case 1:
                FamiliaFeliz[i][j]=rand()%13;
                mediaCriancas+=FamiliaFeliz[i][j];
                break;
            case 2:
                FamiliaFeliz[i][j]=rand()%6;
                 mediaPets+=FamiliaFeliz[i][j];
                break;
            }
        }        
      }
      printf("Os Dados Gerados foram\nMedia Salarial=%2.f\nMedia Crianças:%2.f\nMedia Pets:%2.f",mediaSalarial,mediaCriancas,mediaPets);
    }
