#include <stdio.h>
#include <stdlib.h>

int divi(int n1, int n2) {
int cont=0;

while(n1>=n2) {
    n1=n1-n2;
    cont++;
}
return cont;
}








int main () {

int n1,n2;

printf("numero a ser dividido");
    scanf("%d",&n1);
        printf("divisor");
            scanf("%d",&n2);

printf("a divisao eh %d",divi(n1,n2));



return 0;
}
