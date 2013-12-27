/*Codigo disponibilizado pela professora Kely Diana Villacorta Villacorta
da Universidade Federal da Paraiba
*/

//Exercício 15

#include <stdio.h>
#include <stdlib.h>

int main()
{	float ano_f;
	int ano;
	do{
	    printf("Dig. o ano a ser examinado:\n");
	    scanf("%f",&ano_f);
	}while(ano_f<=0||ano_f!=(int)ano_f);
	ano=(int)ano_f;
	
	
	if(((ano%4==0)&& (ano%100!=0))||(ano%400==0))
	{
	  printf("O Ano de %04d eh Bissexto!!\n",ano)  ;
	}else
	{
	  printf("O Ano de %04d NAO eh Bissexto!!\n",ano)  ;
	}
	
	
	system("pause");
	return 0;
}
