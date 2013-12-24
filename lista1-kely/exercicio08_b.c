/*Codigo disponibilizado pela professora Kely Diana Villacorta Villacorta
da Universidade Federal da Paraiba
*/

//Exercício 08(b)

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float n1_f,n2_f,n3_f,n4_f;
    int n1,n2,n3,n4,maior1,maior2;

    do{
        printf("Dig. o primeiro numero inteiro: ");
        scanf("%f",&n1_f);
        }while(n1_f!=(int)n1_f);

        n1=(int)n1_f;

         do{
        printf("Dig. o segundo numero inteiro: ");
        scanf("%f",&n2_f);
        }while(n2_f!=(int)n2_f);

        n2=(int)n2_f;
         do{
        printf("Dig. o terceiro numero inteiro: ");
        scanf("%f",&n3_f);
        }while(n3_f!=(int)n3_f);

        n3=(int)n3_f;

         do{
        printf("Dig. o quarto numero inteiro: ");
        scanf("%f",&n4_f);
        }while(n4_f!=(int)n4_f);

        n4=(int)n4_f;


	if(n1>=n2){
		maior1=n2;
		maior2=n1;
	
	}else{
		maior1=n1;
		maior2=n2;
	}


  	if(n3>=maior2){
    	maior1=maior2;
    	maior2=n3;
    }else{
		if(n3>maior1)
        	maior1=n3;
    }
	if(n4>=maior2){
    	maior1=maior2;
    	maior2=n4;
    }else{
		if(n4>maior1)
        	maior1=n4;
    }

	printf("Logo, a soma dos maiores numeros eh %d\n",maior1+maior2);

	system("pause");
	return 0;
}
