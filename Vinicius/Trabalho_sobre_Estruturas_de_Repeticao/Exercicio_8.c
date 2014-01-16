#include<stdio.h>
#include<stdlib.h>

/*Escreva um programa que receba varios numeros, calcule e mostre:
> a soma dos numeros digitados;
> a quantidade de numeros digitados;
> a media dos numeros digitados;
> o maior numero digitado;
> o menor numero digitado;
> a media dos numeros pares;
> a percentagem dos numeros impares entre todos os numeros digitados.
Finalize a entrada de dados com a digitacao do numero 30.000.
*/

int main(){
	
	int teste=0;
	int numero;
	int somaTotal=0;
	int qtdeNumeros=0;
	int maiorNumero=0;
	int menorNumero=0;
	int somaPares=0;
	int qtdePares=0;
	
	while(teste==0){
		printf("Digite um numero: \n");
		scanf("%d",&numero);
		
		if(numero==30000){
			printf("A soma dos numeros digitado foi: %d\n",somaTotal);
			printf("A quantidade de numeros digitado foi: %d\n",qtdeNumeros);
			printf("A media dos numeros digitado foi: %f\n",(float)(somaTotal/qtdeNumeros));
			printf("O maior numero digitado foi: %d\n",maiorNumero);
			printf("O menor numero digitado foi: %d\n",menorNumero);
			printf("A media dos numeros pares digitado foi: %f\n",(float)(somaPares/qtdePares));
			printf("A Porcentagem dos numeros impares foi: %f % \n",(float)(((qtdeNumeros-qtdePares)*100)/qtdeNumeros));
			teste=1;
			continue;
		}
		
		somaTotal+=numero;
		++qtdeNumeros;
		if(qtdeNumeros==1){
			maiorNumero=numero;
			menorNumero=numero;
		}else{
			if(numero>maiorNumero){
				maiorNumero=numero;
			}
			if(numero<menorNumero){
				menorNumero=numero;
			}
		}
		if((numero%2)==0){
			somaPares+=numero;
			++qtdePares;
		}
	}
	
	return 0;
}
