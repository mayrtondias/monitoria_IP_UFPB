#include <stdio.h>
#include <stdlib.h>

/* O objetivo desse codigo e chamar atencao ao programador
sobre a String de formatacao da funcao scanf.
*/

int main(){
	
	int n;
	
	/* Observe que na String de formatacao da funcao scanf temos 
	temos a seguinte situacao:
	"%d\n", ou seja, a funcao scanf vai esperar que o usuario 
	digite um numero inteiro e um \n (tecla ENTER)no formato que
	foi passado, fazendo com que apos digitar o numero a funcao 
	ira esperar um novo ENTER como foi solicitado pelo programador. 
	*/
	
	printf("Introduza um numero");
	scanf("%d\n", &n);
	/* scanf("%d", &n); mais perciso, pois caso o programador nao 
	informe o usuario como deve se digitado o mesmo nao sabera' o 
	que deve digitar no programa
	*/
	
	printf("O numero eh = %d\n",n);
	system("PAUSE");
	
	return 0;
}
