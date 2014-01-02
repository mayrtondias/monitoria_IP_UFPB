#include<stdio.h>
#include<stdlib.h>

/* Esse trecho de codigo ira solicitar dois numeros
inteiro positivo ao usuario.
*/

int main(){
	
	int A, B; //guarda o valor inserido
	float auxiliar; 
	
	do{
    	printf("Digite o primero numero inteiro positivo: \n");
        scanf("%f",&auxiliar);
    }while((auxiliar!=(int)auxiliar)||(auxiliar<=0));
	
	A=auxiliar;
	
	do{
    	printf("Digite o segundo numero inteiro positivo: \n");
        scanf("%f", &auxiliar);
    }while((auxiliar!=(int)auxiliar)||(auxiliar<=0));
	
	B=auxiliar;
	printf("A: %d B: %d", A, B);
	return 0;
}
