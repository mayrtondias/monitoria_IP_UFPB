#include<stdio.h>
#include<stdlib.h>

/* Exercicio 01 - Fazer um programa que leia um n�mero
e mostre o seu antecessor e o seu sucessor.
*/

/* Um das forma para resolver esse problema e' guardando 
o valor inserido pelo usuario em uma variavel, pois ao
passar dessa etapa podemos imprimir o valores do 
antecessor e sucessor apenas diminuindo e adicionando 
uma unidade a variavel*/

int main(){
	
	int numero;
	
	printf("Digite o numero desejado: \n");
	scanf("%d", &numero);
	
	printf("Sabendo que o numero e': %d\no antecessor sera': %d\no sucessor sera': %d\n", numero, (numero-1), (numero+1));
	
	//printf("Sabendo que o numero e': %d\no antecessor sera': %d\no sucessor sera': %d\n", numero, --numero, ++numero);
	
	/*E bom destacar que os printf acima possuem uma diferenca na saida,
	observe que no printf que esta comentado foi substituido (numero-1) por
	--numero, note que, em (numero-1) o valor da variavel numero e' subtraido
	uma unidade e esse valor e' passado para a funcao printf, ja em --numero o 
	valor da variavel numero e' subtraido uma unidade, mas o resultado desse 
	operacao sera armazendo na propria variavel numero, fazendo com que, seu 
	valor seja alterando, ou seja, no printf comentado o valor da variavel 
	numero nao sera igual para todos, pois ao passar por um incremento ou 
	decremento o valor da variavel sera alterado.  
	*/
	
	return 0;
}
