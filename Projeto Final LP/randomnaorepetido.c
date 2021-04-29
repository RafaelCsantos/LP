#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main () {
     int vetor[10],i=0,j=0,r;

srand(time(NULL));

for (i=0; i<10; i++) {
        do {
            vetor[i]=rand() %11;
            r=0;

                for (j=0; j<i; j++) {
                    if(vetor[i] ==  vetor[j] ) {

                        r=1;
                        break;
                    }



                }

                }while(r);



                }


    for(i=0; i<10; i++){
        printf("%d",vetor[i]);
    }
return 0;
}
