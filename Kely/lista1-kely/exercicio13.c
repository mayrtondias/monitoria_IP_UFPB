/* Codigo disponibilizado pela professora Kely Diana Villacorta Villacorta
da Universidade Federal da Paraiba
*/

//Exercicio 13

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float la, lb,lc;
    do{
      printf("Dig. o primeiro lado: ");
      scanf("%f",&la);

    }while(la<=0);
    do{
      printf("Dig. o segundo lado: ");
      scanf("%f",&lb);

    }while(lb<=0);
    do{
      printf("Dig. o terceiro lado: ");
      scanf("%f",&lc);

    }while(lc<=0);


    if((la+lb >=lc)&&(la+lc >=lb)&&(lc+lb >=la)){

        printf("Triangulo VALIDO!!\n");

        if(la==lb&& lb==lc){
            printf("Triangulo EQUILATERO!!\n");
        }else{
            if( la==lb || la==lc || lc==lb){
                 printf("Triangulo ISOSCELES!!\n");
            }else{
             printf("Triangulo ESCALENO!!\n");
             }

        }
    }else{
    printf("Triangulo INVALIDO!!\n");
    }


	system("pause");
	return 0;
}
