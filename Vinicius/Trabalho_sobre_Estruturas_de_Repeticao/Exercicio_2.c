#include<stdio.h>
#include<stdlib.h>

/* Escreva um programa que imprima todos os numeros 
impares do intervalo fechado de 1 a 100 

No problema descrito acima, podemos citar duas solucoes 
que pode ser usada, uma nos poderiamos ultilizar um 
for para imprimir todos os valores entre 1 e 100, so que
poderiamos decrementar em duas unidades a variavel que 
auxilia na contagem, observe essa opcao comentada abaixo.
Um outra forma para imprimir a sequencia desejada e' passar 
por todos os valores entre 1 e 100, mas so sera impresso os 
valores que forem impares, podemos fazer essa analise colocando
dentro do for uma estrutura condicional if que tem o 
operador modulo que servirar para fazer a verificacao 
do numero impar e so entao ele sera impresso. 
Observe essa opcao abaixo.    
*/

int main(){
	/* variavel contador para auxiliar o for*/
	int contador;
	
	for(contador=1;contador<=100;++contador){
		/* verificar se o modulo 2 de um numero e igual ao 
		valor 1 imprica que esse numero e' impar*/
		if((contador%2)==1)
			printf("%d ", contador);
	}
	
	/* primeira opcao descrita acima
	for(contador=1;contador<=100;contador=contador+2){
		printf("%d ", contador);
	}
	*/
	
	return 0;
}
