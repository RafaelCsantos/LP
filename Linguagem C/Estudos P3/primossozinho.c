#include <stdio.h>
#include <stdlib.h>


primos(int n1) {

int i, cont=0;

for (i=1; i<=n1; i++) {

    if (n1%i==0) {
        cont++;
    }

}


return cont;
}





int main () {

int n1=0,n2=10,i,prim=0;

for (i=n1; i<=n2; i++) {

    if ( (primos(i))==2 )
            prim++;
}
    printf("quantidade de primos no intervalo %d",prim);


return 0;
}
