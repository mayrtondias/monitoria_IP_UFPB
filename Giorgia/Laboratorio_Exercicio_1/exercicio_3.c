#include<stdio.h>
#include<stdlib.h>

/*Exercicio 03 - Fazer um programa que obtenha dois n�meros inteiros, x e
y, mostre o quociente e o resto da divisao inteira entre eles.
*/

/*Nesse exercicio podemos armazenar os dois valores inseridos pelo usuario,
e logo apos mostrar os valores das divis�o e modulo(resto) pelo printf
*/

int main(){
	
	int x, y; //para guardar o valor inserido pelo usuario
	
	printf("Digite o valor de x: \n");
	scanf("%d", &x);
	
	printf("Digite o valor de y: \n");
	scanf("%d", &y);
	
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
