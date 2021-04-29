#include <stdio.h>
#include <stdlib.h>

int mult(int n1, int n2) {

int i,res=0;

for (i=1; i<=n2; i++) {

    res=res+n1;

}

return res;


}




int main () {

int n1,n2;

printf("digite o numero a ser multiplicado");
    scanf("%d",&n1);

    printf("valor de vezes");
    scanf("%d",&n2);

    printf("valor multiplicacao %d",mult(n1,n2) );


}
