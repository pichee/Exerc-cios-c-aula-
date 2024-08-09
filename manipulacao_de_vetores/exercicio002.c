/*. Escreva um programa em C que leia 6 valores reais e armazene em um vetor X. Construir um vetor 
Y de mesmo tipo e dimensão. Os valores armazenados nos vetores devem seguir as seguintes regras: 
a) O vetor X deve ter os seus elementos informados pelo usuário;
b) Cada posição de índice ímpar do vetor Y deve armazenar um valor de índice par do vetor X;
c) Cada posição de índice par no vetor Y deve armazenar um valor de índice ímpar do vetor X. 
O programa deve apresentar os 2 vetores.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
     srand(time(NULL));
    float x[5];
    float y[5];
    int auxiliar=0;
    for (auxiliar = 0; auxiliar !=6; auxiliar++)
    {
        x[auxiliar]=rand()%101;
        printf("%f ",x[auxiliar]);
    }
    
   auxiliar=0;
   int par=0,impar=1;
 for (auxiliar = 0; auxiliar != 6; auxiliar++)
  {
      if (auxiliar%2==0)
      {
          y[impar]=x[auxiliar];
          impar=impar+2;
      }
      else
      {
        y[par]=x[par];
        par+=2;
      }
        
    }
  int i=0;
  for (i = 0; i < 9; i++)
  {
    printf("%2.f ",y[i]);
  }
  
    
    
    

    
}
