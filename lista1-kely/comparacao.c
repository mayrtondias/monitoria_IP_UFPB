#include<stdio.h>
#include<stdlib.h>

/*
Esse programa tem como objetivo mostrar o comportamento de alguns operadores,
ou seja, suas propriedades, dessa forma sao avaliadas algumas expressoes com
o o if-else a fim de observar se as mesmas são verdadeiras ou falsa. 
*/

int main(){
	//declaração das variaveis que serao avaliadas pelos if's
	int i=1, j=2, k=3, n=2;
	float x=3.3, y=4.4;
	
	/*nesse if o valor da variavel i sera multiplicada por 2, depois subtraida
	de 7, que nesse caso e' -5, logo apos, sera retirado 8 do valor da variavel
	j que ficara -6, logo apos dessas operacoes, sera avaliado se -5 e' menor 
	do que -6, que resultara em falso onde exercutara o printf do else.*/
	if(2 * i - 7 <= j - 8){
		printf("o valor da expressao (2 * i - 7 <= j - 8) e verdadeira\n");
	}else{
		printf("o valor da expressao (2 * i - 7 <= j - 8) e falsa\n");
	}
	
	/*nesse caso o menos que antecede a variavel x sera exercutada primeira do
	que a soma com o valor da variavel y que resultara no valor 1.0, em seguida 
	multiplicara 2.0 pelo vaor da variavel y que resultara em 8.8, depois desses
	passos sera avaliado se 1.0 e' maior ou igual a 8.8 que será falsa exercutando
	assim o printf do bloco else.*/
	if(-x + y >= 2.0 * y){
		printf("o valor da expressao (-x + y >= 2.0 * y) e verdadeira\n");
	}else{
		printf("o valor da expressao (-x + y >= 2.0 * y) e falsa \n");
	}
	
	/*observe atentamente que a Linguagem C trata o valor dentro da condição do 
	if, if-else, while, do-while e for, da segunite forma, se o valor retornado
	for igual a zero a Lingugem considera que a expressao e falsa e verdadeiro 
	qualquer valor diferente de zero, dessa forma o if abaixo ele ira subtrair 
	o valor de j do valor de n que nesse caso retona o valor 0 que seria falsa,
	no entanto, temos o operador ! de negacão a frente de toda expressao faz com
	o que a expresao nesse caso seja avaliada como verdadeira.*/
	if(!(n-j)){
		printf("o valor da expressao (!(n-j)) e verdadeira\n");
	}else{
		printf("o valor da expressao (!(n-j)) e falsa\n");
	}
	
	/*nesse caso sera comparado de o valor de i e menor que o valor de j que 
	nesse caso e verdadeiro o que torna toda expressao verdadeiro visto que temos
	o operador ||(ou/or) que para ser verdadeiro necesita que apenas um dos operandos
	seja verdadeiro, mas observe que a segunda parte da expressao sera verdadeira,
	pois o valor de k e maior que o valor 2.*/
	if(i<j||2>=k){
		printf("o valor da expressao (i<j||2>=k) e verdadeira\n");
	}else{
		printf("o valor da expressao (i<j||2>=k) e falsa\n");
	}
	
	/*nesse casso sera verificado se o valor de x e menor ou igual 5.0 E se esse 
	mesmo valor e diferente de 1.0, dessa forma como se trata de um operador logico
	E, entao sera como verdadeira, pois se seus operandos sao todos verdadeiros, 
	então ela retornara verdadeiro, logo apos essa avaliacao sera verificado o operador
	|| que ja possiu um operando verdadeiro e o segundo operando sera o resultado da
	comparacao do valor de i ser maior do que o valor de j que sera falso, mas como
	um dos operando ja e verdadeira entao sera expressao completa sera verdadeira.*/
	
	if(x<=5.0&& x!=1.0||i>j){
		printf("o valor da expressao (x<=5.0&& x!=1.0||i>j) e verdadeira\n");
	}else{
		printf("o valor da expressao (x<=5.0&& x!=1.0||i>j) e falsa\n");
	}
	
	/*nesse caso observe que na primeira parte nao temos uma mas sim uma atribuicao 
	que retornara sempre verdadeira se o valor recebido for diferente de zero e falsa
	quando o valor for zero, nesse caso sera verdadeira e a segunda sera falsa, pois 
	a comparacao se j e igual a 4 e falsa, mas como a primeira e verdadeira, então 
	o primeiro ou retornara verdadeiro e a ultima parte tambem e falsa pois de k e 
	diferente de 5, contudo por se tratar de um ou a expressao final será verdadeira.*/
	if(i=2||j==4||k==5){
		printf("o valor da expressao (i=2||j==4||k==5) e verdadeira\n");
	}else{
		printf("o valor da expressao (i=2||j==4||k==5) e falsa\n");
	}
	
	return 0;
	
}
