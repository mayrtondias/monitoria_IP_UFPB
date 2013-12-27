#include<stdio.h>
#include<stdlib.h>

/*Esse trecho de codigo ira solicitar um numero inteiro ao usuario.
e depois sera impresso todos os inteiros impares de 1 ate o valor
inserido.
*/

int main(){
	
	int numero; //guarda o valor inserido
	int contador=1;
	float auxiliar; 
	
	do{
    	printf("Digite um numero inteiro positivo: \n");
        scanf("%f",&auxiliar);
    }while((auxiliar!=(int)auxiliar)||(auxiliar<=0));
    
	numero=(int)auxiliar;
	    
	while(contador<=numero){
		if((contador%2)==1){//identificando os numero impares
	    	printf("%d ",contador);
	    }
	    ++contador;
	}	
	
	return 0;
}
