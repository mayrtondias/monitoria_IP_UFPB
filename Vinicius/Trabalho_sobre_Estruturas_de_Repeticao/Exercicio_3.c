#include<stdio.h>
#include<stdlib.h>

/* Escreva um programa que leia 20 numeros e imprima 
a soma dos positivos e o total de numeros negativos. 
Assuma que nao sera digitado o valor zero

Nesse problema, temos um processo que se repete varias
vezes, no qual podemos ultilizar uma estrutura de 
repeticao para pedir um valor ao usuario e verificar 
qual processo sera feito dependendo do valor inserido, 
todo esse processo deve ser feito a cada interacao
da estrutura. Observe abaixo:
*/

 int main(){
 	/* variavel para armazenar o valor digitado pelo usuario*/
 	int numero;
 	/* variavel o contole dos numeros digitados*/
 	int contador=0;
 	/* variavel para armazenar o valor total dos numeros positivos*/
 	int soma=0;
 	/* variavel para auxiliar na contagem dos numeros negativos*/
 	int contaNegativo=0;
 	
	while(contador<20){
		/* pedindo o numero ao usuario*/
		printf("Digite o %d-esimo numero\n",(contador+1));
		scanf("%d",&numero);
		
		/* verificando se o valor digitado nao e zero*/
		if(numero==0){ 
			continue;
		}
		
		/* analise se o numero e' positivo ou negativo*/
		if(numero>0){
			soma+=numero;
		}else{
			++contaNegativo;
		}
		++contador;
 	}
 	
 	/* imprimindo o valor total e a quantidade de negativos*/
 	printf("A soma dos positivos e igual a %d\n", soma);
 	printf("E foi encontrado %d numeros negativos\n", contaNegativo);
 	
 	return 0;
 } 
