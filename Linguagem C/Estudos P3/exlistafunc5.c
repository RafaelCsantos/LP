#include <stdio.h>
#include <stdlib.h>

int primo();

int main() {

  int n;

  do {

    printf("Digite um numero positivo: ");
    scanf("%d", &n);
  }
    while (n <= 0);

     if (primo(n) == 2)
    printf("O n�mero %d eh primo!", n);

    else

    printf("O n�mero %d nao eh primo!", n);
return 0;
  }


int primo (int n1) {

int i,divide=0;

for (i = 1; i <= n1; i++) {

    if (n1 % i == 0) {
     divide++;
    }
  }

  return (divide);

}
