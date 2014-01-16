#include <stdio.h>
#include <stdlib.h>

/* Nesse codigo abaixo sera mostrado um erro de compatibilidade
com relacao aos tipos das variaveis e a String de formatacao, 
nas funcao printf e scanf.
*/

int main(){
	
	int n;
	
	/* Podemos notar que nesse exemplo foi declarada uma variavel
	do tipo int, mas na chamanda da funcao scanf foi passado na 
	string de formatacao %f no lugar do %i, o que causa um efeito
	no valor armazenado e mostrado, nao esperado pelo programador.
	*/
	
	printf("Introduza um numero");
	scanf("%f", &n);
	printf("O numero eh = %f\n",n);
	system("PAUSE");
	
	return 0;
}
	
