#include<stdio.h>
#include<stdlib.h>

/* Esse trecho de codigo ira solicitar dois numeros
inteiro positivo ao usuario.Ao final ira mostrar 
a soma todos os primos entre os mesmos.
*/

int main(){
	
	int A, B; //guarda o valor inserido
	int i,contador, contaResto;
	int soma=0;
	float auxiliar; 
	
	do{
    	printf("Digite o primero numero inteiro positivo: \n");
        scanf("%f",&auxiliar);
    }while((auxiliar!=(int)auxiliar)||(auxiliar<=0));
	
	A=auxiliar;
	
	do{
    	printf("Digite o segundo numero inteiro positivo: \n");
        scanf("%f", &auxiliar);
    }while((auxiliar!=(int)auxiliar)||(auxiliar<=0));
	
	B=auxiliar;
	
	if(A>=B){
		B=A;
	}
		
	for(i=A;i<=B;++i){
		contador=1;
		contaResto=0;
		while(contador<=i){//identificando a quantidade de divisores
			if((i%contador)==0){
				++contaResto;
			}
			++contador;
		}
		if(contaResto==2){//somando os numeros primos
			soma+=i;
		}
	}
	printf("A soma dos primos e: %d",soma);
	return 0;
}
