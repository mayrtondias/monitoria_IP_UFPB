#include<stdio.h>
#include<stdlib.h>

/* Nesse exemplo vamos analisar as saidas dos printf 
dentro do laco de repeticao e observar o comportamento
do mesmo. */

int main(){
	
	int i;
	
	printf("A\n");
	
	/*Um dos pontos inportantes do laco de repeticao for
	e' quanto a ordem de exercucao das instrucoes contidas
	nos seus parenteses, note que podemos ver dessa forma:
	for(instrucao1;instrucao2;instrucao3)
	ao exercutar um for dessa forma, primeiramente e exercutada
	a instrucao1 (que geramente e' uma atribuicao) que sera' 
	exercutada uma unica vez, a cada inicio de exercucao do 
	laco for, a segunda a ser avaliada e a instrucao2 caso ela
	seja falsa o laco sera "quebrado" e o fluxo de exercucao
	ira para a proxima instrucao fora do for, mas se a instrucao2
	for verdadeira o bloco relacionado com o laco de repeticao 
	for sera exercutado e logo apos o termino do bloco a instrucao3
	sera exercutada (geralmente uma instrucao de incremento/decremento)
	para depois ir para a instrucao2 e fazer mais uma verificacao, 
	ate que a mesma seja falsa para sair do laco for.  
	
	no exemplo abaixo podemos ver o funcionamento desses passo.
	*/
		
	for (i = 0 ;i <= 5;i++)
		printf("%d ", i);
	
	printf("\nB\n");
	
	/*Apesar da variacao do laco for ser a mesma, o valor impresso 
	sera distinto, pois no exemplo anterior a funcao printf estava 
	dentro do bloco e era exercutado ate da instrucao3 que no nosso 
	caso e um incremento, mas no caso abaixo nao acontece dessa forma,
	pois a funcao printf esta no mesmo escopo da instrucao3 e logo apos
	o incremento separado pelo operador vigula, da forma que esta 
	mostrado abaixo, sera exercutado o incremneto e depois o printf, 
	modificando assim o valor da variavel i antes de sua impresao.
	*/
	
	for (i = 0;i <= 5;i++,printf("%d ", i));
	
	return 0;
}
