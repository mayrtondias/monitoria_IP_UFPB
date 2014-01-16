#include<stdio.h>
#include<stdlib.h>

/* Foi feita uma estatistica em cinco cidades brasileiras para
 coletar dados sobre acidentes de transito. Foram obtidos os 
 seguintes dados:
a) codigo da cidade;
b) numero de veiculos de passeio (em 2007);
c) numero de acidentes de transito com vitimas (em 2007).
	>Deseja-se saber:
a) qual o maior e o menor indice de acidentes de transito e 
   a que cidades pertencem;
b) qual e media de veiculos nas cinco cidades juntas;
c) qual a media de acidentes de transito nas cidades com 
   menos de 2.000 veiculos de passeio.
	>Assuma que os dados informados sejam validos.
*/

int main(){
	int contador=0;
	int codigoCidade;
	int numVeiculoPasseio;
	int acidentesVitimas;
	int qtdeMaiorAcidente;
	int qtdeMenorAcidente;
	int cidadeMaiorAcidente;
	int cidadeMenorAcidente;
	float mediaVeiculos;
	float mediaAcidentes=0;
	int contadorMediaAcidentes=0;
	
	while(contador<5){
		
		printf("Digite o codigo da cidade %d\n", (contador+1));
		scanf("%d",&codigoCidade);
		printf("Digite o numero de veiculos de passeio da cidade %d\n", (contador+1));
		scanf("%d",&numVeiculoPasseio);
		printf("Digite o numero de acidentes de transito com vitimas da cidade %d\n", (contador+1));
		scanf("%d",&acidentesVitimas);
		
		if(contador==0){
			qtdeMaiorAcidente=acidentesVitimas;
			qtdeMenorAcidente=acidentesVitimas;
	 		cidadeMaiorAcidente=codigoCidade;
	 		cidadeMenorAcidente=codigoCidade;
		}else{
			if(acidentesVitimas>qtdeMaiorAcidente){
				qtdeMaiorAcidente=acidentesVitimas;
				cidadeMaiorAcidente=codigoCidade;
			}
			if(acidentesVitimas<qtdeMenorAcidente){
				qtdeMenorAcidente=acidentesVitimas;
				cidadeMenorAcidente=codigoCidade;
			}
		}
		mediaVeiculos+=numVeiculoPasseio;
		
		if(numVeiculoPasseio<2000){
			mediaAcidentes+=acidentesVitimas;
			++contadorMediaAcidentes;
		}
		
		++contador;
	}
	
	printf("O maior indice de acidentes e' %d da cidade %d\n",qtdeMaiorAcidente,cidadeMaiorAcidente);
	printf("O menor indice de acidentes e' %d da cidade %d\n",qtdeMenorAcidente,cidadeMenorAcidente);
	printf("A media de veiculos das cidades e' %f \n",(mediaVeiculos/5));
	printf("A media de acidente de transito nas cidades \ncom menos de 2.000 veiculos de passeio e': %f \n",(mediaAcidentes/contadorMediaAcidentes));
		
	return 0;
}
