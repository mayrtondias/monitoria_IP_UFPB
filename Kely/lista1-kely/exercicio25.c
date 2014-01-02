/*Codigo disponibilizado pela professora Kely Diana Villacorta Villacorta
da Universidade Federal da Paraiba
*/

//Exercicio 25

#include <stdio.h>
#include <stdlib.h>

int main()
{
  float n_f;
  int n,l,i,j,k;
  do{
    printf("Dig. um numero inteiro positivo: ");
    scanf("%f",&n_f);
  } while(n_f<=0 || n_f!=(int)n_f);
  n=(int)n_f;

  j=1;
  k=1;
  for(l=1; l<=n;l++){
    for(i=j;i<=k ;i++){
       printf("%d\t",i);

    }
    printf("\n");
    j=i;
    k=i+l;

  }

  system("pause");
  return 0;
}
