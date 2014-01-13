//Exercício 07

/* Codigo disponibilizado pela professora Kely Diana Villacorta Villacorta
da Universidade Federal da Paraiba
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float n, parte_frac;
	int parte_int;
	
	printf("Digite um numero real:\n");
	scanf("%f",&n);
	
	parte_int=(int)n;
	parte_frac=n-parte_int;
	
	printf("Logo, a parte inteira de %f eh %d\n",n,parte_int);
	printf("e a parte fracionaria de %f eh %f\n",n,parte_frac);
	
	system("pause");
	return 0;
}
