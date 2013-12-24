/*Codigo disponibilizado pela professora Kely Diana Villacorta Villacorta
da Universidade Federal da Paraiba
*/

//Exercício 11

#include <stdio.h>
#include <stdlib.h>
int main()
{ float v_sf;
    int v_s, N100,N50,N20,N10,N5,N2,N1,r1,r2,r3,r4,r5,r6;
    do{
		printf("Dig. um valor inteiro para Saque maior ou igual que R$ 5: ");
		scanf("%f",&v_sf);
	}while(v_sf<5||v_sf!=(int)v_sf);

	v_s=(int)v_sf;

	N100= (int)v_s/100;
	r1=v_s%100;
	N50=(int)r1/50;
	r2=r1%50;
	N20=(int)r2/20;
	r3=r2%20;
	N10=(int)r3/10;
	r4=r3%10;
	N5=(int)r4/5;
	r5=r4%5;
	N2=(int)r5/2;
	r6=r5%2;
	N1=r6;

	printf("Logo, o minimo numero de notas eh %d sendo:\n",N100+N50+N20+N10+N5+N2+N1);
	printf("Quantidade de notas de 100: %d\n", N100);
	printf("Quantidade de notas de 50: %d\n", N50);
	printf("Quantidade de notas de 20: %d\n", N20);
	printf("Quantidade de notas de 10: %d\n", N10);
	printf("Quantidade de notas de 5: %d\n", N5);
	printf("Quantidade de notas de 2: %d\n", N2);
	printf("Quantidade de notas de 1: %d\n", N1);

	system("pause");
	return 0;
}
