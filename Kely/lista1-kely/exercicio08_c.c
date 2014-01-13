#include<stdio.h>
#include<stdlib.h>

/* Esse trecho de codigo ira solicitar um numero inteiro ao usuario,
de tal forma, que ao final ira mostra a soma dos n primeiros numeros
*/

int main(){
	
	int numero; //guarda o valor inserido
	int soma=0; 
	float auxiliar; 
	
	do{
    	printf("\nDigite um numero inteiro: ");
        scanf("%f",&auxiliar);
    }while(auxiliar!=(int)auxiliar);
	
	numero=auxiliar;
	 
	while(numero>0){
		soma=soma+numero;
		--numero;
	}
	
	printf("\nA soma dos %d primeiros numeros natural e': %d.\n", (int)auxiliar, soma);
	return 0; 
}
