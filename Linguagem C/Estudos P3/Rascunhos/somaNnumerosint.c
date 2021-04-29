#include <stdio.h>
#include <stdlib.h>



int soma(int n) {

if (n==1) return 1;

else
    return (n+soma(n-1));







}



int main () {

int n;

printf("quantos numeros quer somar");
    scanf("%d",&n);

    printf("a soma dos %d primeiros numeros eh %d",n,soma(n));


return 0;
}
