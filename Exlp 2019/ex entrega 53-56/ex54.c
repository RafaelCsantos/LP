#include <stdio.h>
#include <stdlib.h>

int main () {

int n,i;

printf ("digite o valor de n");
scanf ("%d",&n);

if (n>0) {


for (i=1; i<=n; i++) {

printf ("%d \n",i);

}
}

    else {
        printf ("digite o valor novamente \n \n \n");
        return main();
          }










return 0;
}
