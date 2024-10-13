//Autor Gustavo Pich
//1,2) Construa um programa que solicita a idade e sexo de um grupo indefinido de pessoas. O programa 
//deve encerrar quando o usuÃ¡rio informar que nÃ£o deseja inserir um novo cadastro. No final, o programa 
//deve informar quantas pessoas de cada sexo sÃ£o maiores de idade (>=18), a mÃ©dia de idade de homens, a 
//mÃ©dia de idade de mulheres e a mÃ©dia de idade de todo o grupo.
#include <stdio.h>
    int main(){
        char sexo,decisao;
        float repeticao=1,contadorhomem=0,contadormulher=0,contadortotal=0,contadormaioresdeidadehomem=0,contadormaioresdeidadamulher=0;
        float mediahomens=0,somatotal=0,mediamulher=0,somahomem=0,somamulher=0,mediatotal=0;
        int idade=0;
        while (repeticao==1)
        {
            
            printf("Qual Ã© seu sexo Homem[h] ou Mulher[m]:");
            
            scanf("%c",&sexo);
            printf("Qual Ã© sua idade:");
            scanf("%i",&idade);
            if (sexo=='h' && idade>=18)
            {
              contadormaioresdeidadehomem=1+contadormaioresdeidadehomem;
              somahomem=idade+somahomem;
              contadorhomem=contadorhomem+1;
              somatotal=somatotal+idade;
              contadortotal=contadortotal+1;
            }
            if (sexo=='h')
            {
                contadorhomem=contadorhomem+1;
                somahomem=idade+somahomem;
                somatotal=somatotal+idade;
              contadortotal=contadortotal+1;
      
            }
            if (sexo=='m' && idade>=18)
            {
       
                contadormaioresdeidadamulher=1+contadormaioresdeidadamulher;
                contadormulher=contadormulher+1;
                somamulher=idade+somamulher;
                somatotal=somatotal+idade;
              contadortotal=contadortotal+1;
            }
            if (sexo=='m')
            {
                contadormulher=contadormulher+1;
                somamulher=idade+somamulher;
                somatotal=somatotal+idade;
              contadortotal=contadortotal+1;
                
            }
            
            printf("Deseja adicionar mais algum dado Sim[s] ou NÃ£o [n]\n");
            getchar();
            scanf("%c",&decisao);
            getchar();
            if (decisao=='n')
            {
                repeticao++;
            }
            
        }
        
        
        
        mediahomens=somahomem/contadorhomem;
        if (contadorhomem==0)
        {
            mediahomens=0;
        }
        mediamulher=somamulher/contadormulher;
        if (contadormulher==0)
        {
            mediamulher=0;
        }
        mediatotal=somatotal/contadortotal;
        printf("Homen SaÃµ maiores de idade %.2f\n",contadormaioresdeidadehomem);
        printf("Mulheres SÃ£o maiores de idade %.2f\n",contadormaioresdeidadamulher);
        printf("MÃ©dia idade homens %.2f\n",mediahomens);
        printf("MÃ©dia idade muljheres %.2f\n",mediamulher);
        printf("Media total %.2f",mediatotal);

        //\nMÃ©dia idade homens %.2f\nMÃ©dia idade mulheres %.2f\nMÃ©dia de todas as pessoas:%.2f",mediamulheresmaioresdeidade,mediahomensmaioresdeidade,mediahomens,mediamulher,somatotal);
    }   