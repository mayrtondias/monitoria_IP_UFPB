#include<stdio.h>
#include<stdlib.h>

/* Esse trecho de codigo ira solicitar um numero inteiro ao usuario.
Ao armazenar o valor do numero, sera impresso o valor de elemento 
da sequencia de Fibonacci.
*/

int main(){
	
	int numero; //guarda o valor inserido
	int atual, ultimo=1, penultimo=1, contador=3;
	float auxiliar; 
	
	do{
    	printf("Digite o primero numero inteiro positivo: \n");
        scanf("%f",&auxiliar);
    }while((auxiliar!=(int)auxiliar)||(auxiliar<=0));
	
	numero=auxiliar;
	
	if(numero<3){
		printf("1\n");
	}else{
		while(contador<=numero){//encontrando o elemento do Fibonacci
			atual=ultimo+penultimo;
			penultimo=ultimo;
			ultimo=atual;
			++contador;
		}
		printf("%d\n",ultimo);
	}
	
	
	return 0;
}
