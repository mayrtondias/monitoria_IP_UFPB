#include<stdio.h>
#include<stdlib.h>

/*Esse trecho de codigo ira solicitar um numero inteiro ao usuario,
de tal forma, que ele ira realizar os calculo para separar a unidade 
de milhar, a centena, a dezena e a unidade, pois ao final dessa 
operacoes, os digitos desse numero sera impresso de forma invertida.
*/

int main(){
	
	int numero; //guarda o valor inserido
	int resto;
	int unidade, dezena, centena, uMilhar;
	float auxiliar; 
	
	do{
    	printf("Digite um numero inteiro (entre 0000 - 9999): \n");
        scanf("%f",&auxiliar);
    }while((auxiliar!=(int)auxiliar)||(auxiliar<0000)||(auxiliar>9999));
	
	//separando os digitos
	numero=auxiliar;
	uMilhar=numero/1000;
	resto=numero%1000;
	centena=resto/100;
	resto=resto%100;
	dezena=resto/10;
	unidade=resto%10;
	
	printf("O numero digitado foi: %d e sua inversao %d\n",numero,(unidade*1000+dezena*100+centena*10+uMilhar));
	
	return 0;
}
