#include<stdio.h>
#include<stdlib.h>

/*
Esse programa tem como objetivo mostrar o comportamento de alguns operadores,
ou seja, suas propriedades, dessa forma sao avaliadas algumas exprecoes com
o o if-else a fim de observar se as mesmas são verdadeiras ou falsa. 
*/

int main(){
	//declaração das variaveis que serao avaliadas pelos if's
	int i=1, j=2, k=3, n=2;
	float x=3.3, y=4.4;
	
	
	if(2 * i - 7 <= j - 8){
		printf("o valor da exprecao (2 * i - 7 <= j - 8) e verdadeira\n");
	}else{
		printf("o valor da exprecao (2 * i - 7 <= j - 8) e falsa\n");
	}
	
	if(-x + y >= 2.0 * y){
		printf("o valor da exprecao (-x + y >= 2.0 * y) e verdadeira\n");
	}else{
		printf("o valor da exprecao (-x + y >= 2.0 * y) e falsa\n");
	}
	
	if(!(n-j)){
		printf("o valor da exprecao (!(n-j)) e verdadeira\n");
	}else{
		printf("o valor da exprecao (!(n-j)) e falsa\n");
	}
	
	if(i<j||2>=k){
		printf("o valor da exprecao (i<j||2>=k) e verdadeira\n");
	}else{
		printf("o valor da exprecao (i<j||2>=k) e falsa\n");
	}
	
	if(x<=5.0&& x!=1.0||i>j){
		printf("o valor da exprecao (x<=5.0&& x!=1.0||i>j) e verdadeira\n");
	}else{
		printf("o valor da exprecao (x<=5.0&& x!=1.0||i>j) e falsa\n");
	}
	
	if(i=2||j==4||k==5){
		printf("o valor da exprecao (i=2||j==4||k==5) e verdadeira\n");
	}else{
		printf("o valor da exprecao (i=2||j==4||k==5) e falsa\n");
	}
	
	return 0;
	
}
