#include<stdio.h>
#include<stdlib.h>

/* Nesse exemplo vamos analisar as saidas dos printf 
dentro do laco de repeticao e observar o comportamento
do mesmo. */

int main(){
	
	int i,j;
	
	printf("A\n");
	
	/*nesse laco podemos observar que o valor da 
	variavel i vai incrementando em duas unidades,
	 que sera a sequinte sequencia
	1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21. 
	sendo que ao imprimir o valor da variavel i ha
	um trucamento da parte decimal, visto que, a 
	mesma e uma variavel do tipo int 
	*/
	
	for (i = 1 ; i <=20; i+=2)
	printf("\n%d", i/2);
	
	printf("\n\nB\n");
	
	/*Ja nesse trecho e bem mais simples de observar que 
	o valor da variavel segue a seguinte sequencia:
	0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10. Nesse caso o valor 
	10 e impresso, pois a condicao e verdadeira para os 
	valores menores ou iguais a 10.
	*/
	
	for (j = 0 ; j <= 10; j++)
	printf("\n%d", j);
	
	return 0;
}
