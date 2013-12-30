#include<stdio.h>
#include<stdlib.h>

/*
Esse codigo tem com objetivo mostrar o funcionamento do operador ternario.
*/

int main(){
	
	int a = 1, b = 2, c = -5, x = 0;
	
	/*observe que a instrucao abaixo tem tres operadores ternarios alinhados
	onde podemos observar melhor usando os parentes dessa forma 
	x = a < b ?( a < c ? a : c ): (b < c ? b : c);
	ou seja, o perador ternario que esta no primeiro parenteses so' sera'
	exercutado se o valor da variavel a for menor do que o valor da variavel b
	caso contrario ser� exercutado operador ternario que se encontra no segundo 
	parentes
	*/
	
	x = a < b ? a < c ? a : c : b < c ? b : c;
	
	printf("\n%d",x);
	
	return 0;
}
