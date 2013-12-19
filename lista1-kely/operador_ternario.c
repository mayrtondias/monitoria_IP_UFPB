#include<stdio.h>
#include<stdlib.h>

/*
*/

int main(){
	
	int a = 1, b = 2, c = -5, x = 0;
	
	x = a < b ? a < c ? a : c : b < c ? b : c;
	
	printf("\n%d",x);
	
	return 0;
}
