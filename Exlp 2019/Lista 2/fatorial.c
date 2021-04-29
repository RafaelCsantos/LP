#include <stdio.h>
#include <stdlib.h>

int main ( ) {


int n=5,fat,calc,i;

fat=n;
calc=0;
for (i= n; i; i--) {

    calc=n*i;

            fat=(calc+fat);

                    }

                        printf("Fatorial %d",fat);




















return 0;

}
