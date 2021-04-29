#include <stdio.h>
#include <stdlib.h>

int primo();

int main() {

  int n,primos=0,i,n1=0,n2=10;

  for (i=n1; i<n2; i++) {
   if (primo(i) == 2)
    primos++;
  }
        printf("qte primos %d",primos);

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
