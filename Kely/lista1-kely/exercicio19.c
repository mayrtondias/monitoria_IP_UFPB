#include<stdio.h>
#include<stdlib.h>

/* Esse trecho de codigo ira solicitar varios numeros inteiro ao usuario.
quando o usuario inserir um valor negativo o programa retornara o maior
e menor digitado.
*/

int main(){
	
	int numero;  //guarda o valor inserido
	int maior, menor, contador=1;
	float auxiliar; 
	
	do{
		do{
	    	printf("Digite o %d-esimo numero inteiro positivo: \n",contador);
	        scanf("%f",&auxiliar);
	    }while((auxiliar!=(int)auxiliar));
	    
		numero=(int)auxiliar;
	    
		if(numero<=0){  //condicao para finaliar o laco
	    	break;
	    }
	    
		if(contador==1){//ajuste para iniciar as variaveis maior e menor
	    	maior=(int)auxiliar;
	    	menor=maior;
	    }
	    if(numero>maior){//comparando o maior
	    	maior=numero;
	    }
		if(numero<menor){//comparando o menor
	    	menor=numero;
	    }
	    
		++contador;
	    
	}while(numero>0);
	
	printf("O maior digitado foi: %d\nO menor digitado foi: %d\n", maior, menor);
	
	return 0;
}
