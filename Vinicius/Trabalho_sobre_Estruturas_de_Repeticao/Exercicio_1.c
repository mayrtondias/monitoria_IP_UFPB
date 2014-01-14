#include<stdio.h>
#include<stdlib.h>

/* Escreva um programa que imprima todos os números inteiros 
de 200 a 100 (em ordem decrescente)

Observe que esse problema ha uma instrucao que e' repetida varias
vezes, dessa forma podemos ultilizar um laco de repeticao para nos
auxiliar. Outro ponto que podemos observar que nesse caso podemos 
ultilizar tanto a estrutura for ou while, no entanto, nos sabemos 
quantas interacoes a estrutura ira realizar, entao, torna-se mais 
adequado ultilizar a estrutura for. Veja abaixo uma das formas de
resolver esse problema com a estrutura for.
*/

int main(){
	/* variavel contador para auxiliar o for*/
	int contador;
	
	/* Nesse caso devemos inicializar o valor da variavel contador
	com o valor 200, visto que, esse valor e o primeiro elemento 
	da sequencia desejada, em seguida, devemos verificar se o valor
	da variavel contador nao e menor que o valor 100, pois valores 
	abaixo de 100 nao pertencem a sequencia, ou seja, nao devem 
	ser impresso, e como a sequencia e' descrecente entao a cada 
	interacao a variavel deve ser decrementada
	*/
	
	for(contador=200;contador>=100;--contador){
		printf("%d ", contador);
	}
	
	/* imprimindo o \n que serve para pular paraa proxima linha*/
	printf("\n");
	
	return 0;
}
