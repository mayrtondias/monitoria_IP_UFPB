#include<stdio.h>
#include<stdlib.h>

/* Faça um programa que:
- leia um número real X do teclado;
- determine e imprima o seguinte somatório:
S = X – X + X – X + X …
	    --  --  --  --
		1!  2!  3!  4!
usando os 20 primeiros termos da série.
*/

int main(){
	float s=0;
	float numero;
	int contador=0;
	int fatorial=1;
	int contadorFatorial;
	
	printf("Digite um numero: \n");
	scanf("%f", &numero);
	
	while(contador<20){
		fatorial=1;
		contadorFatorial=contador;
		
		while(contadorFatorial>0){
			fatorial*=contadorFatorial;
			--contadorFatorial;
		}
		
		if((contador%2)==0){
			s+=(numero/fatorial);
		}else{
			s-=(numero/fatorial);
		}
		++contador;
	}
	
	printf("Digite um numero: %f\n",s);
	
	return 0;
}
