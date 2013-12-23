#include<stdio.h>
#include<stdlib.h>

/* Nesse exemplo vamos analisar as saidas dos printf 
dentro do laco de repeticao e observar o comportamento
do mesmo. */

int main(){
	
	int x;
	
	printf("A\n");
	
	/*Ao analisar esse dois trecho abaixo podemos observar que 
	eles imprimem a mesma saida, no entanto, ha uma diferenca 
	neles. No primeiro ha uma comparacao do  valor atual de x 
	com o valor 0, mas quando olhamos sua declaracao, notamos 
	que a variavel x nao foi inicializada com um valor, ou seja, 
	nesse momento o valor da variavel contem um valor indesejado
	(denominado lixo de memoria), que na grande maioria das vezes 
	e diferente de zero fazendo com que seja impresso Y. Ja no 
	segundo trecho, temos uma instrucao de atribuicao, ou seja, 
	o valor 0 e atribuido a variavel 0, que quando for analisado
	pelo if resultara em falso e tambem sera impresso Y.
	*/
	
	if (x==0)
		printf("X");
	else
		printf("Y");
	
	printf("\nB\n");

	if (x=0)
		printf("X");
	else
		printf("Y");
	
	return 0;
}
