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
	
	
	if(!(n-j)){
		printf("o valor da expressao (!(n-j)) e verdadeira\n");
	}else{
		printf("o valor da expressao (!(n-j)) e falsa\n");
	}
	
	if(i<j||2>=k){
		printf("o valor da expressao (i<j||2>=k) e verdadeira\n");
	}else{
		printf("o valor da expressao (i<j||2>=k) e falsa\n");
	}
	
	if(x<=5.0&& x!=1.0||i>j){
		printf("o valor da expressao (x<=5.0&& x!=1.0||i>j) e verdadeira\n");
	}else{
		printf("o valor da expressao (x<=5.0&& x!=1.0||i>j) e falsa\n");
	}
	
	if(i=2||j==4||k==5){
		printf("o valor da expressao (i=2||j==4||k==5) e verdadeira\n");
	}else{
		printf("o valor da expressao (i=2||j==4||k==5) e falsa\n");
	}
	
	return 0;
	
}
