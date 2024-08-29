/*4. Faça programa que gere valores aleatórios para uma matriz 3 x 6 com valores inteiros. O programa deve 
apresentar um menu, oferecendo as seguintes opções para o usuário:
 1. Apresentar a matriz
 2. Mostrar a soma de todos os elementos das colunas ímpares.
 3. Mostrar a média aritmética dos elementos da segunda e quarta colunas.
 4. Substituir os valores da sexta coluna pela soma dos valores das colunas 1 e 2.
 0. Encerrar programa
O programa deve conter uma estrutura de caso para cada opção e uma sub-rotina (função ou procedimento) 
para executar cada uma das tarefas.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void gera(int matrix[3][6]){
for(int i=0;i<3;i++){
for(int j=0;j<6;j++){
matrix[i][j]=rand()%100;
}}}
void colunasimpares(int matrix[3][6]){
int soma=0;
for(int i=0;i<3;i++){
for(int j=0;j<6;j++){
  if(j%2==1){
  soma+=matrix[i][j];
}}}
printf("\nA soma das colunas ímpares é %i",soma);
}
void mostra(int matrix[3][6]){
for(int i=0;i<3;i++){
for(int j=0;j<6;j++){
printf("%i ", matrix[i][j]);
}
printf("\n");
}}
void mediacolunasescolhidas(int matrix[3][6]){
    float media2=0,media4=0;
for(int i=0;i<3;i++){
for(int j=0;j<6;j++){
    if(j==2)
    {
        media2+=matrix[i][j];
    }
    if(j==4)
    {
        media4+=matrix[i][j];
    }
}
}
media2=media2/3;
media4=media4/3;
printf("\nA media da segunda coluna é %.2f e a da quarta coluna é %.2f",media2,media4);
}
void mudar(int matrix[3][6]){
    for(int i=0;i<3;i++){
    for(int j=0;j<6;j++){
    if (j==5)
    {
        matrix[i][j]=matrix[i][1]+matrix[i][2];
    }}}
    
}
int main()
{
   srand(time(NULL)); 
   int escolha=0,matrix[3][6];
   gera(matrix);
while (1)
{
printf("\n1. Apresentar a matriz\n 2. Mostrar a soma de todos os elementos das colunas ímpares.\n3. Mostrar a média aritmética dos elementos da segunda e quarta colunas.\n4. Substituir os valores da sexta coluna pela soma dos valores das colunas 1 e 2.\n0. Encerrar programa\n");
scanf("%i",&escolha);
switch(escolha){
case 0:{
    return 0;
}
case 1:{
mostra(matrix);
break;
}
case 2:{
colunasimpares(matrix);
break;
}
case 3:{
mediacolunasescolhidas(matrix);
break;
}
case 4:{
mudar(matrix);
break;
}}}  
}

