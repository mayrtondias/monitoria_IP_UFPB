/*
RESOLUCAO DO 4 QUESTAO DA 2° LISTA  
IDENTIFICANDO OS ERROS NOS CODIGOS ABAIXO

-----------------------------------------------------------------------------

nesse trecho abaixo podemos notar que a variavel x esta sendo declarada
duas vezes, o que causara um erro de compilacao, podemos notar tambem 
que as variaveis x e y que foram declaradas não foram usadas podendo causar
um aviso ao termino da compilação. 

#include <stdlib.h>

int main(){
	int x, y, x;
	system("PAUSE");
	return 0;
}

--------------------------------------------------------------------------
ja no trecho abaixo foi declarado uma variavel do tipo float com o 
identificador nomeado como int o que gerará um error, pois int e uma
palavra reservada da linguagem e nao podemos usar essas palavras 
como identificadores de constantes, de variaveis e nem funcoes.

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int x, y;
	float int = 5.23;
	printf("%f", int);
	system("PAUSE");
	return 0;
}

------------------------------------------------------------------------

nesse caso podemos observar que foi usado um break dentro do bloco de 
um if o que causara um erro visto que o if e uma estrutura de selecao 
e nao uma estrutura de repeticao como o while, do-while e for, outro 
ponto que podemos notar e que a variavel x nao foi inicializada, o que 
fara na maioria das vezes ser diferente de zero, e dessa forma sera 
exercutada o bloco correspondente ao else, no entanto, o codigo nao 
deixara de ser compilado por esse ultimo fato.

#include <stdio.h>
#include <stdlib.h>

int main(){
	int x;
	if (x==0)
		break;
	else
		printf("X nao e zero \n");
	system("PAUSE");
	return 0;
}*/

