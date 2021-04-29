#include <stdio.h>
#include <stdlib.h>


int pote (int n, int p) {

int res=1, i;

        for (i=0; i<p; i++) {
            res=res*n;

        }


return res;
}





int main () {

int n,p;

printf("numero a ser elevado");
    scanf("%d",&n);

        printf("digite a potencia a ser elevado");
            scanf("%d",&p);

            printf("resultado eh %d",pote(n,p));
}


