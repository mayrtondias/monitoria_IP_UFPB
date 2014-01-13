#include<stdio.h>
#include<stdlib.h>

/* Nesse exemplo vamos analisar as saidas dos printf 
dentro do laco de repeticao e observar o comportamento
do mesmo. 
*/

int main(){
	
	int x = 10;
	
	printf("A\n");
	
	/* Podemos notar ao analisar esse exemplo abaixo, que
	o operador -- tem maior precedencia em relacao ao 
	operador >, fazendo com que o bloco do laco de repeticao
	while nao seja executado nenhuma vez 
	*/
	
	while (--x > 9){
		printf("%d", x);
	}
	
	printf("\nB\n");
	
	/* Ja nesse exemplo, podemos notar que a condicao e'
	a mesma, no entanto, o bloco do laco de repeticao do-while
	sera exercutado pelo menos uma vez, caso a condicao
	seja falsa, que é justamente o caso abaixo
	*/
	
	x = 10;
	
	do {
		printf("%d", x);
	} while(--x > 9);
	
	return 0;
}
