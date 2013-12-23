#include<stdio.h>
#include<stdlib.h>

/* Nesse exemplo vamos analisar as saidas dos printf 
dentro do laco de repeticao e observar o comportamento
do mesmo. */

int main(){
	
	int i = 0;
	
	printf("A\n");
	
	/*Ao observar a estrutura condicional if abaixo, podemos
	notar, com um pouco de atencao que na condicao temos uma
	instrucao de atribuicao, que pode ser falsa caso a variavel
	receba o valor zero ou verdadeira caso receba um valor
	diferente de zero
	*/
	
	if (i = 5)
		printf ("%d %d %d \n", i, i+2, i+3);
	
	printf("\n\nB\n");
	
	/*O mesmo fato acontece com a estrutura while abaixo, so 
	que nesse caso provocara um laco infinito, pois a condicao 
	sempre sera verdadeira e nunca chegara em uma condicao 
	falsa para que o laco termine.
	*/
	
	i = 0;
	while (i = 5){
		printf("%d %d %d \n", i, i+2, i+3);
	}
	return 0;
}
