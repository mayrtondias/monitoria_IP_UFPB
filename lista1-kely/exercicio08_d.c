#include<stdio.h>
#include<stdlib.h>

/*Esse trecho de codigo ira solicitar um numero inteiro ao usuario,
de tal forma, que ao final ira mostrar a soma dos n primeiros numeros
impares natural. Usando o laco de repeticao for.
*/

int main(){
	
	int numero; //guarda o valor inserido
	int soma=0; 
	int i;
	float auxiliar; 
	
	do{
    	printf("\nDigite um numero inteiro: ");
        scanf("%f",&auxiliar);
    }while(auxiliar!=(int)auxiliar);
	
	numero=auxiliar;
	 
	for(i=1;i<=numero;++i){
		if((i%2)==1){
			soma=soma+i;
		}
	}
	
	printf("\nA soma dos %d primeiros numeros impares naturais e': %d.\n", (int)auxiliar, soma);
	return 0; 
}
