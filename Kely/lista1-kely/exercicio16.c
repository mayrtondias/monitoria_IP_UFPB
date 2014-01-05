#include<stdio.h>
#include<stdlib.h>

/* Esse trecho de codigo ira solicitar uma data ao usuario. 
Sendo que o fomato desejado e DD/MM/AAAA, caso a data nao exita
sera impressa data invalida.
*/

int main(){
	
	int numero; //guarda o valor inserido
	int dia, mes, ano;

	printf("Digite a data nesse formato DD/MM/AAAA\n");
    scanf("%d/%d/%d",&dia,&mes,&ano);
    
	if(ano==2013){//verificacao do ano
		switch(mes){
			case 2:
				if((dia>=1)&&(dia<=28)){
					printf("data valida\n");
				}
				break;
			case 4:
			case 6:
			case 9:
		    case 11:
		    	if((dia>=1)&&(dia<=30)){
					printf("data valida\n");
				}else{
					printf("data invalida\n");
				}
				break;
			case 1:
			case 3:
			case 5:
		    case 7:
		    case 8:
			case 10:
			case 12:
				if((dia>=1)&&(dia<=31)){
					printf("data valida\n");
				}else{
					printf("data invalida\n");
				}
				break;
		    default:
		    	printf("data invalida\n");
		}
	}else{
		printf("data invalida\n");
	}

	return 0;
}
