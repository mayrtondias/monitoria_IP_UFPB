#include<stdio.h>
#include<stdlib.h>

/*Esse trecho de codigo ira solicitar um numero inteiro ao usuario.
e depois sera impresso o numero de linhas da sequencia do Triangulo 
de Pascal.
*/

int main(){
	
	int numero; 	//guarda o valor inserido
	int contador=1;
	float numerador, denominador; //valores do coeficiente
	float elemento; //valor do elemento a ser impresso
	float auxiliar; 
	
	do{
    	printf("Digite um numero inteiro positivo: \n");
        scanf("%f",&auxiliar);
    }while((auxiliar!=(int)auxiliar)||(auxiliar<=0));
    
	numero=(int)auxiliar;
	
	printf("1 \n");
	while(contador<=numero){//controle das linhas a ser impressa 
		numerador=contador;
		elemento=1;
		
		printf("1 ");//elemento zero, ou seja (n sobre 0)
		
		//laco para calcular cada elemento de uma linha
		for(denominador=1;denominador<=contador;++denominador){
			elemento*=(numerador/denominador);
			printf("%d ",(int)elemento);
			--numerador;
		}
		printf("\n");
		++contador;
	}
	
	return 0;
}
