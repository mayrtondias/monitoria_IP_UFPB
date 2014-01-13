#include<stdio.h>
#include<stdlib.h>

/* Esse trecho de codigo ira solicitar tres numeros inteiros ao usuario
de tal forma, que ao final ira mostra qual dos numeros possui o maior valor
*/

int main(){
	
	int numero1, numero2, numero3; //guarda os valores inseridos
	float auxiliar;  //ultilizado na insercao e comparacao
	
	do{
    	printf("\nDigite o Primeiro numero inteiro: ");
        scanf("%f",&auxiliar);
    }while(auxiliar!=(int)auxiliar);
	
	numero1=auxiliar;
	 
	do{
    	printf("\nDigite o Segundo numero inteiro: ");
        scanf("%f",&auxiliar);
    }while(auxiliar!=(int)auxiliar);
	
	numero2=auxiliar;
	
	do{
    	printf("\nDigite o Terceiro numero inteiro: ");
        scanf("%f",&auxiliar);
    }while(auxiliar!=(int)auxiliar);
	
	numero3=auxiliar;
	
	// inicio da comparacao dos valores
	
	if(numero1>numero2){
		if(numero1>numero3){
			auxiliar=numero1;
		}else{
			auxiliar=numero3;
		}
	}else{
		if(numero2>numero3){
			auxiliar=numero2;
		}else{
			auxiliar=numero3;
		}
	}
	printf("\nO maior valor e' %d dentre os valores %d, %d e %d.\n", (int)auxiliar, numero1,numero2,numero3);
	return 0; 
}
