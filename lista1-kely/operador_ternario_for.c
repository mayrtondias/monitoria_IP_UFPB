#include<stdio.h>
#include<stdlib.h>

/*Esse codigo tem com objetivo mostrar o funcionamento 
do operador ternario so que nesse caso foi tambem 
incluido um laco de repeticao for */

int main(){
	
	int x;
	
	/*observe os valores da variavel x em cada interacao
	1° interacao:
	antes:
	o valor de x e igual a 0
	imprime:
	1
	depois:
	o valor de x e igual a 2
	
	2° interacao:
	antes:
	o valor de x e igual a 2
	imprime:
	3
	depois:
	o valor de x e igual a  4
	
	3° interacao:
	antes:
	o valor de x e igual a 4
	imprime:
	0
	depois:
	o valor de x e igual a 1
	
	4° interacao:
	antes:
	o valor de x e igual a 1
	imprime:
	2
	depois:
	o valor de x e igual a 3
	
	5° interacao:
	antes:
	o valor de x e igual a 3
	imprime:
	4
	depois:
	o valor de x e igual a 5
	
	Antes da 6° interacao para, pois o valor de x e maior que 4
	*/
	
	for (x=0;x <=4; x++){
		x=x!=4? x+1:0;
		printf("\n%d",x);	
	}
	return 0;
}


