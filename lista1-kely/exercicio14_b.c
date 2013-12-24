#include<stdio.h>
#include<stdlib.h>

/*Esse trecho de codigo ira solicitar dois numeros
inteiro positivo ao usuario.
*/

int main(){
	
	int A, B; //guarda o valor inserido
	int soma=0;
	int i;
	float auxiliar; 
	
	do{
    	printf("Digite o primero numero inteiro positivo: \n");
        scanf("%f",&auxiliar);
    }while((auxiliar!=(int)auxiliar)||(auxiliar<=0));
	
	A=auxiliar;
	
	do{
    	printf("Digite o segundo numero inteiro positivo: \n");
        scanf("%f",&auxiliar);
    }while((auxiliar!=(int)auxiliar)||(auxiliar<=0));
	
	B=auxiliar;
	
	printf("O valor de A: %d \nO valor de B: %d \n",A,B);
	
	if(A<=B){
		for(i=A;i<=B;++i){
			if((A%2)==0){
				soma+=i;
			}
		}
	}
	
	printf("soma %d", soma);
	return 0;
}
