#include<stdio.h>
#include<stdlib.h>

/* Esse trecho de codigo ira solicitar um numero inteiro ao usuario,
e depois sera impresso o resultado da expressao 1+(1/1!)+(1/2!)+
(1/3!)+...+(1/N!).
*/

int main(){
	
	int numero; //guarda o valor inserido
	int contador=1;
	int fatorial, i;
	float soma;     //valor da expressao
	float auxiliar; 
	
	do{
    	printf("Digite um numero inteiro positivo: \n");
        scanf("%f",&auxiliar);
    }while((auxiliar!=(int)auxiliar)||(auxiliar<=0));
    
	numero=(int)auxiliar;
	    
	while(contador<=numero){
		fatorial=1;
		for(i=1;i<=contador;++i){ //encontrando o fatorial
	    	fatorial*=i;
	    }
	    ++contador;
	    soma+=(1.0/fatorial);
	}	
	
	printf("O valor da expressao e: %f\n",soma);
	return 0;
}
