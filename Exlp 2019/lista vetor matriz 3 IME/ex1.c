#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int main () {

int v[MAX],i;


for (i=0; i<MAX; i++) {

printf ("Digite os numeros pos %d \n",i);
   scanf ("%d",&v[i]);



}

    for (i=MAX-1; i>=0; i--) {
        printf ("%d \t",v[i]);
    }









return 0;
}

