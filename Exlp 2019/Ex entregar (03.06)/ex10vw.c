#include <stdio.h>
#include <stdlib.h>

int primo();

int main() {

  int l1,lf,i,inter,qtd=0;


    printf("Digite um numero positivo pra iniciar o intervalo: ");
    scanf("%d", &l1);


    printf("Digite um numero positivo pra finalizar o intervalo: ");
    scanf("%d", &lf);

        inter=lf-l1;


    for (i=l1; i<=lf; i++) {

                if ( (i%2) == 0 ) {
                printf ("par");

            }
    }

    printf ("intervalo tem %d numeros",inter);



return 0;
}




  /*

int primo (int l1, int l2) {

int inter;
inter=l2-l1;


for (i = 1; i <= n1; i++) {

    if (n1 % i == 0) {
     divide++;
    }
  }
*/


