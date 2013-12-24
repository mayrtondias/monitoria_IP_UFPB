#include<stdio.h>
#include<stdlib.h>

/*Esse trecho de codigo ira solicitar um numero inteiro ao usuario,
de tal forma, que ele ira calcular se o numero inserido e par ou impar.
caso o numero seja para e programa mostrar o resultado do fatorial 
desse numero, caso o numero seja impar ele mostrar o resultado da potencia
do numero elevado a ele mesmo.
*/

int main(){
	
	int numero; //guarda o valor inserido
	int numeroFinal=1; 
	int i;
	float auxiliar; 
	
	do{
    	printf("\nDigite um numero inteiro: ");
        scanf("%f",&auxiliar);
    }while(auxiliar!=(int)auxiliar);
	
	numero=auxiliar;
	 
	if((numero%2)==0){ // verificado se o numero e par ou impar
		for(i=1;i<=numero;++i){//calculo do fatorial
			numeroFinal*=i;
		}
		printf("\nO fatorial de %d e igual a: %d\n", numero, numeroFinal);
	}else{
		for(i=1;i<=numero;++i){//calculo da potencia de N^N
			numeroFinal*=numero;
		}
		printf("\nA potencia de %d ^ %d e igual a: %d\n", numero, numero, numeroFinal);
	}
	
	return 0; 
}
