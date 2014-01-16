#include<stdio.h>
#include<stdlib.h>

/* Em um campeonato de futebol existem cinco times e cada um 
possui onze jogadores. Faca um programa que receba a idade, 
o peso e a altura de cada um dos jogadores, calcule e mostre:
> a quantidade de jogadores com idade inferior a 18 anos;
> a media das idades dos jogadores de cada time;
> a media das alturas de todos os jogadores do campeonato;
> a percentagem de jogadores com mais de 80 quilos entre 
  todos os jogadores do campeonato.
   Assuma que os dados informados sejam validos.
*/

int main(){
	
	int contadorJogadores;
	int contadorTimes=0;
	int idadeJogador;
	float pesoJogador;
	float alturaJogador;
	int qtdeIdadeMenor18=0;
	int somaIdade=0;
	float mediaIdadePrimeiroTime=0;
	float mediaIdadeSegundoTime=0;
	float mediaIdadeTerceiroTime=0;
	float mediaIdadeQuartoTime=0;
	float mediaIdadeQuintoTime=0;
	float somaAlturaJogadores=0;
	int qtdePesoMaior80=0;
	
	while(contadorTimes<5){
		
		contadorJogadores=0;
		somaIdade=0;
		while(contadorJogadores<11){
			printf("Digite a idade do %d-esimo jogador do Time %d\n",(contadorJogadores+1),(contadorTimes+1));
			scanf("%d",&idadeJogador);
			printf("Digite o peso do %d-esimo jogador do Time %d\n",(contadorJogadores+1),(contadorTimes+1));
			scanf("%f",&pesoJogador);
			printf("Digite a altura do %d-esimo jogador do Time %d\n",(contadorJogadores+1),(contadorTimes+1));
			scanf("%f",&alturaJogador);
			
			if(idadeJogador<18){
				++qtdeIdadeMenor18;
			}
			somaIdade+=idadeJogador;
			somaAlturaJogadores+=alturaJogador;
			
			if(pesoJogador>80){
				++qtdePesoMaior80;
			}
			++contadorJogadores;
		}
		
		switch(contadorTimes){
			case 0:
				mediaIdadePrimeiroTime=(somaIdade/11);
				break;
			case 1:
				mediaIdadeSegundoTime=(somaIdade/11);
				break;
			case 2:
				mediaIdadeTerceiroTime=(somaIdade/11);
				break;
			case 3:
				mediaIdadeQuartoTime=(somaIdade/11);
				break;
			case 4:
				mediaIdadeQuintoTime=(somaIdade/11);
				break;
			default:
				break;
		}
		++contadorTimes;
	}
	
	printf("A quantidade de jogadores com idade inferior a 18 anos e': %d\n",qtdeIdadeMenor18);
	printf("A media das idades dos jogadores do Primeiro time e': %f\n",mediaIdadePrimeiroTime);
	printf("A media das idades dos jogadores do Segundo time e': %f\n",mediaIdadeSegundoTime);
	printf("A media das idades dos jogadores do Terceiro time e': %f\n",mediaIdadeTerceiroTime);
	printf("A media das idades dos jogadores do Quarto time e': %f\n",mediaIdadeQuartoTime);
	printf("A media das idades dos jogadores do Quinto time e': %f\n",mediaIdadeQuintoTime);
	printf("A media das alturas de todos os jogadores do campeonato e': %f\n",(somaAlturaJogadores/55));
	printf("A percentagem de jogadores com mais de 80 quilos \nentre todos os jogadores do campeonato e': %f\n",(float)((qtdePesoMaior80*100)/55));
	
	return 0;
}
