#include <stdio.h>
#include <stdlib.h>

int primo();

int main() {

  int l1,lf;


    printf("Digite um numero positivo pra iniciar o intervalo: ");
    scanf("%d", &l1);
    if(l1==0) {
        l1=1; }

    printf("Digite um numero positivo pra finalizar o intervalo: ");
    scanf("%d", &lf);

    printf("%d  numeros primos no intervalo de %d a %d",primo(l1,lf),l1,lf);

return 0;
  }


int primo (int l1, int l2) {

int i,j,n1,div=0,primos=0;

n1=l2-l1;



for (i=l1; i<=l2; i++) {
    for (j=l1; j<=l2; j++) {

if (i%j==0){
	div++;
      }
    }

    if(div==2) {
     primos++; }
    div=0;
  }

  return primos;

}






