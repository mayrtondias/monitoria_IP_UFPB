#include<stdio.h>
#include<stdlib.h>

/* Nesse exemplo vamos analisar as saidas dos printf 
dentro do laco de repeticao e observar o comportamento
do mesmo. */

int main(){
	
	printf("A\n");
	int a;
	float b;
	
	/*Nos trechos abaixo podemos notar que ha varias 
	interacoes no laco for ate que o valor da variavel 
	em questao fique com o valor menor ou igual a zero
	para que a condicao seja falsa. No entanto podemos
	notar que no primeiro laco a variavel a chegara a 
	condicao que a tornara falsa mais rapidamente, isso 
	foi causado pelo fato de que a mesma e uma variavel
	do tipo int causando assim um trucamento na terceira
	instrucao do for.
	*/
	
	for (a=36 ; a>0 ; a/=2)
		printf("%d\t", a);
	printf("\n");
	
	printf("\n\nB\n");
	
	/*Ja nesse trecho ha mais interacao do que a anterior,
	pois o tipo da varivel e float deixando assim a mesma
	com mais precisao. NO entanto, e sempre bom lembrar 
	que se esses calculo fossem feito na matematica esse 
	laco seria infinito, pois quando um valor dividido 
	por 2 ele nunca chega a zero, mesmo que seja muito 
	proximo, so que na Computacao os numero tem um limite 
	para armazenar seus valores, entao por haver trucamento
	o laco for terminara. 
	*/
	
	for (b=36 ; b>0 ; b/=2)
		printf("%f\t", b);
	printf("\n");
	
	return 0;
}
