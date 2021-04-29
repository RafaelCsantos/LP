#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
srand(time(NULL));
int i, j,vetor[10], r;
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
        printf("%d \t ",vetor[i]);
    }
return 0;
            }
