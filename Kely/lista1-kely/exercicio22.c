#include<stdio.h>
#include<stdlib.h>

/* Esse trecho de codigo ira solicitar um numero inteiro ao usuario,
de tal forma, que ele ira realizar os calculo para separar o digito 
de centena, dezena e unidade, pois ao final dessas operacoes, os 
digitos sera impresso de forma individual.
*/

int main(){
	
	int numero; //guarda o valor inserido
	int resto;
	int unidade, dezena, centena;
	float auxiliar; 
	
	do{
    	printf("Digite um numero inteiro (entre 100 - 999): \n");
        scanf("%f",&auxiliar);
    }while((auxiliar!=(int)auxiliar)||(auxiliar<100)||(auxiliar>999));
	
	//separando os digitos
	numero=auxiliar;
	centena=numero/100;
	resto=numero%100;
	dezena=resto/10;
	unidade=resto%10;
	
	printf("O numero digitado foi: %d onde temos:\nCentena: %d\nDezena: %d\nUnidade: %d\n",numero, centena, dezena, unidade);
	
	return 0;
}
