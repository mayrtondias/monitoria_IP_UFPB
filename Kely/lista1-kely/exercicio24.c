/* Codigo disponibilizado pela professora Kely Diana Villacorta Villacorta
da Universidade Federal da Paraiba.
*/

//Exercicio 24


#include <stdio.h>
#include <stdlib.h>

int main()
{	float n_f,soma=0;
	int i,n;
	do{
    	printf("Dig. um n�mero inteiro positivo: ");
    	scanf("%f",&n_f);

	}while(n_f<=0||n_f!=(int)n_f);

  	n=(int)n_f;
  	for(i=1;i<=n;i++){
    	soma=soma+(float)(2*i-1)/i;
  	}

  	printf("A soma desejada eh: %f\n",soma);

	system("pause");
	return 0;
}
