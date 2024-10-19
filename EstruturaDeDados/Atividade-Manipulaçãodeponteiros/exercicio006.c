/*Implemente um procedimento que calcule a área da superfície e o volume de uma esfera de raio 
R. Essa função deve obedecer ao seguinte protótipo:  
void calcula_esfera (float r, float *área, float *volume); 
A área da superfície e o volume, são dados, respectivamente por: 
A = 4 * p * R2 
V = 4/3 * p * R3*/
#include <stdio.h>
void calcula_esfera (float r, float *area, float *volume){
    *area = 4 * 3.14 * (r*r);
    *volume= 4/3 * 3.14 * (r*r*r);
} 
    int main(){
        float area,volume,r=3;
        float *ponteiroV=&volume,*ponteiroA=&area;
        calcula_esfera(r=3,ponteiroA,ponteiroV);
        printf("Valor da area:%.2f\nValor do volume:%.2f",area,volume);

    }