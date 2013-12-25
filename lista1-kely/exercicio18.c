#include<stdio.h>
#include<stdlib.h>

/*Esse trecho de codigo ira solicitar um numero inteiro ao usuario.
Ao armazenar o valor do numero, sera impresso o valor de elemento 
da sequencia de Fibonacci.
*/

int main(){
	
	int numero; //guarda o valor inserido
	float auxiliar; 
	
	do{
    	printf("Digite o primero numero inteiro positivo: \n");
        scanf("%f",&auxiliar);
    }while((auxiliar!=(int)auxiliar)||(auxiliar<=0));
	
	numero=auxiliar;
	
	return 0;
}
