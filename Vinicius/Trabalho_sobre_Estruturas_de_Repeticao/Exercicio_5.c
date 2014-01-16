#include<stdio.h>
#include<stdlib.h>

/*Construa um programa para encontrar o maior e o menor 
número de uma série de números positivos fornecidos pelo 
usuário através do teclado. O dado finalizador é o número 
–1, e este não deve ser considerado na análise dos 
números da série.
*/

int main(){
	
	int teste=0;
	int numero;
	int maior=0;
	int menor=0;
	
	do{
		printf("Digite um numero: \n");
		scanf("%d", &numero);
		
		if(numero<=0){
			if(numero==-1){
				teste=1;
			}
			continue;
		}
		if(maior==0){
			maior=numero;
			menor=numero;
		}else{
			if(numero>maior){
				maior=numero;
			}
			if(numero<menor){
				menor=numero;
			}
		}
	}while(teste==0);
	
	printf("O Valor do maior numero e: %d\nO Valor do menor numero e: %d\n", maior, menor);
	
	return 0;
}
