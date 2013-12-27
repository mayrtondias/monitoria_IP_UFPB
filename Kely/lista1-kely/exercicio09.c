/*Codigo disponibilizado pela professora Kely Diana Villacorta Villacorta
da Universidade Federal da Paraiba
*/

//Exercício 09

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v_c, id_f,v_p;
    int idade;

    do{
    	printf("Dig. o valor da compra: ");
    	scanf("%f",&v_c);
    }while(v_c <=0);

    do{
    	printf("Dig. a sua idade: ");
    	scanf("%f",&id_f);
    }while(id_f<=0||id_f!=(int)id_f);

    idade=(int)id_f;

    if(v_c>100){
        if(idade<50){
            v_p=v_c*0.8;
        }else{
        	if(idade<70){
            	v_p=v_c*0.5;
        	}else{
            	v_p=v_c*0.3;
        	}
		}
	}else{
        if(idade<50){
            v_p=v_c*0.9;
        }else{
        	if(idade<70){
            	v_p=v_c*0.75;
        	}else{
            	v_p=v_c*0.65;
        	}
		}
	}

    printf("Logo, ja que o valor da sua compra eh %0.2f e \n \
	sua idade eh %d, voce vai pagar %0.2f\n",v_c, idade, v_p);


	system("pause");
	return 0;
}

