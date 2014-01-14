#include<stdio.h>
#include<stdlib.h>

/* Esse trecho de codigo ira solicitar um numero inteiro ao usuario.
Ao armazenar o valor do numero, sera impresso todos os valores 
maiores e que nao seja multiplos de 3 do numero armazenado. 
A sequencia de valores ira para ao encontramos o primeiro valor
multiplo de 10.
*/

int main(){
	
	int numero; //guarda o valor inserido
	float auxiliar; 
	
	do{
    	printf("Digite o primero numero inteiro positivo: \n");
        scanf("%f",&auxiliar);
    }while((auxiliar!=(int)auxiliar)||(auxiliar<=0));
	
	numero=auxiliar;
	
	
	while(1){ //laco infinito
		
		if((numero%10)==0){
			break; //finalizar o la�o
		}
		
		if((numero%3)==0){
			++numero;
			continue; //passa para a proxima interacao
		}
		
		printf("%d ", numero);
		++numero;
	}
	printf("\n");
	return 0;
}
