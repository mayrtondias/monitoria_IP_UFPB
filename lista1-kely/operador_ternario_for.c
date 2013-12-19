#include<stdio.h>
#include<stdlib.h>

/*Esse codigo tem com objetivo mostrar o funcionamento 
do operador ternario so que nesse caso foi tambem 
includo um laco de repeticao for*/

int main(){
	
	int x;
	for (x=0;x <=4; x++){
		x=x!=4? x+1:0;
		printf("\n%d",x);	
	}
	return 0;
}


